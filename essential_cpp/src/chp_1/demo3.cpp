/*
Write a program to read in a sequence of integers from standard input. Place the values, in
turn, in a built-in array and a vector. Iterate over the containers to sum the values. Display
the sum and average of the entered values to standard output.
*/
#include <iostream>
#include <vector>

using namespace std;

int calcAverage() {
    vector<int> ivec;
    int ival;
    int sum = 0;
    while (cin >> ival) {
        ivec.push_back(ival);
    }
    for (int ix = 0; ix < ivec.size(); ++ix) {
        sum += ivec[ix];
    }
    int average = sum / ivec.size();
    cout << "Sum of " << ivec.size()
         << " elements: " << sum
         << ". Average: " << average << endl;
}

int calcAverage2() {
    const int array_size = 128;
    int ia[array_size];
    int sum, ival, icnt = 0;

    while (cin >> ival && icnt < array_size)
        ia[icnt++] = ival;

    for (int ix = 0; ix < icnt; ++ix)
        sum += ia[ix];

    double average = sum / icnt;
    cout << "Sum of " << icnt
         << " elements: " << sum
         << ". Average: " << average << endl;
}