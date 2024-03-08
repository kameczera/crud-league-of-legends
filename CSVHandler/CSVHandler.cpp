#include "CSVHandler.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
const string CSV = "./dados.csv";
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

vector<string> CSVHandler::parseCSV()
{
    try
    {
        ifstream arquivo(CSV);
        vector<string> lines;
        if (arquivo.is_open())
        {
            string linha;
            while (getline(arquivo, linha, '\n'))
            {
                stringstream ss(linha);
                cout << linha;
                lines.push_back(linha);
            }
        }

        arquivo.close();
        return lines;
    }
    catch (const exception &e)
    {
        cerr << "Erro: " << e.what() << endl;
    }
}
// vector<Champion> parseCSV(int num);

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