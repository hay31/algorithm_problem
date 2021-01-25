#include <stdio.h>
#include <stdlib.h>
int  bin_search2(const int a[], int n, int key) {
	int pl = 0;
	int pr = n - 1;
	int pc;
	
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key) { 
			for (int i = pc - 1; i >= 0; i--) {
				if (a[i] == key) pc = i;
			}
			return pc; }
		else if (a[pc] < key) pl = pc + 1;
		else pr = pc - 1;
	}while (pl <= pr);

	return -1;

}



int main(void)
{
	int i, nx, ky, idx;
	int* x;		/* �迭�� ù ��° ��ҿ� ���� ������ */

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

	idx = bin_search2(x, nx, ky);	/* �迭 x���� ���� ky �� ��Ҹ� 2�� �˻� */

	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d�� x[%d]�� (�� ���� ���) �ֽ��ϴ�.\n", ky, idx);

	free(x);	/* �迭�� ���� */

	return 0;
}