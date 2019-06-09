#include<stdio.h>
void rotate(int *pa, int *pb, int *pc);

int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	while(getchar()=='\n')
	{
		rotate(&a,&b,&c);
		printf("%d:%d:%d",a,b,c);
	}
	return 0;

}

void rotate(int *pa, int *pb, int *pc)
{
	
	/*	
	int *dump; 
	*dump=*pa; 이렇게 하면 dump가 가리키는 값이 어떤건지 모르니 error가 날수 있다.
	*/
	int dump; 	
	dump=*pa;	
	*pa=*pb;
	*pb=*pc;
	*pc=dump;
}
	

