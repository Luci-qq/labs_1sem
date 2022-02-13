#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main()
{
	char line[255];
	int words_indexs[255];
	int counter;
	int i, j, Temp;
	int Flag;
	cout<< "Input words:";
	gets_s(line);
	for (counter = 0, Flag = 1, i = 0;line[i]; i++)
	{
		if (line[i] == ' ')
		{
			line[i] = 0;
			Flag = 1;
		}
		else if (Flag)
		{
			words_indexs[counter++] = i;
			Flag = 0;
		}
	}
	for (j = counter - 1; j > 0; j--)
		for (i = 0; i < j; i++)
			if (strcmp(&line[words_indexs[i]], &line[words_indexs[i + 1]]) > 0)
			{
				Temp = words_indexs[i];
				words_indexs[i] = words_indexs[i + 1];
				words_indexs[i + 1] = Temp;
			}
	for (i = 0; i < counter; i++) {
		cout<<&line[words_indexs[i]]<< " ";
	}
}