#include <stdio.h>

int array_sum(int *array, int count) {
	int sum = 0;
	int i;
	for(i = 0; i < count; i++){
		sum = sum + *(array + i);
	}
	return sum;
}

int array_reader(int *vals, int n) {
	int i = 0;
	int v, read;
	do {
		read = scanf("%d", &v);
		if(read) {
			*(vals + i) = v;
			i++;
		} 
	} while (i < n && read);
	return i;
}

int main() {
	
	int valarray[] = { 10, 100, 1000 };
	int ret = array_sum(valarray, 3);
	printf("Sum: %d\n", ret);

	int array[10];
	int n = array_reader(array, 10);
	printf("%d numbers read\n", n);
	int i;
	for (i = 0; i < n; i++) {
	    printf("%d ", array[i]);
	}
	return 0;
}