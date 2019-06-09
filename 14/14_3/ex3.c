#include<stdio.h>

int main(void)
{
	char *name[4]={"대림점","관악점","명동점","강남점"};
	int str[4][7]={{70 ,45, 100 ,92 ,150 ,81},{88 ,92 ,77 ,30 ,52 ,55},
		{50 ,90 ,88 ,75 ,77 ,49},{120 ,92 ,80 ,150 ,130 ,105}}
	int sum=0;
	int ii=0;
	int jj=0;

	for(int i=0; i<4; i++)
	{
		for(int j=0; j<6; j++)
		{
			sum+=str[i][j];
		}
		str[i][6]=sum;
		sum=0; 
	}


	for(int i=0; i<4; i++)
	{
		
	}



}
