#include <stdio.h>

int main() {
	int a[10], i, temp, n;
	printf("Enter number of elements in array: ");
	scanf(" %d", &n);
	for (i = 0; i < n; i++) {
		printf("Element %d: ", i+1);
		scanf(" %d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("The sorted array is: \n");
	for (i = 0; i < n; i++) {
		printff(" %d", a[i]);
	}
}