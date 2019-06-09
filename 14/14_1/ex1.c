#include<stdio.h>
#include<string.h>
int main(void)
{
	int dump=0;
	int str[5][6]={{1,2,3,4,5},{6,7,8,9,10},
		{11,12,13,14,15},{16,17,18,19,20}}; 


	for(int i=0; i<4; i++)
	{
		dump=0;
		for(int j=0; j<5; j++)
		{
			dump+=str[i][j];
		}
		str[i][5]=dump;
	}


	
	for(int j=0; j<6; j++)
	{
		dump=0;
		for(int i=0; i<4; i++)
		{
			dump+=str[i][j];
		}
		str[4][j]=dump;
	}
	


	for(int i=0; i<5; i++)
	{
		for(int j=0; j<6; j++)
		{
			printf("%4d",str[i][j]);
		}
		printf("\n");

	} 
}
