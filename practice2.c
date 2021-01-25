#include <stdio.h>
#include <stdlib.h>
int search(int a[], int n, int key) {
	int i;
	a[n] = key; //보초법. 맨 마지막 요소에 검색하려는 값 설정해놓기
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
	return i == n ? -1 : i; //마지막 값이랑 i랑 같으면 보초값으로 도달했음 
}
int main(void) {
	//실습 3-3의  search함수 while문 말고 for문으로 사용하여 수정
	int i, nx, ky, idx;
	int* x;
	puts("선형 검색(보초법)");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값 :");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)
		puts("검색에 실패하였습니다.");
	else
		printf("%d은 x[%d]에 있습니다.\n", ky, idx);
	free(x);

	return 0;
}