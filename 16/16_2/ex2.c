#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int num=0;
	int * prime;
	int flag=0;

	printf("양수 입력 : ");
	scanf("%d",&num);

	prime=(int*)malloc(sizeof(int)*num-1);
	prime[num-2]=0;

	for(int i=2;i<num;i++)
	{
		prime[i-2]=i;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{ 
	//			printf(" i : %d, j : %d \n",i,j);
				prime[i-2]=-1; 
	//			printf("prime[%d] : %d\n", i,prime[i]);
				break;
			} 
		} 
	}

	int space=0;

	for(int i=0;i<num-2;i++)
	{
		if(prime[i]==-1)
		{
			printf("%5c",'X');
			space++;
		}else
		{ 
			printf("%5d",prime[i]);
			space++;
		} 
		if(space==5)
		{
			printf("\n");
			space=0;
		}
	} 
	printf("\n");
}

