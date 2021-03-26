//
// Created by Liujianhan on 21/3/26.
//
#include <iostream>
using namespace std;

void function()
{
    int i = 0;
    i++;
    cout << i << endl;
}

void staticFunction()
{
    static int i(0);
    i++;
    cout << i << endl;
}


int showFunction()
{
    int cnt = 0;
    while (cnt < 10) {
//        function();
        staticFunction();
        cnt++;
    }
    return 0;
}