#include <stdio.h>
#include <stdlib.h>
//�������� Q1 . Ű�� �ּڰ� ���ϱ�
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
	printf("��� �� : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d ����� Ű�� �Է��ϼ���.\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d] :", i);
		scanf("%d", &height[i]);
	}
	printf("�ּҰ��� %d�Դϴ�.\n", minof(height, number));
	free(height);

	return 0;
}*/

//Q2 Ű�� �հ� ���ϴ� ���α׷�
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
	printf("��� �� : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d ����� Ű�� �Է��ϼ���.\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d] :", i);
		scanf("%d", &height[i]);
	}
	printf("Ű���հ�� %d�Դϴ�.\n", sumof(height, number));
	printf("Ű�� ����� %.2f�Դϴ�..\n", aveof(height, number));
	free(height);

	return 0;
}