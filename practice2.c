#include <stdio.h>
#include <stdlib.h>
int search(int a[], int n, int key) {
	int i;
	a[n] = key; //���ʹ�. �� ������ ��ҿ� �˻��Ϸ��� �� �����س���
	printf("   | ");
	for (int j = 0; j < n; j++) {
		printf("%3d", j);
	}
	printf("\n");
	printf("---+");
	for (int j = 0; j < n; j++) {
		printf("---");
	}
	printf("\n");
	
	for (i = 0; i < n; i++) {
		
		printf("   |");
		printf("%*s", 3 * (i - 1) + 5, "");
		printf("*\n");
		printf("%3d|", i);
		for (int k = 0; k < n; k++) {
			printf("%3d", a[k]);
		}
		putchar('\n');
		if (a[i] == key)
			break;
		printf("   |\n");
	}
	return i == n ? -1 : i; //������ ���̶� i�� ������ ���ʰ����� �������� 
}
int main(void) {
	//�ǽ� 3-3��  search�Լ� while�� ���� for������ ����Ͽ� ����
	int i, nx, ky, idx;
	int* x;
	puts("���� �˻�(���ʹ�)");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻��� :");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)
		puts("�˻��� �����Ͽ����ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);

	return 0;
}