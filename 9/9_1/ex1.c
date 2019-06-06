#include<stdio.h>
#include<string.h>
void func(int *pmod, int *prem);

int main(void)
{
		int mod, rem;
		func(&mod,&rem);
		printf("몫 : %d, 나머지 : %d\n",mod,rem);

		return 0;
}

void func(int *pmod, int *prem)
{
		int num=0;;
		printf("양수 입력 : ");
		scanf("%d",&num);
		*pmod=num/4;
		*prem=num%4;
		
}
