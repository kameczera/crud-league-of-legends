#ifndef CHAMPION_H
#define CHAMPION_H
#include <string>
#include "../Date/Date.h"
using namespace std;

// Champion declaration
// Observartion: score, winrate, pick and ban are both written in % in CSV. They are set as float (Example: 50% -> 50.00; 39,12% -> 39.12)
class Champion
{
private:
    string name;
    string title;
    string blurb;
    vector<string> tags;
    string partype;
    int attack;
    int defense;
    int magic;
    int difficult;
    Date dateRelease;

public:
    Champion();
    Champion(string name, string title, string blurb, vector<string> tags, string partype, int attack, int defense, int magic, int difficult, Date dateRelease);
    Champion(string line);
    void setName(string nome);
    string getName();

    void setTitle(string title);
    string getTitle();
    void setBlurb(string blurb);
    string getBlurb();
    void setTags(vector<string> tags);
    void setTags(string tags);
    string getTags();
    void setPartype(string partype);
    string getPartype();
    void setAttack(int attack);
    int getAttack();
    void setDefense(int defense);
    int getDefense();
    void setMagic(int magic);
    int getMagic();
    void setDifficult(int difficult);
    int getDifficult();
};

#endif