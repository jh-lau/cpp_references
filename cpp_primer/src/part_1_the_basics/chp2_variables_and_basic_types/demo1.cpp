//
// Created by liujianhan on 21/3/26.
//
#include <iostream>
using namespace std;

void showSizeOf()
{
    cout << "Size of bool is " << sizeof(bool) << endl;
    cout << "Size of char is " << sizeof(char) << endl;
    cout << "Size of wchar_t is " << sizeof(wchar_t) << endl;
    cout << "Size of char16_t is " << sizeof(char16_t) << endl;
    cout << "Size of char32_t is " << sizeof(char32_t) << endl << '\n';
    cout << "Size of short is " << sizeof(short) << endl;
    cout << "Size of int is " << sizeof(int) << endl;
    cout << "Size of long is " << sizeof(long) << endl;
    cout << "Size of long long is " << sizeof(long long) << endl << '\n';
    cout << "Size of float is " << sizeof(float) << endl;
    cout << "Size of double is " << sizeof(double) << endl;
    cout << "Size of long double is " << sizeof(long double) << endl;

}