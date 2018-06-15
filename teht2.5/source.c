#include <stdio.h>
#include <string.h>

void draw_triangle(unsigned int size) 
{
	int a, b;
	for (a = 0; a < size; a++) {
		for (b = 0; b < size; b++) {
			if (b + 1 >= size - a){
				printf("#");
			}
			else
				printf(".");
			if (b + 1 == size) {
				printf("\n");
			}
		}
	}
}

int main(void)
{
	draw_triangle(5);
	draw_triangle(10);
	return 0;
}