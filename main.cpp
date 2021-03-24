//
// Created by liujianhan on 21/3/23 16:37.
//
#include "src/chp_1/func.h"
#include "src/chp_2/func.h"
#include <iostream>

using namespace std;

int main() {
//    printName();
//    calcAverage2();
    int pos, elem;
    char ch;
    bool more = true;
    while (more) {
        cout << "Please enter a  position: ";
        cin >> pos;
        if (fibon_elem(pos, elem)) {
            cout << "element # " << pos
            << " is " << elem << endl;
        } else {
            cout << "Sorry. Could not calculate element # " << pos << endl;
        }
        cout << "Would you like to try again? (y/n) ";
        cin >> ch;
        if (ch == 'n' || ch == 'N') {
            more = false;
        } else if (ch == 'y' || ch == 'Y') {
            more = true;
        } else {
            cout << "Not valid option, please try again.\n";
        }
    }
    return 0;
}