# include <stdio.h>

void sort(int *start, int size) {

	int i, j, s, p, c;
	for(i = 0; i < size; i++) {
		//printf("%d\n", *(start + i));
		s = *(start + i);
		p = i;
		for(j = i; j < size; j++) {
			c = *(start + j);
			if(c < s) {
				s = c;
				p = j;
			}
			if(j == size - 1) {
				c = *(start + i);
				*(start + i) = s;
				*(start + p) = c;
			}
		}
	}
	
}

//void insertion_sort(int *start, int size) {
//	int i, l, c;
//	for (i = 0; i < size; i++) {
//		l = *(start + i);
//		for (j=i-1; j >= 0; j--) {
//			c = *(start + j);
//			if(l < c) {
//				
//			}
//		}
//	}
//}

int main() {
	int start[] = {2, 5, 3, 6, 3, 2, 4, 6, 7, 1};
	int size = 10;
	sort(start, size);
	int i;
	for(i = 0; i < size; i++) {
		printf("%d\n", *(start + i));
	}
	return 0;
}