#include<stdio.h>
#include<string.h>

int main(void)
{
	char word[10][20]={0};
	char buff[40]={0};
	int n=0;
	printf("단어 입력 (종료는 end 입력) : ");
	gets(buff);

	while(strcmp(buff,"end"))
	{	
		if(n<10)
		{
		strcpy(word[n],buff);
		printf("단어 입력 (종료는 end 입력) : ");
		gets(buff);
		n++;
		}else
		{
			printf("단어를 저장할 공간이 없습니다");
		}
	}
	printf("총 %d개의 단어가 입력 되었습니다.!\n",n);
	
	printf("검색 단어 (종료는 end 입력) : "); 
	gets(buff);
	while(strcmp(buff,"end"))
	{ 
		for(int i=0; i<sizeof(word)/sizeof(word[0]) ; i++)
		{
			if(!strcmp(word[i],buff))
			{
				printf("%d 번째 같은 단어가 있습니다.!\n",i+1); 
				break;
			}
			if(i==sizeof(word)/sizeof(word[0])-1)
			{
				printf("같은 단어가 없습니다.!\n"); 
			}
		}
		printf("검색 단어 (종료는 end 입력) : "); 
		gets(buff);

	}
}
