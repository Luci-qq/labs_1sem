#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main()
{
	char numbers[10]{ '0','1','2','3','4','5','6','7','8','9' };
	char line[255];
	char new_line[255];
	int dot_index = 0;
	cout << "Input line:"<< endl;
	gets_s(line);
	for (int i = 0; i < strlen(line); i++)
	{
		if (line[i] == '.') {
			dot_index = i;
		}
	}
	int counter = 0;
	int tmp = 0;
	while (counter < dot_index) {
			for (int n = 0; n < 10; n++) {
				if (line[counter] == numbers[n]) {
					new_line[tmp] = line[counter];
					tmp++;
				}
			}
			counter++;
	}
	new_line[tmp] = '.';
	tmp++;
	while (dot_index < strlen(line)) {
		for (int n = 0; n < 10; n++) {
			if (line[dot_index] == numbers[n]) {
				new_line[tmp] = line[dot_index];
				tmp++;
			}
		}
		dot_index++;
	}
	new_line[tmp] = '\0';
	cout << new_line;
}