#include <iostream>
#include <string>
using namespace std;

#include "character.h"

Character::Character() {
    number = 0;
    name = "";
    agility = 0;
    focus = 0;
    luck = 0;
}

Character::Character(int num, string n, int a, int f, int l) {
    number = num;
    name = n;
    agility = a;
    focus = f;
    luck = l;
}


// ========== Getters ==========
int Character::getNumber(){
    return number;
}
string Character::getName() {
    return name;
}
int Character::getAgility() {
    return agility;
}
int Character::getFocus() {
    return focus;
}
int Character::getLuck() {
    return luck;
}

// ========== Setters ==========
void Character::setNumber(int n) {
    number = n;
}
void Character::setName(string s) {
    name = s;
}
void Character::setAgility(int a) {
    agility = a;
}
void Character::setFocus(int f) {
    focus = f;
}
void Character::setLuck(int l) {
    luck = l;
}



