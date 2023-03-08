#include <iostream>
#include <string.h>

using namespace std;

int GetValue()
{
	int value;
	cin >> value;

	while (value < 0)
	{
		cout << "Введите значение больше 0!" << endl;
		cin >> value;
	}
	return value;
}

int main()
{
	setlocale(0, "");

	int const size = 50;
	char buffer[size]{};
	cout << "Введите предложение: " << endl;
	gets_s(buffer);

	int pointStart{}, pointEnd{};

	cout << "Введите начальную точку: " << endl;
	pointStart = GetValue();

	cout << "Введите конечную точку: " << endl;
	pointEnd = GetValue();

	char* NewString = new char[size];

	for (int i = pointStart; i <= pointEnd; i++)
	{
		*(NewString + i) = buffer[i];
	}

	cout << "Текст между двумя индексами: " << endl;

	for (int i = pointStart; i <= pointEnd; i++)
	{
		cout << *(NewString + i);
	}

	return 0;
}