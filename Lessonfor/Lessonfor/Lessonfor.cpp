

#include <iostream>
using namespace std;
int main()
{
	cout << "eded daxil edin - ";
	int num1;
	cin >> num1;
	for (int i = 0; i < num1; i++)
	{
		for (int j = 0; j < num1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}



	cout << "eded daxil edin - ";
	int num2;
	cin >> num2;
	for (int i = 0; i < num2; i++)
	{
		for (int j = 0; j < num2; j++)
		{
			if (i == 0 || i == num2 - 1)
				cout << "*";
			else if (j == 0 || j == num2 - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}



	cout << "eded daxil edin - ";
	int num3;
	cin >> num3;
	for (int i = 0; i < num3; i++)
	{
		for (int j = 0; j < num3; j++)
		{
			if (i == 0 || i == num3 - 1 || i == (num3-1)/2)
				cout << "*";
			else if (j == 0 || j == num3 - 1 || j == (num3 - 1) / 2)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}





	cout << "eded daxil edin - ";
	int num4;
	cin >> num4;
	for (int i = 0; i < num4; i++)
	{
		for (int j = 0; j < num4; j++)
		{
			if (i == 0 || i == num4 - 1 )
				cout << "*";
			else if (j == 0 || j == num4 - 1 )
				cout << "*";
			else if (i < num4 / 3 - 1 && j < num4/3-1) {
				if (i == 0 || i == num4 / 3 - 2)
					cout << "*";
				else if (j == 0 || j == num4 / 3 - 2)
					cout << "*";
				else
					cout << " ";
			}
			else if (i < num4 / 3 - 1 && j > num4- num4 / 3 ) {
				if (i == 0 || i == num4 / 3 - 2)
					cout << "*";
				else if (j == num4- num4 / 3 + 1 || j == num4-1)
					cout << "*";
				else
					cout << " ";
			}
			else if (i > num4- num4 / 3  && j < num4 / 3 - 1) {
				if (i == num4- num4 / 3 + 1 || i == num4-1)
					cout << "*";
				else if (j == 0 || j == num4 / 3 - 2)
					cout << "*";
				else
					cout << " ";
			}
			else if (i >num4 - num4 / 3  && j > num4 - num4 / 3 ) {
				if (i == num4- num4 / 3 + 1 || i == num4-1)
					cout << "*";
				else if (j == num4 - num4 / 3 + 1 || j == num4 - 1)
					cout << "*";
				else
					cout << " ";
			}
			else
				cout << " ";

		}
		cout << endl;

	}




	cout << "eded daxil edin - ";
	int num5;
	cin >> num5;
	for (int i = 0; i < num5; i++)
	{
		for (int j = 0; j < num5; j++)
		{
			if (i == 0 || i == num5 - 1)
				cout << "*";
			else if (j == 0 || j == num5 - 1)
				cout << "*";
			else if (i == j || i == num5 - 1 - j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

}
