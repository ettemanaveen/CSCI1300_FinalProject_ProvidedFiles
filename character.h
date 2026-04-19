#include <string>
#include <iostream>
using namespace std;

class Character {
    private:
        int number;
        string name;
        int agility;
        int focus;
        int luck;
    
    public:
        Character();
        Character(int number, string name, int agility, int focus, int luck);
        int getNumber();
        string getName();
        int getAgility();
        int getFocus();
        int getLuck();
        void setNumber(int number);
        void setName(string name);
        void setAgility(int agility);
        void setFocus(int focus);
        void setLuck(int luck);
};