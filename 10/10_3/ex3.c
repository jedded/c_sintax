#include<stdio.h>
#include<string.h>
void input_nums(int *lotto_nums);
void output_nums(int *lotto_nums);

int main(void)
{
	int lotto_nums[6];
	
	input_nums(lotto_nums);
	output_nums(lotto_nums);

	return 0;
}

void input_nums(int *lotto_nums)
{
	int count=0;
	int num=0;
	while(count<6)
	{
		int same=0;
		printf("number input : ");
		scanf("%d",&num);
		for(int i=0;i<6;i++)
		{
			if(lotto_nums[i]==num)
			{
				same=1;
				printf("같은 번호가 있습니다.\n");
				break;
			}
		}
		if(same==0)
		{
			lotto_nums[count]=num;
			count++;
		}
	}
}

void output_nums(int *lotto_nums)
{
	printf("로또 번호 ");
	for(int i=0;i<6;i++)
	{
		printf("%3d",lotto_nums[i]);
	}
		printf("\n");
}
