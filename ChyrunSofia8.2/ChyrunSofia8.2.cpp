// ChyrunSofia8.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_08_2.cpp
// < Чирун Софія >
// Лабораторна робота № 8.2
// Опрацювання літерних рядків
// Варіант 18

#include <iostream>
#include <string>
using namespace std;

size_t MinLength(const string s)
{
	int k = 0;
	size_t len = 0, min;
	size_t start = 0,finish;
	while ((start = s.find_first_of("abcdfeghijklmnopqrstuvwxyz", start)) != -1)
	{
		finish = s.find_first_not_of("abcdfeghijklmnopqrstuvwxyz", start + 1);
		if (finish == -1)
		   finish = s.length();
		len = finish - start;
		if (k == 0)
		   min = len;
		k++;
		if (len < min)
		   min = len;
		start = finish + 1;
	}
	return min;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Length of min groups of words leters: " << MinLength(str) << endl;
	return 0;
}
