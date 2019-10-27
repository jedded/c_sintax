#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	//char ** buf_name;
	char **name;
	char temp[100]={0,}; 
	int num=0;

	while(1)
	{
		printf("문자열을 입력 하세요 : ");
		gets(temp);
		if(!strcmp(temp,"end"))
		{
			break;
		} 
		num++;
		char ** buf_name;

		buf_name=(char**)malloc(sizeof(char*)*(num+1));
		//buf_name[num]=0;

		if(num==1)
		{
			buf_name[0]=(char*)malloc(strlen(temp)+1);
			strcpy(buf_name[0],temp); 
			name=buf_name;
		}else
		{ 
			int i=0;
			for( ; i<num-1;i++)
			{
				//printf(" name[%d] :%s \n", i, name[i]);
				buf_name[i]=(char*)malloc(strlen(name[i])+1);
				//printf(" check\n");
				strcpy(buf_name[i],name[i]); 
			}
			buf_name[i]=(char*)malloc(strlen(temp)+1);
			strcpy(buf_name[i],temp); 

			for(int i=0;i<num-1;i++)
			{
				free(name[i]); 
			} 
			free(name);
			name=buf_name;
		} 

	}


	while(*name!=NULL)
	{
		printf("%s\n",*name);
		name++;
	}

}
