#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Vegetable {
    public :
        int maxHealth = 5;
        bool isDead = false;
        bool bloom = false;
        string buy = "Vous achetez ";
        string cut = "Vous taillez ";
        string wat = "Vous arrosez ";
        string inspect = "PV de ";
};