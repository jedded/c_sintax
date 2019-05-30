#include<stdio.h>
#include<string.h>
void max_compare(char * p1, char * p2);

int main(void)
{
	char str1[80] ={0};
	char str2[80] ={0};

	char str3[80] ={0};

	char * max = str1;
	char * mid = str2;
	char * min = str3;

	scanf("%s %s %s",str1,str2,str3);
	
	max_compare(max,mid);
	max_compare(max,min);
	max_compare(mid,min);

	printf("%s, %s, %s \n",min,mid,max);

}



void max_compare(char * p1, char * p2)
{
	if(strcmp(p1,p2)<0)
	{
		char  dump[80]={0};
		strcpy(dump,p1);
		strcpy(p1,p2);
		strcpy(p2,dump);

		/*
		char * dump;  // 함수에 포인터로 주면 포인터가
					//가리키는 내용은 바꿀수 있지만 매개변수로 준 포인터를 
		dump= p1;  // 주소값을 바꿀수 없다 왜냐면 바꿔도 
		p1=p2;	//함수에 인자값으로 준 변수가 가리키는 값은 변하지 않는다.
		p2=dump;	
		*/

	}else
	{
	}

}



/*
   char str1[10]={0}
   char * p = "banana";
   
   str1=p; 이렇게 선언하면 안됨...

*/


