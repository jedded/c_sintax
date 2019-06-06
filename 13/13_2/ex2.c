#include<stdio.h>
void set(int h, int m);
void show(void);
void move(void);

		int h=0;
		int m=0;
		int p=0;

int main(void)
{
		set(h,m);
		printf("설정된 시간 ");
		show();
		
		printf("경과 시간 입력(분) : ");
		scanf("%d",&p);

		for(int i=0; i<p; i++)
		{
			move();
		}
		printf("현재 시간 : ");
		show();
}

void set(int h, int m)
{
		printf("최초 시간과 분 입력(24시간) : ");
		scanf("%d%d\n",&h,&m);
}

void show(void)
{
		if(h<12)
		{
				printf(": %d:%d(AM)\n",h,m);
		}else
		{
				printf(": %d:%d(PM)\n",h,m);
		}
		
}


void move(void)
{
		if(m<59)
		{
				m+=1;
		}else
		{
				m=0;
				if(h<23)
				{
						h++;
				}else
				{
						h=0;
				}
		}
}



