#include <stdio.h>
#include <ctype.h>

char conver_number_2_hex(int n)
{
	switch(n) {
		case 10: 
			return 'a';
		case 11: 
			return 'b';
		case 12: 
			return 'c';
		case 13: 
			return 'd';
		case 14: 
			return 'e';
		case 15: 
			return 'f';
		default:
			return n + '0';
	}
}


void ascii_chart(char min, char max) 
{	
	int a;
	int b = 1;
	//printf("%d", min);
	for(a = (int) min; a <= (int) max; a++) {
		if (a < 10)
			printf("  %d ", a);
		else if (a >= 10 && a < 100)
			printf(" %d ", a);
		else 
			printf("%d ", a);
		int first = a / 16;
		int second = a - first * 16;
		printf("0x%c%c ", conver_number_2_hex(first), conver_number_2_hex(second));
		if (isprint(a))
			printf("%c", a);
		else
			printf("?");
		if (b % 4 == 0)
			printf("\n");
		else
			printf("\t");
		b ++;


	}



}

int main(void)
{
	ascii_chart(7, 12);
	ascii_chart(98, 102);
	return 0;
}