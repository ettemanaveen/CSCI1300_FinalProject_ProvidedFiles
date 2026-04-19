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
        int getNumber() const;
        string getName() const;
        int getAgility() const;
        int getFocus() const;
        int getLuck() const;
        void setNumber(int number);
        void setName(string name);
        void setAgility(int agility);
        void setFocus(int focus);
        void setLuck(int luck);
};