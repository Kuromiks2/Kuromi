#include <iostream>
#include <vector>	
#include <string>

using namespace std;

struct Point {
	string firstName;
	string lastName;
	int age;
	int phoneNumber;
};

int main(Point) {
	setlocale(LC_ALL, "");
	Point user;
	cout << "Введите Имя: " << endl;
	cin >> user.firstName;
	cout << "Введите Фамилию: " << endl;
	cin >> user.lastName;
	cout << "Введите ваш возраст: " << endl;
	cin >> user.age;
	cout << "Введите ваш номер телефона: " << endl;
	cin >> user.phoneNumber;
}
