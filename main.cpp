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
        vector<Champion> d = *a.parseCSV();
        cout << d.at(0).getName();
    }
    catch (const exception &e)
    {
        cerr << "Erro: " << e.what() << endl;
    }
}

/*

ifstream arquivo(CSV);
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }
return 0;

*/