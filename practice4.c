//���߿� �ٽ� �ذ��� �� ����!!

#include <stdio.h>
#include <stdlib.h>
int  bin_search(const int a[], int n, int key) {
	int pl = 0;
	int pr = n - 1;
	int pc;

	printf("   |");
	for (int i = 0; i < n; i++) {
		printf("%3d", i);
	}
	printf("\n---+");
	for (int i = 0; i < n; i++) {
		printf("---");
	}
	do{
		pc = (pl + pr) / 2;
		if (a[pc] == key) return pc;
		else if (a[pc] < key) pl = pc + 1;
		else pr = pc - 1;

		printf("����");
		printf("\n   |");
		printf("%*s", 3 * pl + 2, "");
		printf("<-");
		printf("%*s", 3 * pc + 2, "");
		printf("+");
		printf("%*s", 3 * pr + 2, "");
		printf("->\n");
		for (int j = 0; j < n; j++) {
			printf("%3d|", 3 * pl + 2);
			printf("%3d", a[j]);
		}
		printf("\n   |");
	} while (pl <= pr);
	return -1;
}
int main(void)
{
	int i, nx, ky, idx;
	int *x;		/* �迭�� ù ��° ��ҿ� ���� ������ */

	puts("2�� �˻�");
	printf("��Ҽ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	/* ��Ҽ� nx�� int �� �迭�� ���� */

	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);

	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);	/* �ϳ� ���� ������ ������ �ٽ� �Է� */
	}
	printf("�˻� �� : ");
	scanf("%d", &ky);

	idx = bin_search(x, nx, ky);	/* �迭 x���� ���� ky �� ��Ҹ� 2�� �˻� */

	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

	free(x);	/* �迭�� ���� */

	return 0;
}