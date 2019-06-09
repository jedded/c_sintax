#include<stdio.h>
void print_t(void);
int total(int in1, int in2, int in3);
double average(int total);

int main(void)
{
	int in1;
	int in2;
	int in3;
	int total_n;
	double aver=0;

	printf("세가지 과목의 점수를 입력 ");
	scanf("%d %d %d",&in1,&in2,&in3);

	total_n= total(in1,in2,in3);
	aver= average(total_n);
	print_t();
	printf(" %5d %5d %5d %5d %5.1lf\n", in1,in2,in3,total_n,aver);
	
	return 0;
}

void print_t(void)
{
	printf("=====< 성적표>=====\n");	
	printf("----------------------\n");
	printf("  국어  영어  수학  총점  평균  \n");
	printf("----------------------\n");
	
}


int total(int in1, int in2, int in3)
{
	int total = in1+in2+in3;

	return total;
}


double average(int total)
{
	printf("total : %d",total);
	double  aver = (double)total/3;
	printf("aver : %lf",aver);
	return aver;
}
