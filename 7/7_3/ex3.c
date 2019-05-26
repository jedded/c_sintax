#include<stdio.h>

int main(void)
{
	int n=0;
	int get =0;
	int gahang=0;
	printf("양수를 입력 하세요 : ");
	scanf("%d",&n);

	for(int i=2; i<=n; i++)
	{
		get=prime_check(i);
		if(get==1)
		{
			gahang++;
			printf("%5d",i);
			if(gahang==5)
			{
				printf("\n");
				gahang=0;
			}
		}
	}
}


int prime_check(int n)
{
	int check=0;
	for(int i=1; i<=n; i++)
	{
		if((n%i)==0)
		{
			check++;
		}
	}
	if(check==2)
	{
		return 1;
	}
	return 0;
		
}
