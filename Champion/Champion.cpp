#include "Champion.h"

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

Champion::Champion(std::string name, std::string classChamp, std::string role, char tier, float score, float winrate, float pick, float ban)
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

void Champion::setName(std::string name)
{
    this->name = name;
}
std::string Champion::getName()
{
    return name;
}
void Champion::setClassChamp(std::string ClassChamp)
{
    this->classChamp = ClassChamp;
}
std::string Champion::getClassChamp()
{
    return classChamp;
}
void Champion::setRole(std::string role)
{
    this->role = role;
}
std::string Champion::getRole()
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