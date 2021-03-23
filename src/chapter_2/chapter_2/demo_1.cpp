#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please Enter your first name:";
	string user_name;
	cin >> user_name;
	cout << '\n'
		<< "Hello, "
		<< user_name
		<< " ... and goodbye!\n";

	return 0;
}