//Task3
#include <iostream>

using namespace std;

void main()
{
	double N = 0;
	cout << "\nEnter: N = "; cin >> N;

	double E = 0;
	for (double k = N; k < 19; k++)
	{
		E += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
		N++;
	}

	cout << "\nE = " << E;
}