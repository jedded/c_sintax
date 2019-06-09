#include<stdio.h>

int main(void)
{
	int arr[5]={0};
	int min=0;
	int max=0;
	int test =4;
	printf("5명 심사위원의 점수 입력 : ");
	//printf(" test 1 %d \n : ",test<sizeof(arr)/sizeof(arr[0]));
//	printf(" test 2 %d \n : ",sizeof(arr)/sizeof(arr[0])-1);
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		scanf("%d",&arr[i]);
	}


	for(int i=1; i<(sizeof(arr)/sizeof(arr[0]))-1; i++)
	{
		if(arr[min]>arr[i])
		{
			min=i;
		}
	}
	for(int i=1; i<(sizeof(arr)/sizeof(arr[0]))-1; i++)
	{
		if(arr[max]<arr[i])
		{
			max=i;
		}
	}
	arr[min]=0;
	arr[max]=0;
			
	printf("유효점수 : ");	

	for(int i=0; i<5; i++)
	{
		if((i==min)||(i==max))
		{
		}else
		{
			printf("%4d ",arr[i]);
		}
	}
	printf("\n");


//	printf("min : %d , max : %d",arr[min],arr[max]);
	double sum=0;
	for(int i=0; i<5;i++)
	{
		sum+=arr[i];
	}
//	printf("%lf\n",sum);
	sum/=3;

	printf("평균 : %.1lf",sum);
	
	printf("\n");

	
	
}

