#include <stdio.h>
#include <stdlib.h>
int search_idx(const int a[], int n, int key, int idx[]) {//const�ϱ� ���� �Ұ�

	int cnt=0;
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			
			idx[cnt] = i;
			cnt++;
		}
	}
	if (cnt > 0)
		return cnt;
	else
		return -1;

}
int main(void) {

	int i, nx, ky, cnt;
	int* x;
	int* p;
	
	puts("���� �˻�(���ʹ�)");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	p = calloc(nx, sizeof(int)); // �迭�� �ε����� ������ �迭
	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻��� :");
	scanf("%d", &ky);
	cnt = search_idx(x, nx, ky,p);
	if (cnt == -1)
		puts("�˻��� �����Ͽ����ϴ�.");
	else {
		printf("�ش� ����� index�� ");
		for (int i = 0; i < cnt; i++) {
		
				printf("x[%d]", p[i]);
			
		
		}
		printf("\n�ش� ����� ������ %d", cnt);
	}
		
	free(x);

	return 0;
}
///* ���� 3-3 �迭���� ������ ���� ��ġ�ϴ� ��� ����� �ε����� ���� */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- �迭 a���� ���� key�� ��� ����� �ε����� idx�� ���� ---*/
//int search_idx(const int a[], int n, int key, int idx[])
//{
//	int i, count = 0;
//
//	for (i = 0; i < n; i++)
//		if (a[i] == key)
//			idx[count++] = i;
//	return count;
//}
//
//int main(void)
//{
//	int i, nx, ky;
//	int no;		/* ky�� ��ġ�ϴ� ����� ���� */
//	int *x;		/* �����͸� �����ϴ� �迭 */
//	int *idx;	/* ky�� ��ġ�ϴ� ����� �ε����� �����ϴ� �迭 */
//
//	puts("���� �˻�");
//	printf("��ڼ� : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	/* ��ڼ� nx�� int �� �迭�� ���� */
//	idx = calloc(nx, sizeof(int));	/* ��ڼ� nx�� int �� �迭�� ���� */
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//	printf("�˻� �� :");
//	scanf("%d", &ky);
//
//	no = search_idx(x, nx, ky, idx);	/* �迭 x���� ���� ky �� ��Ҹ� ���� �˻� */
//
//	if (no == -1)
//		puts("��ġ�ϴ� ��Ҵ� �������� �ʽ��ϴ�.");
//	else {
//		printf("��ġ�ϴ� ��Ҵ� %d ���Դϴ�.\n", no);
//		for (i = 0; i < no; i++)
//			printf("x[%d] ", idx[i]);
//		putchar('\n');
//	}
//
//	free(x);	/* �迭�� ���� */
//	free(idx);	/* �迭�� ���� */
//
//	return 0;
//}
