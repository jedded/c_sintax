#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	//char ** buf_name;
	char **name;
	int *price;
	char temp_name[100]={0,}; 
	int temp_price=0; 
	int num=0;
	int sum=0;

	while(1)
	{
		printf("이름 : ");
		gets(temp_name);
		if(!strcmp(temp_name,"end"))
		{
			break;
		} 
		printf("기부금 : ");
		scanf("%d",&temp_price);
		getchar();

		num++;
		char ** buf_name;
		int * buf_price;

		buf_name=(char**)malloc(sizeof(char*)*(num+1));
		buf_price=(int*)malloc(sizeof(int)*(num+1));
		//buf_name[num]=0;

		if(num==1)
		{
			buf_name[0]=(char*)malloc(strlen(temp_name)+1);
			strcpy(buf_name[0],temp_name); 

			//buf_price[0]=(int)malloc(sizeof(int));
			//strcpy(buf_price[0],temp_price); 
			buf_price[0]=temp_price;

			name=buf_name;
			price=buf_price;
		}else
		{ 
			int i=0;
			for( ; i<num-1;i++)
			{
				//printf(" name[%d] :%s \n", i, name[i]);
				buf_name[i]=(char*)malloc(strlen(name[i])+1);
				//printf(" check\n");
				strcpy(buf_name[i],name[i]); 

			//	buf_price[i]=(int)malloc(sizeof(int));
				//strcpy(buf_price[i],price[i]); 
				buf_price[i]=price[i];
			}
			buf_name[i]=(char*)malloc(strlen(temp_name)+1);
			strcpy(buf_name[i],temp_name); 

			//buf_price[i]=(char*)malloc(sizeof(int));
			//strcpy(buf_price[i],temp_price); 
			buf_price[i]=temp_price; 

			for(int i=0;i<num-1;i++)
			{
				free(name[i]); 
				//free(price[i]); 
			} 

			free(name);
			free(price);

			name=buf_name;
			price=buf_price;
		} 

	}


	while(*name!=NULL)
	{
		printf("%s\n",*name);
		printf("%d\n",*price);
		sum+=*price;
		name++;
		price++;
	}
	printf("평균 : %d\n", (sum/num));
	//printf("sum : %d, num : %d", sum,num);

}
