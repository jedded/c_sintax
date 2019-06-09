#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[100]={0};
	char buff[100]={0};
	char clear[100]={0};
	int i=0;

	printf("단어 입력 : ");
	scanf("%s",buff);

	while(strcmp(buff,"end"))
	{
		strcat(str+(strlen(str)),buff);
		strcpy(buff,clear);
		
		i=strlen(str);
		str[i]=' ';
		printf("현재까지의 문자열 : ");
	 	puts(str);

		printf("단어 입력 : ");
		scanf("%s",buff);
	}

}
