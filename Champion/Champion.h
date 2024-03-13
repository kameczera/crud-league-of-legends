#ifndef CHAMPION_H
#define CHAMPION_H
#include <string>
using namespace std;

// Champion declaration
// Observartion: score, winrate, pick and ban are both written in % in CSV. They are set as float (Example: 50% -> 50.00; 39,12% -> 39.12)
class Champion {
    private:
        string name;
        string classChamp;
        string role;
        char tier;
        float score;
        float winrate;
        float pick;
        float ban;

    public:
        Champion();
        Champion(string name, string classChamp, string role, char tier, float score, float winrate, float pick, float ban);
        Champion(string line);
        void setName(string nome);
        string getName();

        void setClassChamp(string classChamp);
        string getClassChamp();
        void setRole(string role);
        string getRole();
        void setTier(char tier);
        char getTier();
        void setScore(float Score);
        float getScore();
        void setWinrate(float winrate);
        float getWinrate();
        void setPick(float pick);
        float getPick();
        void setBan(float ban);
        float getBan();
};

#endif