//
// Created by Liujianhan on 21/3/23.
//
#include <iostream>
#include <vector>

using namespace std;

bool fibon_elem(int pos, int &elem) {
    if (pos <= 0 || pos > 1024) {
        elem = 0;
        return false;
    }
    elem = 1;
    int n2 = 1, n1 = 1;
    for (int ix = 3; ix <= pos; ++ix) {
        elem = n2 + n1;
        n2 = n1;
        n1 = elem;
    }
    return true;
}

bool print_sequence(int pos) {
    if (pos <= 0 || pos > 1024) {
        cerr << "invalid position: " << pos
             << " -- cannot handle request!\n";
        return false;
    }
    cout << "The Fibonacci Sequence for " << pos << " position : \n\t";
    switch (pos) {
        default:
            cout << "1 ";
        case 1:
            cout << "1 ";
            break;
    }
    int elem;
    int n2 = 1, n1 = 1;
    for (int ix = 3; ix <= pos; ++ix) {
        elem = n2 + n1;
        n2 = n1;
        n1 = elem;
        cout << elem << (!(ix % 10) ? "\n\t" : " ");
    }
    cout << endl;
    return true;
}

void display(vector<int> vec)
{
    for (int ix : vec) {
        cout << vec[ix] << ' ';
    }
    cout << endl;
}

void swap(int & val1, int & val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void bubble_sort(vector<int> &vec)
{
    for (int ix: vec) {
        for (int jx = ix + 1; jx < vec.size(); ++jx) {
            if (vec[ix] > vec[jx]) {
                swap(vec[ix], vec[jx]);
            }
        }
    }
}