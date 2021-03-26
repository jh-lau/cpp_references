//
// Created by Liujianhan on 21/3/26.
// Non-static method can't access static attribute or invoke method

#include <iostream>
using namespace std;

struct Entity
{
    int x, y;
//    static int x, y;
    void Print()
    {
        cout << x << ", " << y << endl;
    }
};


int showEntity()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1 = {5, 8};
    e.Print();
    e1.Print();

    return 0;
}