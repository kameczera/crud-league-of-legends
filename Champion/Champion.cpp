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
    name = "";
    title = "";
    blurb = "";
    partype = "";
    attack = -1;
    defense = -1;
    magic = -1;
    difficult = -1;
}

Champion::Champion(string name, string title, string blurb, vector<string> tags, string partype, int attack, int defense, int magic, int difficult, int *dateRelease[3])
{
    this->name = name;
    this->title = title;
    this->blurb = blurb;
    this->partype = partype;
    this->attack = attack;
    this->defense = defense;
    this->magic = magic;
    this->difficult = difficult;
    this->dateRelease = dateRelease;
}

Champion::Champion(string line)
{
    return;
}

void Champion::setName(string name)
{
    this->name = name;
}
string Champion::getName()
{
    return name;
}
void Champion::setTitle(string title)
{
    this->title = title;
}
string Champion::getTitle()
{
    return title;
}
void Champion::setBlurb(string blurb)
{
    this->blurb = blurb;
}
string Champion::getBlurb()
{
    return blurb;
}
void Champion::setPartype(string partype)
{
    this->partype = partype;
}
string Champion::getPartype()
{
    return partype;
}
void Champion::setAttack(int attack)
{
    this->attack = attack;
}
int Champion::getAttack()
{
    return attack;
}
void Champion::setDefense(int defense)
{
    this->defense = defense;
}
int Champion::getDefense()
{
    return defense;
}
void Champion::setMagic(int magic)
{
    this->magic = magic;
}
int Champion::getMagic()
{
    return magic;
}
void Champion::setDifficult(int difficult)
{
    this->difficult = difficult;
}