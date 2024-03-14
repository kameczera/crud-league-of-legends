#include "Champion.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
// Champion methods and implementations
Champion::Champion()
{
    name = "default";
    classChamp = "default";
    role = "default";
    tier = 'd';
    score = 0.00;
    winrate = 0.00;
    pick = 0.00;
    ban = 0.00;
}

Champion::Champion(string name, string classChamp, string role, char tier, float score, float winrate, float pick, float ban)
{
    this->name = name;
    this->classChamp = classChamp;
    this->role = role;
    this->tier = tier;
    this->score = score;
    this->winrate = winrate;
    this->pick = pick;
    this->ban = ban;
}

Champion::Champion(string line)
{
    {
        try
        {
            Champion c;
            stringstream ss(line);
            string cell;
            vector<string> cells;
            while (getline(ss, cell, ';'))
            {
                cells.push_back(cell);
            }
            // Considering that the input will be in this format: Name;Class;Role;Tier;Score;Trend;Win %;Role %;Pick %;Ban %;KDA
            // Observation: Due to "Trend" & "Role %" (insignificant data), I decided to create this class considering an input with "Trend" & "Role %", the method below will do the same thing as this one, but disregarding "Trend" & "Role %"
            this->name = cells[0];
            this->classChamp = cells[1];
            this->role = cells[2];
            // Here, we notice that, if a champion is god tier, it will take the letter G
            c.setTier(cells[3][0]);
            // Observation: Winrate, Pick and Ban is given by %
            c.setWinrate(stof(cells[5]));
            c.setPick(stof(cells[5]));
            c.setBan(stof(cells[5]));
        }
        catch (const exception &e)
        {
            cerr << "Erro: " << e.what() << endl;
        }
    }
}

void Champion::setName(string name)
{
    this->name = name;
}
string Champion::getName()
{
    return name;
}
void Champion::setClassChamp(string ClassChamp)
{
    this->classChamp = ClassChamp;
}
string Champion::getClassChamp()
{
    return classChamp;
}
void Champion::setRole(string role)
{
    this->role = role;
}
string Champion::getRole()
{
    return role;
}
void Champion::setTier(char tier)
{
    this->tier = tier;
}
char Champion::getTier()
{
    return tier;
}
void Champion::setScore(float Score)
{
    this->score = score;
}
float Champion::getScore()
{
    return score;
}
void Champion::setWinrate(float winrate)
{
    this->winrate = winrate;
}
float Champion::getWinrate()
{
    return winrate;
}
void Champion::setPick(float pick)
{
    this->pick = pick;
}
float Champion::getPick()
{
    return pick;
}
void Champion::setBan(float ban)
{
    this->ban = ban;
}
float Champion::getBan()
{
    return ban;
}