#include <stdio.h>
#include <stdlib.h>
//연습문제 Q1 . 키의 최솟값 구하기
/*int minof(const int a[], int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (min > a[i]) min = a[i];
	}
	return min;
}

int main(void) {
	int i;
	int* height;
	int number;
	printf("사람 수 : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요.\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d] :", i);
		scanf("%d", &height[i]);
	}
	printf("최소값은 %d입니다.\n", minof(height, number));
	free(height);

	return 0;
}*/

//Q2 키의 합계 구하는 프로그램
int sumof(const int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
double aveof(const int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	double avg = sum / n;
	return avg;
}

int main(void) {
	int i;
	int* height;
	int number;
	printf("사람 수 : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요.\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d] :", i);
		scanf("%d", &height[i]);
	}
	printf("키의합계는 %d입니다.\n", sumof(height, number));
	printf("키의 평균은 %.2f입니다..\n", aveof(height, number));
	free(height);

	return 0;
}