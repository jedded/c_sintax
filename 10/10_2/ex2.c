#include<stdio.h>
#include<string.h>
int check_same(int *lotto_nums, int *my_nums);

int main(void)
{
	int count=0;
	int lotto_nums[6]= {4,10,25,30,41,45};
	int my_nums[6] ={1,4,7,22,41,43};
	count=check_same(lotto_nums,my_nums);
	printf("%d\n",count);
}

int check_same(int *lotto_nums, int *my_nums)
{
	int count=0;
	for(int i=0; i<6;i++)
	{
		for(int j=0; j<6; j++)
		{
			if(lotto_nums[i]==my_nums[j])
			{
				count++;
			}
		}
	}
	return count;
	
}
