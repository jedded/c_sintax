#include<stdio.h>

int main(void)
{
		char buff=0;
		while((buff=getchar())!='\n')
		{
			if(buff<97)
			{
					printf("%c",buff |(1<<5));
					
			}else
			{
					printf("%c",buff & (~(1<<5)));

			}
				
				
		}
					printf("\n");
}
