//
// Created by liujianhan on 21/3/24.
//
#include <vector>
#include <iostream>
#include "demo1.h"

using namespace std;

int display_fibon()
{
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

int run_display() {
    int ia[8] = {8, 34, 3, 13, 1, 21, 5, 2};
    vector<int> vec(ia, ia + 8);

    cout << "vector before sort: ";
    display(vec);

    bubble_sort(vec);

    cout << "vector after sort: ";

    display(vec);

    return 0;
}