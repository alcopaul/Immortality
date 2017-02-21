#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numberofwakingup = 13140;
	int h = 1;
	for (int i = numberofwakingup; i >= 0; i--)
	{
		cout << i << endl;
		if (i == 0)
		{
			while (i == 0)
			{
				cout << h++ << endl;
			}
		}
	}
	_getch();
}
