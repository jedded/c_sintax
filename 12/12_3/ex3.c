#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[100]={0};
	char buf[100]={0};
	printf("문장 입력 : ");
	gets(str);


	printf("검색할 문자열 입력 (종료는 end) : ");
	gets(buf);

	while(strcmp(buf,"end"))
	{

		int num=0;
		for(int i=0; i<strlen(str)-strlen(buf)+1 ; i++)
		{
			if(!strncmp(str+i,buf,strlen(buf)))
			{
				num+=1;
				i+=(strlen(buf)-1);
			}

		}
	printf("검색 결과 : %d\n",num);		
	printf("검색할 문자열 입력 (종료는 end) : ");
	gets(buf);
	}



	
	
	
}
