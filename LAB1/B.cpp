#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a;

	cout << "Введите число:";
	cin >> a;
	
	cout << "The next number for the number " << a << " is " << a + 1 << "."<<endl;
	cout << "The previous number for the number " << a << " is " << a - 1<<"." << endl;
}

