#include<stdio.h>
#include<string.h>

int main(void)
{
		char str[100]={0};
		printf("문장 입력 : ");
		gets(str);
		int check=0;
		printf("\n");

		printf("%s",str);

		for(int i=0; i<sizeof(str)/sizeof(str[0])  ;i++)
		{
			//printf("%d",i);
				if(str[i]>64 && str[i]<91)
				{
					str[i]=str[i]+32;
					check++;
				}	
		}
		printf("\n");

		//printf("%s",str);
		//puts(str);
		printf("%s",str);
//		printf("%d",check);

		printf("\n");

		



}
