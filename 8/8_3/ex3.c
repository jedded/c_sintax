#include<stdio.h>
#include<string.h>

int main(void)
{
	int str[7]={0};
	int rotto=0;
	int check=0;
	int same =0;


	while(check<6)
	{
		int i=0;
		printf("로또 번호 입력 : ");
		scanf("%d",&rotto);

		for(i=0; i<6; i++)
		{
			if(str[i]==rotto)
			{
				same=1;
				printf("같은 번호가 있습니다 \n");
			}
		}
		if(same==1)
		{
			same=0;
			continue;
		}
			str[check]=rotto;
			check++;
		
	}
	
	for(int i=0; i<6; i++)
	{
			printf("%5d",str[i]);
	}
			printf("\n");

}
