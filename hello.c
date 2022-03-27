#include <stdio.h>
struct students {
	char name[20], usn[20];
	float m1, m2, m3, total, avg;
};
struct student s;
int main() {
	int n, i;
	printf("Enter number of students: ");
	scanf(" %d", &n);

	for (i = 0; i < n; i++) {
		printf("Enter name: ");
		scanf(" %s", s.name);
		printf("Enter usn: ");
		scanf(" %s", s.usn);
		printf("Enter marks: ");
		scanf(" %f%f%f", &s.m1, &s.m2, &s.m3);
		s.total = s.m1 + s.m2 + s.m3;
		s.avg = s.total / 3;
	}
	for (i = 0; i < n; i ++) {
		if (s.avg > 35) {
			printf("\n%s has scored above average", s.name);
		}
		else {
			printf("\n%s has scored below average.", s.name);
		}
	}
	
}