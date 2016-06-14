#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		while (true)
		{
			string temp; 
			cin >> temp;

			if (temp == "0000")
				break;

			int a = 0;
			int b = 0;

			for (int i = 0; i < 4; i++)
			{
				if (s[i] == temp[i])
					a++;

				for (int j = 0; j < 4; j++)
				if (s[i] == temp[j])
					b++;
			}

			printf("%dA%dB\n", a, b - a);
		}
	}
	return 0;
}