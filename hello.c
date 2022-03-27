#include <stdio.h>
struct students {
	char name[20], usn[20];
	float m1, m2, m3, total, avg;
};
struct student s[20];
int main() {
	int n, i;
	printf("Enter number of students: ");
	scanf(" %d", &n);

	for (i = 0; i < n; i++) {
		printf("\nEnter name: ");
		scanf(" %s", s[i].name);
		printf("\nEnter usn: ");
		scanf(" %s", s[i].usn);
		printf("\nEnter marks: ");
		scanf(" %f%f%f", &s[i].m1, &s[i].m2, &s[i].m3);
		s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
		s[i].avg = s[i].total / 3;
	}
	for (i = 0; i < n; i ++) {
		if (s[i].avg > 35) {
			printf("\n%s has scored above average", s[i].name);
		}
		else {
			printf("\n%s has scored below average.", s[i].name);
		}
	}
	
}
