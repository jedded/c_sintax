#include<stdio.h>

int main(void)
{
	int max_count=0;
	int count=0; 
	while(getchar()!=EOF)
	{
		count=1;
		while(getchar()!='\n')
		{
			count++;
		}
		if(max_count<count)
		{
			max_count=count;
		}
	}
	printf("%d\n",max_count);
}
