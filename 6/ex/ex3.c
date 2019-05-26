#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year, mon, total;
	int i;
	int start, last;

	while (1)
	{
		scanf("%d", &year);

		if (year == 0) break;

		scanf("%d", &mon);

		// 1≥‚ 1ø˘ 1¿œ ∫Œ≈Õ year-1≥‚ 12ø˘ 31¿œ±Ó¡ˆ √— ¿œºˆ ¥©¿˚ 
		total = 0;
		for (i = 1; i<year; i++)
		{
			if (i % 4 != 0) total += 365;
			else if (i % 100 != 0) total += 366;
			else if (i % 400 == 0) total += 366;
			else total += 365;
		}

		// year≥‚ 1ø˘ 1¿œ∫Œ≈Õ year≥‚ mon-1ø˘ ∏ª¿œ±Ó¡ˆ √— ¿œºˆ ¥©¿˚ 
		switch (mon - 1)
		{
		case 11: total += 30;
		case 10: total += 31;
		case  9: total += 30;
		case  8: total += 31;
		case  7: total += 31;
		case  6: total += 30;
		case  5: total += 31;
		case  4: total += 30;
		case  3: total += 31;
		case  2:
			if (year % 4 != 0) total += 28;
			else if (year % 100 != 0) total += 29;
			else if (year % 400 == 0) total += 29;
			else total += 28;
		case  1: total += 31;
		}

		// year≥‚ monø˘ 1¿œ ¥©¿˚ 
		total++;

		// title √‚∑¬ 
		printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");

		printf(" total : %d\n",total);
		// √‚∑¬«“ Ω√¿€ ¿ßƒ°(ø‰¿œ)∏¶ ∞ËªÍ«œ∞Ì ƒ≠ ∂ÁøÚ 
		start = total % 7;
		for (i = 0; i<start; i++)
		{
			printf("     ");
		}

		// ¿‘∑¬«— ø˘¿« √— ¿œºˆ∏¶ lastø° ¿˙¿Â 
		switch (mon)
		{
		case 1: last = 31; break;
		case 2:
			if (year % 4 != 0) last = 28;
			else if (year % 100 != 0) last = 29;
			else if (year % 400 == 0) last = 29;
			else last = 28;
			break;
		case 3: last = 31; break;
		case 4: last = 30; break;
		case 5: last = 31; break;
		case 6: last = 30; break;
		case 7: last = 31; break;
		case 8: last = 31; break;
		case 9: last = 30; break;
		case 10: last = 31; break;
		case 11: last = 30; break;
		case 12: last = 31; break;
		}

		// 1¿œ∫Œ≈Õ ∏∂¡ˆ∏∑ ≥Ø±Ó¡ˆ √‚∑¬ 
		for (i = 1; i <= last; i++)
		{
			printf("%5d", i);
			if ((start + i) % 7 == 0) printf("\n");
		}
		if ((start + i - 1) % 7 != 0) printf("\n");
		printf("\n");
	}

	return 0;
}

