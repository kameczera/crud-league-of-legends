#ifndef CHAMPION_H
#define CHAMPION_H
#include <string>

// Champion declaration
// Observartion: score, winrate, pick and ban are both written in % in CSV. They are set as float (Example: 50% -> 50.00; 39,12% -> 39.12)
class Champion {
    private:
        std::string name;
        std::string classChamp;
        std::string role;
        char tier;
        float score;
        float winrate;
        float pick;
        float ban;

    public:
        Champion();
        Champion(std::string name, std::string classChamp, std::string role, char tier, float score, float winrate, float pick, float ban);
        void setName(std::string nome);
        std::string getName();

        void setClassChamp(std::string classChamp);
        std::string getClassChamp();
        void setRole(std::string role);
        std::string getRole();
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