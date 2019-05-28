#include<stdio.h>

int main(void)
{
	int test_count1=0;
	int test_count2=0;
	int test_count3=0;
	char num[10]={0};
	int inteager =0;
	int up =0;
	int count=0;
	scanf("%s",num);

	while(num[count]!=0)
	{
		count++;
	}

	//printf("count :%d\n",count);

	while(num[up]!=0)
	{
		int buf=1;

		for(int i=1; i<count;i++)
		{
			buf*=10;
			//printf("buf : %d\n",buf);
		}

		if(num[up]=='0')
		{
			//inteager+=buf;
			test_count2++;
		}else
		{
			inteager += ((num[up])-'0')*buf;
			//test_count3++;
		}
		count--;
		up++;
		
	}
	
	
	printf("%d\n",inteager+10);
//	printf("test_count1 : %d\n",test_count1);
//	printf("test_count2 : %d\n",test_count2);
//	printf("test_count3 : %d\n",test_count3);
	
}
