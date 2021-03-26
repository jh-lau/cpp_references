//
// Created by Liujianhan on 21/3/23.
//
/*
 * Using your favorite editor, type two or more lines of text into a file. Write a program to open
the file, reading each word into a vector<string> object. Iterate over the vector,
displaying it to cout. That done, sort the words using the sort() generic algorithm.
 */
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int readAndSort()
{
    ifstream in_file(R"(D:\Github\C++_Road\C++Tutorial\essential_cpp\src\chp_1\text.txt)");
    if (!in_file) {
        cerr << "oops! unable to open input file\n"; return -1;
    }
    ofstream out_file(R"(D:\Github\C++_Road\C++Tutorial\essential_cpp\src\chp_1\text.sort)");
    if (!out_file) {
        cerr << "oops! unable to open input file\n";
        return -2;
    }
    string word;
    vector<string> text;
    while (in_file >> word) {
        text.push_back(word);
    }
    int ix;
    cout << "unsorted text: \n";

    for (ix = 0; ix < text.size(); ++ix) {
        cout << text[ix] << ' ';
    }
    cout << endl;
    sort(text.begin(), text.end());
    out_file << "sorted text: \n";
    for (ix = 0; ix < text.size(); ++ix) {
        out_file << text[ix] << ' ';
    }
    out_file << endl;
    return 0;
}