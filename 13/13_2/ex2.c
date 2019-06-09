#include<stdio.h>
void set(int h, int m);
void show(void);
void move(void);

int h=0;
int m=0;
int p=0;
int t=0;

int main(void)
{
	int h_t=0;
	int m_t=0;

		printf("최초 시간과 분 입력(24시간) : ");
		scanf("%d %d",&h_t,&m_t);
		set(h_t,m_t);

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

void set(int h_t, int m_t)
{
		if(h<12)
		{
			t=0;
			h=h_t;
			m=m_t;
		}else
		{
			t=1;
			h=h_t-12;
			m=m_t-12;
		}
	
	
}

void show(void)
{
		if(t==0)
		{
				printf(" %02d:%02d(AM)\n",h,m); // %2d, %02d 의 차이점 확인!!! %02d는 남은자리를 0으로채운다.
		}else
		{
				printf(" %02d:%02d(PM)\n",h,m);
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



