#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main()
{
	char numbers[10]{'0','1','2','3','4','5','6','7','8','9'};
	string line;
	string new_line;
	int dot_index = 0;
	cout << "Input line:" << "\n";
	cin >> line;
	for (int i = 0; i < line.size(); i++) 
	{
		if (line[i] == '.') {
			dot_index = i;
		}
	}
	for (int i = 0; i < dot_index; i++) {
		for (int n = 0; n < 10; n++) {
			if (line[i] == numbers[n]) {
				new_line += line[i];
			}
		}
	}
	new_line += ".";
	for (int i = dot_index; i < line.size(); i++) {
		for (int n = 0; n < 10; n++) {
			if (line[i] == numbers[n]) {
				new_line += line[i];
			}
		}
	}
	cout << new_line;
}