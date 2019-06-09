#include<stdio.h>
#include<string.h>
void print_graph(int *ps, int size);

int main(void)
{
	int score[5] = {72,88,95,64,100};

	print_graph(score,sizeof(score)/sizeof(score[0]));

}

void print_graph(int *ps, int size)
{
	for(int i=0; i<size; i++)
	{
		printf("(%3d) ",ps[i]); // ps+1이 *(ps+sizeof(ps[0]))으로 잘못알음 
		//printf("(%3d) ",ps+1); // 이처럼 선언하면 안됨
		for(int j=0; j< (ps[i]/5);j++)
		{
			printf("*");
		}
			printf("\n");
	}
	
	
	
}
