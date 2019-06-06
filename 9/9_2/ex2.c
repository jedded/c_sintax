#include<stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{

		double max, mid, min;

		printf("실수값 세 개 입력");
		scanf("%lf%lf%lf",&max,&mid,&min);
		line_up(&max,&mid, &min);
		printf("정렬된 값 출력 : %.1lf, %.1lf,%.1lf\n",max,mid,min);

		return 0;

}

void swap(double *pa, double *pb)
{
		double temp;
		temp=*pa;
		*pa=*pb;
		*pb=temp;
}
void line_up(double *maxp, double *midp, double *minp)
{
		if(*maxp<*midp)
		{
			swap(maxp,midp);
			printf("maxp : %lf , midp : %lf
		}
		if(*maxp<*minp)
		{
			swap(maxp,midp);
		}
		if(*midp<*minp)
		{
			swap(midp,minp);
		}
		

}