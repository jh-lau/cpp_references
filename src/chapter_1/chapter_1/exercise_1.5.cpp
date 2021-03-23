/*
Write a program to ask the user his or her name.Read the response.Confirm that the input
is at least two characters in length.If the name seems valid, respond to the user.Provide two implementations : one using a C - style character string, and the other using a string class object.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
using namespace std;

int e15_1()
{
	string user_name;
	cout << "Please enter your name: ";
	cin >> user_name;
	switch (user_name.size()) {
	case 0:
		cout << "Ah, the user with no name."
			<< "Well, ok, hi, user with no name\n";
		break;
	case 1:
		cout << "A 1-characater name? Hmm, have you read Kafka?"
			<< "hello, " << user_name << endl;
		break;
	default:
		cout << "Hello, " << user_name
			<< " -- happy to make your acquaintance!\n";
		break;
	}
	return 0;
}

int e15_2() {
	const int nm_size = 128;
	char user_name[nm_size];
	cout << "Please enter your name: ";
	cin >> setw(nm_size) >> user_name;
	switch (strlen(user_name))
	{
	case 127:
		cout << "that is a very big name, indeed--\n";
	default:
		cout << "Hello, " << user_name
			<< " -- happy to make your acquaintance!\n";
		break;
	}
	return 0;
}