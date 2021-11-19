/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */
#include <iostream>
#include <string>
using namespace std;

class Name_value {
public:
    //declare variables
    string n;
    int s;
    Name_value(string name, int score) {
        //make values equal each other
        n = name;
        s = score;
    }
};
