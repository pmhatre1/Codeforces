#include<iostream>
using namespace std;

int totalOnes(int* num)
{
	int hundred, ten, unit = 0;
    hundred = (*num) / 100;
	ten = ((*num) % 100) / 10;
	unit = (*num) % 10;

	return (hundred + ten + unit);
}

int main()
{

	int n;
	cin >> n;
	int** num;
	num = new int* [n];

	for (int i = 0; i < n; i++)
	{
		num[i] = new int[3];
		cin >> (*num[i]);
	}

	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		int number = totalOnes(num[i]);
		if (number > 1)
			count++;

	}

	cout << count;

}