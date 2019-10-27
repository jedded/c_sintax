#include<stdio.h>
#include<string.h>

void init_intro(char (*intro)[80], char **pint);
int input_intro(char (*intro)[80]);
void sort_intro(char **pint, int cnt);
void print_intro(int mode, void *vp, int cnt); 

int main(void)
{
	char intro[10][80];
	char *pint[10];
	int cnt;

	init_intro(intro, pint);
	cnt = input_intro(intro);
	sort_intro(pint, cnt);
	print_intro(0,pint, cnt);
	print_intro(1,intro, cnt);

	return 0; 
}


void init_intro(char (*intro)[80], char **pint)
{
	for(int i=0; i< 10;i++)
	{
		pint[i]=intro[i];
		//printf("pint[%d] : %p , intro[%d] : %p\n",i,pint[i],i,intro[i]);
	}
}

int input_intro(char (*intro)[80])
{ 
	char buf[20]={0,};
	int num=0;
	printf("인사말 입력 : ");
	gets(buf);
	//printf("buf : %s\n",buf);
	while(strcmp(buf,"end"))
	{
		//intro=buf;
		strcpy(intro[num],buf);
		//printf("intro[%d] : %s\n",num,intro[num]);
		//intro++;
		/*
		for(int i=0; i<20; i++)
		{
			buf[i]=0;
		}
		*/
		printf("인사말 입력 : ");
		gets(buf);
	//printf("buf : %s\n",buf);
		num++;
	} 

	/*
	for(int i=0; i<num;i++)
	{
		printf("%s , %d\n",intro[i],i);
	}
	*/
	return num;
}

void sort_intro(char **pint, int cnt)
{
	for(int i=0; i<cnt-1;i++)
	{
		for(int j=i+1; j<cnt;j++)
		{
			//printf("pint[%d] : %s , pint[%d] : %s \n",i,pint[i],j,pint[j]);
			if(strcmp(pint[i],pint[j])>0)
			{
				char *temp=pint[i];
				pint[i]=pint[j];
				pint[j]=temp; 
			} 
		}
	} 
}



void print_intro(int mode, void *vp, int cnt)
{
	if(mode==0)
	{
		//char * pvp[10]={0,};
		printf("\n #사전순으로 출력...\n");
		char **pvp=(char **)vp;
		for(int i=0; i<cnt; i++)
		{
			printf("%s\n",pvp[i]);
		}
	}else if(mode ==1)
	{ 
		printf("\n #정렬 순으로 출력...\n");
		char (*pvp)[80]=(char *)vp;
		for(int i=0; i<cnt; i++)
		{
			printf("%s\n",pvp[i]);
		} 
	} 
}


