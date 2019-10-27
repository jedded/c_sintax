#include<stdio.h>
#include<string.h>
//void (*swap)(char* , void *, void *);
void swap(char* type, void *a, void *b);

int main(void)
{
	int age1=0;
	int age2=0;
	float height1=0;
	float height2=0;
	void (*ss)(char*,void*,void*);

	ss=swap;

	

	printf("첫번째 사람의 나이와 키 입력 : ");
	scanf("%d %f",&age1,&height1);
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %f",&age2,&height2);
	//printf("\n sizeof(height): %d",sizeof(float));

#if 1
	(*swap)("int",&age1,&age2);
	(*swap)("float",&height1,&height2);
#endif
#if 0
	ss("int",&age1,&age2);
	ss("float",&height1,&height2);
#endif

	
	printf("첫번째 사람의 나이와 키 : %d , %f",age1,height1);
	printf("두 번째 사람의 나이와 키 : %d , %f",age2,height2);

	return 0;
}


void swap(char* type, void *a, void *b)
{
	if(!strcmp(type,"int"))
	{
		int temp=*(int*)a;
		*(int*)a=*(int*)b;
		*(int*)b=temp; 
	}else if(!strcmp(type,"float"))
	{
		float temp=*(float*)a;
		*(float*)a=*(float*)b;
		*(float*)b=temp; 
	}else
	{
		printf("\nerror\n");
	} 
}

