// Рекурсия - сжирает память

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <stdarg.h> // для va_list
using namespace std;
#include "Header.h"

void main()
{	
	int num;
	while (scanf("%d", &num) == 1) // то же что и cin >>
	{
		if (num < 0)
			cout << "Please don't enter negative numbers";
		else if (num > 12)
			cout << "The input type must be less than 13";
		else
		{
			long result = fact(num);
			cout << "num = " << num << " - Result = " << result << endl << endl;
			long resultR = rfact(num);
			cout << "num = " << num << " - ResultR = " << resultR << endl << endl;
		}
	}
	
	
	//return 0;
	/*t2(5, '*');*/
	//up_and_down(1);
	//cout << endl;

}
//
//void up_and_down(int n)
//{
//	cout << "Level: = " << n << endl;
//	if (n < 4)
//	{
//		up_and_down(n + 1);
//		cout << "Level: = " << n << endl;
//	}
//}
//
//int up_and_down1(int n)
//{
//	cout << "Level: = " << n << endl;
//	if (n < 4)
//	{
//		int result = up_and_down1(n + 1);
//		cout << "Result = " << result << endl;
//		cout << "Level: = " << n << endl;
//	}
//	return n;
//}
//
//int t2(int a, char b)
//{
//	cout << (int)b << endl;
//	for (int i = 0; i < a; i++)
//	{
//		cout << b << endl;
//	}
//
//	return 0;
//}
//
//int fact(int n)
//{
//	long ans;
//	for (ans = 1; n > 1; n--)
//		ans *= n;
//	return ans;
//}
//
//long rfact(int n)
//{
//	long ans;
//	if (n > 0)
//		ans = n*rfact(n - 1);
//	else
//		ans = 1;
//	return ans;
//}