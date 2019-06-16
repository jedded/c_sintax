#include<stdio.h>

int main(void)
{
	char *name[4]={"관악점","강남점","명동점","대림점"};
	int str[4][8]={{0,70 ,45, 100 ,92 ,150 ,81},{1,88 ,92 ,77 ,30 ,52 ,55},
		{2,50 ,90 ,88 ,75 ,77 ,49},{3,120 ,92 ,80 ,150 ,130 ,105}};
	int *max[4];
	int sum=0;
	int ii=0;
	int jj=0;

	for(int i=0; i<4; i++)
	{
		for(int j=1; j<7; j++)
		{
			sum+=str[i][j];
		}
		str[i][7]=sum;
		sum=0; 
	}

	for(int i=0;i<4;i++)
	{
		max[i]=str[i];
	}


	printf("\n");

//	printf("max : %d, str : %d",max[2][7],str[2][7]);
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3-i;j++)
		{
//			printf("max[i] : %d , max[i+1] : %d\n",max[j][7],max[j+1][7]);
			if(max[j][7]<max[j+1][7])
			{
				int * dump = max[j];
				max[j]=max[j+1];
				max[j+1]=dump;
			}else
			{
				/*
				int * dump = max[j+1];
				max[j]=max[j];
				max[j+1]=dump;
				*/
			}
//			printf("max[i] : %d , max[i+1] : %d\n",max[j][7],max[j+1][7]);
		}
//		printf("\n\n");
	}

	printf("실적별 출력...\n");
	for(int i=0; i<4; i++)
	{
		printf("%s",name[max[i][0]]); 
		for(int j=1; j<7; j++)
		{
			printf("%5d",max[i][j]); 
		}
		printf("\n");
	}	
	printf("\n");

	printf("지점별 출력...\n");
	for(int i=0; i<4; i++)
	{
		printf("%s",name[str[i][0]]); 
		for(int j=1; j<7; j++)
		{
			printf("%5d",str[i][j]); 
		}
		printf("\n");
	}	
	printf("\n");
}
