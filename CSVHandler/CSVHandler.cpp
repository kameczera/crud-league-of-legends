#include "CSVHandler.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
// const string CSV = "../dados.csv";
using namespace std;

// Champion methods and implementations
CSVHandler::CSVHandler()
{
    fileName = "";
    mainFile = nullptr;
}

CSVHandler::CSVHandler(string fileName, FILE *mainFile)
{
    this->fileName = fileName;
    this->mainFile = mainFile;
}

vector<Champion> CSVHandler::parseCSV()
{
    fileName = "dados.csv";
    // Here, I prefered to use a FILE pointer just because, for some reason, ifstream was not working
    mainFile = fopen(fileName.c_str(), "r");
    vector<Champion> champions;
    if (mainFile != nullptr)
    {
        char linha[100];
        // Ignoring first line because it's just the header of the csv
        fgets(linha, sizeof(linha), mainFile);
        while (fgets(linha, sizeof(linha), mainFile))
        {
            Champion c;
            istringstream ss(linha);
            string token;
            getline(ss, token, ';');
            c.setName(token);
            getline(ss, token, ';');
            c.setTitle(token);
            getline(ss, token, ';');
            c.setBlurb(token);
            getline(ss, token, ';');
            c.setTags(token);


            getline(ss, token, ';');
            c.setPartype(token);
        }
    }
    else
    {
        cerr << "Erro ao abrir o arquivo." << endl;
    }
    fclose(mainFile);
    return champions;
}

void CSVHandler::setFileName(string fileName)
{
    this->fileName = fileName;
}

string CSVHandler::getFileName()
{
    return fileName;
}

void CSVHandler::setMainFile(FILE *mainFile)
{
    this->mainFile = mainFile;
}

FILE *CSVHandler::getMainFile()
{
    return mainFile;
}

void CSVHandler::setAuxiliaryFiles(vector<FILE *> auxiliaryFiles)
{
    this->auxiliaryFiles = auxiliaryFiles;
}

vector<FILE *> CSVHandler::getAuxiliaryFiles()
{
    return auxiliaryFiles;
}