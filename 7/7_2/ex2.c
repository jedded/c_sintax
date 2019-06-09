#include<stdio.h>
int rec_func(int n);

int main(void)
{
	int n=0;
	scanf("%d",&n);
	n=n;
	int sum = rec_func(n);
	printf("\nsum : %d\n",sum);
}

int rec_func(int n)
{
	int p_n=n;
	if(n>1)
	{
		n=n-1;
	n=rec_func(n);

	printf("\n n : %d\n",n);
		n=n+p_n;
	}
		return n; 
}
