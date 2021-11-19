/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */
#include <iostream>
#include <vector>
#include <string>
#include "Name_value.cpp"
using namespace std;

int main() {
    //declare variables
    vector<Name_value> list;
    string name;
    int score;
    int flag = 0;
    //ask user for input
    cout << "Enter a name and score. To stop, enter \"NoName 0\": ";
    cin >> name;
    cin >> score;
    //loop to see if name has been said already or the user doesnt enter NoName 0
    while(name.compare("NoName") != 0 && score != 0) {
        for(int i = 0; i < list.size(); i++) {
            if(name == list[i].n) {
                cout << "You have already entered that name.\n";
                flag = 1;
                break;
            }
         }
         if(flag == 1)
            break;
        Name_value temp(name, score);
        list.push_back(temp);
        cin >> name;
        cin >> score;
    }
    //print name
    cout << "The list:\n";
    for(int i = 0; i < list.size(); i++){
        cout << list[i].n << " " << list[i].s << "\n";
    }

    return 0;
}



