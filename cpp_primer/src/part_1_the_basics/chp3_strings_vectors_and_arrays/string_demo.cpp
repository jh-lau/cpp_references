//
// Created by liujianhan on 21/3/26.
//
#include <iostream>
#include <string>

using namespace std;

void showString() {
    string s1 = "hiya";  // 拷贝初始化
    string s2(10, 'c');  // 直接初始化
    string s3{"Hello world"};
    string s4 = {"Where amazing happens"};
    cout << s2.empty() << ' ' << s2.size() << ' ' << s3[2] << ' ' << s4[3] << endl;
//    string s;
//    cout << "input something here: ";
//    cin >> s;
//    cout << s << endl;
    string line;
    while (getline(cin, line)) {
        cout << line << endl;
    }
}