#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <stdarg.h>

using namespace std;

void up_and_down(int n)
{
	cout << "Level: = " << n << endl;
	if (n < 4)
	{
		up_and_down(n + 1);
		cout << "Level: = " << n << endl;
	}
}

int up_and_down1(int n)
{
	cout << "Level: = " << n << endl;
	if (n < 4)
	{
		int result = up_and_down1(n + 1);
		cout << "Result = " << result << endl;
		cout << "Level: = " << n << endl;
	}
	return n;
}

int t2(int a, char b)
{
	cout << (int)b << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b << endl;
	}

	return 0;
}

int fact(int n)
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans *= n;
	return ans;
}

long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n*rfact(n - 1);
	else
		ans = 1;
	return ans;
}