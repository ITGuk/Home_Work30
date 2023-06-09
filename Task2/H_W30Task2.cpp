//Task2
#include <iostream>

using namespace std;

void main()
{
	int size = 11;
	char* str = new char[size];

	cout << "\nEnter string: ";	
	cin >> str;

	bool boo1 = false;

	for (int i = 0; i < size; i++)
	{
		if (str[i + 1] != '\0')
		{
			if (str[i] <= str[i + 1])
			{
				boo1 = true;
			}
			else
			{
				boo1 = false;
				break;
			}
		}
		else
		{
			break;
		}
	}
	if (boo1)
	{
		cout << "\nYES\n";
	}
	else
	{
		cout << "\nNO\n";
	}
}