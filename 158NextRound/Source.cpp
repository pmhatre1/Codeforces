#include<iostream>
using namespace std;

int main()
{
	int a, b;
	int count = 0;
	cin >> a >> b;
	
	int* array = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> array[i];
		
	}
	for (int i = 0; i < a; i++)
	{
		if (array[i] >= array[b-1] && array[i]>0)
			count++;
	}
	cout << count;
}