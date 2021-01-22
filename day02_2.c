#include <stdio.h>
#include <time.h>

#include <stdlib.h>
#define swap(type,x,y) do {type t = x; x=y; y=t;} while(0)
// Q4
/*int main(void) {
	int i;
	int* height;
	int number;
	srand(time(NULL));
	number = rand() % 16 + 5;
	printf("��� �� : %d",number);
	
	return 0;
}*/
//Q5
/*void ary_reverse(int a[], int n) {
	
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[j]);
		}
		printf("\na[%d]�� a[%d]�� ��ȯ�մϴ�.", i, n - 1 - i);
		swap(int, a[i], a[n - 1 - i]);
		printf("\n");
	
	}
	for (int j = 0; j < n; j++) {
		printf("%d ", a[j]);
	}
	printf("\n���� ������ �����մϴ�.");
}
int main(void) {
	int i;
	int* x;
	int nx;

	printf("��� ���� :");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	ary_reverse(x, nx);

	free(x);

	return 0;
}
*/
//Q6
//int card_conv(unsigned x, int n, char d[])
//{
//	int i;
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0;		/* ��ȯ�� ������ �ڸ��� */
//
//	if (x == 0)								/* 0�̸� */
//		d[digits++] = dchar[0];				/* ��ȯ�� ������ 0�� ���� */
//	else {									/* 0�� �ƴ϶�� */
//		while (x) {
//			if (x < n) d[digits++] = x;
//			d[digits++] = dchar[x / n];		/* n���� ���� �������� ���� */
//			x %= n;
//		}
//		return digits;
//	}
//}

//Q7 ��ü �ּ� ���� : CTRL+K +U �ּ� ���� CTRL + K +C
//int card_conv(unsigned x, int n, char d[])
//{
//	int i;
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0;		/* ��ȯ�� ������ �ڸ��� */
//
//	if (x == 0)								/* 0�̸� */
//		d[digits++] = dchar[0];				/* ��ȯ�� ������ 0�� ���� */
//	else {									/* 0�� �ƴ϶�� */
//		while (x) {
//			d[digits++] = dchar[x % n];		/* n���� ���� �������� ���� */
//			printf("%d|    %d ...%d\n", n, x, x % n);
//			printf(" + ------------\n");
//			
//			x /= n;
//			if (x == 0)
//				printf("      0\n");
//		}
//	}
//
//	return digits;
//}
//
//int main(void)
//{
//	int i;
//	unsigned no;			/* ��ȯ�ϴ� ���� */
//	int cd;					/* ��� */
//	int dno;				/* ��ȯ �� �ڸ��� */
//	char cno[512];			/* ��ȯ �� �� �ڸ��� ���ڸ� �־�δ� ���� �迭 */
//	int retry;				/* �ٽ� �ѹ�? */
//
//	puts("10 ������ ��� ��ȯ�մϴ�.");
//
//	do {
//		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
//		scanf("%u", &no);
//
//		do {
//			printf("���� ������ ��ȯ�մϱ�?(2 ~ 36) : ");
//			scanf("%d", &cd);
//		} while (cd < 2 || cd > 36);
//
//		dno = card_conv(no, cd, cno);		/* no�� cd ������ ��ȯ */
//
//		printf("%d ������ ", cd);
//		for (i = dno-1; i >=0 ; i--)			/* ���ڸ����� ǥ�� */
//			printf("%c", cno[i]);
//		printf("�Դϴ�.\n");
//
//		printf("�ٽ� �� �� �ұ��?(1 �� / 0 �ƴϿ�): ");
//		scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}

//Q10
/*--- type ���� x�� y�� ���� ��ȯ ---*/
#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)
#include <time.h>
#include <stdlib.h>
/*--- ��ڼ� n�� �迭 a�� ��� ����� ������ ���� ---*/
void shuffle(int a[], int n)
{
	int i;

	srand(time(NULL));
	for (i = n - 1; i> 0; i--) {		/* �迭 a�� ���� */
		int j = rand() % (i + 1);
		if (i != j) //i�� j�� ���� �ʴٸ� 
			swap(int, a[i], a[j]);
	}
}

int main(void)
{
	int i;
	int *x;		/* �迭�� ù ��° ��ҿ� ���� ������ */
	int nx;			/* �迭 x�� ��ڼ� */

	printf("��ڼ� : ");
	scanf("%d", &nx);
	x =(int)( calloc(nx, sizeof(int)));			/* ��ڼ� nx�� int �� �迭 x�� ���� */

	printf("%d ���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	shuffle(x, nx); /* �迭 x�� ��� ������ ���� */

	printf("�迭 ����� ������ �����߽��ϴ�.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); /* �迭 x�� ���� */

	return 0;
}