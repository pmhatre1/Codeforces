#include <iostream>
#include <string>

using namespace std;


int totalWords(const char* words)
{
	int count = 0;
	int temp = 1;
	while (*words)
	{
		if (*words == ' ' || *words == '\n' || *words == '\t')
		{
			temp = 0;
		}

		else if (temp == 1)
		{
			temp = 1;
			count++;
		}

		++words;
	}

	return count;
}


int main()
{
	int n;
	cin >> n;

	string* words = new string[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> words[i];
	}

	for (int i = 0; i < n; ++i)
	{
		int number = totalWords(words[i].c_str());
		if ((number) <= 10)
		{
			cout << words[i];
			cout << "\n";
		}
		else
		{
			cout << (words + i)->at(0) << (number - 2) << (words + i)->at(number - 1);
			cout << "\n";
		}
	}



}

