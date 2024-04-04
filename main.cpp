#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "CSVHandler/CSVHandler.h"
using namespace std;

int main()
{
    try
    {
        CSVHandler a;
        vector<Champion> d = a.parseCSV();
    }
    catch (const exception &e)
    {
        cerr << "Erro: " << e.what() << endl;
    }
    return 0;
}