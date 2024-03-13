#ifndef CSVHANDLER_H
#define CSVHANDLER_H
#include <string>
#include <vector>
#include "../Champion/Champion.h"
using namespace std;

// CSVHandler class declaration
// Observation: This class is NOT generic. That means that this class can handle just this specific data base (league of legends champions)
class CSVHandler {
    private:
        string fileName;
        FILE* mainFile;
        vector<FILE*> auxiliaryFiles;

    public:
        CSVHandler();
        CSVHandler(std::string fileName, FILE* mainFile);
        vector<Champion>* parseCSV();
        void setFileName(string fileName);
        string getFileName();
        void setMainFile(FILE* mainFile);
        FILE* getMainFile();
        void setAuxiliaryFiles(vector<FILE*> auxiliaryFiles);
        vector<FILE*> getAuxiliaryFiles();
        void changeFileName(string name);
};

#endif