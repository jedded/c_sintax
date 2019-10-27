#include<stdio.h>
#include<string.h>
int input_name(char (*name)[20]);
void print_name(char (*name)[20], int cnt);

int main(void)
{
	char name[10][20]={0};
	int cnt;
/*
	printf("\n name : %p\n",name);
	printf("\n name[1] : %p\n",name[1]);
	printf("\n &name[1] : %p\n",&name[1]);
	printf("\n name[1][1] : %c\n",name[1][1]);
	printf("\n &name[1][1] : %p\n",&(name[1][0]));
	printf("\n name+11 : %p\n",name+11);
	*/
	while(1)
	{
		cnt = input_name(name);
		print_name(name,cnt);
		if(cnt==-2)
		{
			break;
		}
	}
	return 0;
}

int input_name(char (*name)[20])
{
	//static int n=0;
	int i=0;
	char buf[20]={0};
	printf("이름 : ");
	gets(buf);
/*
	printf("\n name : %p\n",name);
	printf("\n name[1] : %p\n",name[1]);
	printf("\n &name[1] : %p\n",&name[1]);
	printf("\n name[1][1] : %c\n",name[1][1]);
	printf("\n &name[1][1] : %p\n",&(name[1][0]));
	printf("\n name+11 : %p\n",name+11);
	*/
	while(1)
	{
		if(name[i][0]==0) 	// 처음에 0 이면 데이터 삽입
		{
			strcpy(name[i],buf);
			return i;
		}else if(!strcmp(buf,name[i]))// 같으면 1을 반환 
		{
			return -1;
		}else if(!strcmp(buf,"end"))
		{
			return -2; 
		}
		else 				// 데이터가 다르면 다음 배열 검사
		{
			i++;
		}
	}
}

void print_name(char (*name)[20], int cnt)
{
	if(cnt==-1)
	{
		printf("\n 같은 이름이 있습니다\n");
	}else if(cnt==-2)
	{
		int i=0;
		while(name[i][0])
		{
			printf("%s\n",name[i]);
			i++;
		}
	}else
	{
		printf("\n %s \n",name[cnt]);
	}
}







