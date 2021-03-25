//
// Created by liujianhan on 21/3/23 16:37.
//
#include "src/chp_1/func.h"
#include "src/chp_2/demo_run.h"
#include <iostream>

using namespace std;

int main() {
//    display_fibon();
//    run_display();
//    inputAndCount();
//    showSizeOf();
    float i = 12;
    float &d = i;
    float *p = &i;
    *p = 123.f;
    cout << i << ' ' << d << ' ' << p << ' ' << endl;
    return 0;
}