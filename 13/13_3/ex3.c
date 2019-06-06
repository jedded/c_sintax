#include<stdio.h>
char *my_token(char *ps);

int main(void)
{
		char str[80]={0};
		char *p;

		printf("문장 입력 : ");
		gets(str);

		while((p=my_token(str))!=NULL)
		{
				printf("%s\n",p);
		}

		return 0;
}


char *my_token(char *ps)
{
		static int i=0;
		//printf("int i: %d",i);
		int f=i;

		while(ps[i]!=' ' && ps[i]!=0)
		{
				i++;
		}
		ps[i]=0;
		if(f==i)
		{
			return 0;
		}
		i++;

		return ps+f;
}
