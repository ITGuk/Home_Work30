//Task1
#include <iostream>

using namespace std;

void main()
{
	int size = 11;
	char* arr = new char[size];

	cout << "Enter string: ";
	cin >> arr;

	bool letters = false;
	bool digits = false;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != '\0')
		{
			if (arr[i] >= 65 && arr[i] <= 122)
			{
				letters = true;
			}
			else if (arr[i] >= 48 && arr[i] <= 57)
			{
				digits = true;
			}
		}
		else
		{
			break;
		}
	}
	if (letters && !digits)
	{
		cout << "\nLetters\n";
	}
	else if (!letters && digits)
	{
		cout << "\nDigits\n";
	}
	else
	{
		cout << "\nAnother\n";
	}
}