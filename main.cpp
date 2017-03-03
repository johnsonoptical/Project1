//
// Created by user on 3/2/17.
//
#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

int main() {
    string name;
    int height;
    double weight;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your Height (in inches): ";
    cin >> height;
    cout << "Enter your weight (in pounds): ";
    cin >> weight;

    BMI Athlete_1(name, height, weight);

    cout << endl << "Patient Name: " << Athlete_1.getName() << endl <<
         "Height: " << Athlete_1.getHeight() << endl <<
         "Weight: " << Athlete_1.getWeight() << endl;

    return 0;
}

