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

vector<Champion>* CSVHandler::parseCSV()
{
    try
    {
        ifstream file(CSV);
        vector<string> lines;
        vector<Champion>* champions = new vector<Champion>;
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                champions->push_back(Champion(line));
            }
        }

        file.close();
        return champions;
    }
    catch (const exception &e)
    {
        return nullptr;
    }
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