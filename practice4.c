//나중에 다시 해결해 볼 문제!!

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

		printf("들어옴");
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
	int *x;		/* 배열의 첫 번째 요소에 대한 포인터 */

	puts("2진 검색");
	printf("요소수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	/* 요소수 nx인 int 형 배열을 생성 */

	printf("오름차순으로 입력하세요.\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);

	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);	/* 하나 앞의 값보다 작으면 다시 입력 */
	}
	printf("검색 값 : ");
	scanf("%d", &ky);

	idx = bin_search(x, nx, ky);	/* 배열 x에서 값이 ky 인 요소를 2진 검색 */

	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d는 x[%d]에 있습니다.\n", ky, idx);

	free(x);	/* 배열을 해제 */

	return 0;
}