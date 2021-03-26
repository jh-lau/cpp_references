//
// Created by liujianhan on 21/3/25.
// demo from primer c++
//

#include <iostream>
using namespace std;

int inputAndCount()
{
    int currVal = 0, val = 0;
    if (cin >> currVal) {
        int cnt =1;
        while (cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                cout << currVal << " occurs " << cnt << " times " << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times " << endl;
    }
    return 0;
}