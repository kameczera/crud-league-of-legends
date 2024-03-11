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
                stringstream ss(line);
                champions->push_back(*readChampion(line));
            }
        }

        file.close();
        return champions;
    }
    catch (const exception &e)
    {
        cerr << "Erro: " << e.what() << endl;
        return nullptr;
    }
}
Champion* readChampion(string line)
{
    try{
        Champion *c = new Champion();
        stringstream ss(line);
        string cell;
        vector<string> cells;
        while (getline(ss, cell, ','))
        {
            cells.push_back(cell);
        }
        // Considering that the input will be in this format: Name;Class;Role;Tier;Score;Trend;Win %;Role %;Pick %;Ban %;KDA
        // Observation: Due to "Trend" & "Role %" (insignificant data), I decided to create this class considering an input with "Trend" & "Role %", the method below will do the same thing as this one, but disregarding "Trend" & "Role %"
        c->setName(cells[0]);
        c->setClassChamp(cells[1]);
        c->setRole(cells[2]);
        // Here, we notice that, if a champion is god tier, it will take the letter G
        // c->setTier(cells[3][0]);
        // Observation: Winrate, Pick and Ban is given by %
        // c->setWinrate(stof(cells[5]));
        // c->setPick(stof(cells[5]));
        // c->setBan(stof(cells[5]));
        return c;
    }catch(const exception &e){
        cerr << "Erro: " << e.what() << endl;
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