#include<iostream>

using namespace std;

int main()
{
	int m, d;
	while(cin >> m >> d)
	{
		if (m == 1)
		{
			if (d < 20)
				cout << "Capricorn";
			else
				cout << "Aquarius";
		}
		else if (m == 2)
		{
			if (d < 19)
				cout << "Aquarius";
			else
				cout << "Pisces";
		}
		else if (m == 3)
		{
			if (d < 21)
				cout << "Pisces";
			else
				cout << "Aries";
		}
		else if (m == 4)
		{
			if (d < 20)
				cout << "Aries";
			else
				cout << "Taurus";
		}
		else if (m == 5)
		{
			if (d < 21)
				cout << "Taurus";
			else
				cout << "Gemini";
		}
		else if (m == 6)
		{
			if (d < 22)
				cout << "Gemini";
			else
				cout << "Cancer";
		}
		else if (m == 7)
		{
			if (d < 23)
				cout << "Cancer";
			else
				cout << "Leo";
		}
		else if (m == 8)
		{
			if (d < 23)
				cout << "Leo";
			else
				cout << "Virgo";
		}
		else if (m == 9)
		{
			if (d < 23)
				cout << "Virgo";
			else
				cout << "Libra";
		}
		else if (m == 10)
		{
			if (d < 24)
				cout << "Libra";
			else
				cout << "Scorpio";
		}
		else if (m == 11)
		{
			if (d < 23)
				cout << "Scorpio";
			else
				cout << "Sagittarius";
		}
		else if (m == 12)
		{
			if (d < 22)
				cout << "Sagittarius";
			else
				cout << "Capricorn";
		}
		cout << endl;
	}
	return 0;
}