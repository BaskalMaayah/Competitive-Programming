#include <iostream>
#include <stdio.h>
using namespace std;
int con[26];
int main()
{
 
	int t, change = 0, count = 0;
	scanf("%d" , &t);
 
	for (int i = 0; i < t; i++)
	{
		char l;
		scanf(" %c" , &l);
		con[l - 'a']++ ;
	}
 
	for (int i = 0; i< 26; i++)
	{
		if (con[i] != 0)
		{
			count++;
			change += con[i] - 1;
		}
	}
 
	if (change + count > 26)
		puts("-1");
	else
		printf("%d\n", change);
 
 
	return 0;
}
