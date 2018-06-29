#include <stdio.h>


unsigned int arraylen(const char *array) {
	int i;
	char v;
	for (i = 0; 1; i++) {
		v = *(array + i);
		printf("v: %c\n", v);
		if (v == 0) {
			break;
		}
	}
	return i;
}

void countchars(const char *array, unsigned int *counts) {
	int i;
	char v;
	for (i = 0; 1; i++) {
		v = *(array + i);
		if (v == 0) {
			break;
		} else {
			*(counts + v) = *(counts + v) + 1;
		}

	}
}

void printcounts(int min, int max, const unsigned int *counts) {
    for (int i = min; i <= max; i++) {
        printf("%c: %u  ---  ", i, counts[i]);
        if ((i - min + 1) % 6 == 0)
            printf("\n");
    } 
}

void printarray(const char *array) {
    printf("{ ");
    while (*array) {
        printf("'%c',", *array);
        array++;
    }
    printf("0 }");
}

int main()
{
     unsigned int counts[256] = { 0 };

     char sample[] = { 'a','b','r','a','c','a','d','a','b','r','a',0 };

     printf("%s, length: %u\n", sample, arraylen(sample));
     countchars(sample, counts);
     printcounts('a', 'z', counts);

    return 0;
}
//int main() {
//	char arr[7] = {'a', 'c', 'a', 'b', 'd', '0', 'a'};
//	printf("i: %d\n", arraylen(arr));
//
//	unsigned int counts[256] = {0};
//	countchars(arr, counts);
//	printf("a: %u\n", counts['a']);
//	printf("b: %u\n", counts['b']);
//	printf("c: %u\n", counts['c']);
//	printf("d: %u\n", counts['d']);
//	return 0;
//}