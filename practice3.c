#include <stdio.h>
#include <stdlib.h>
int search_idx(const int a[], int n, int key, int idx[]) {//const니까 수정 불가

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
	
	puts("선형 검색(보초법)");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	p = calloc(nx, sizeof(int)); // 배열의 인덱스를 저장할 배열
	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값 :");
	scanf("%d", &ky);
	cnt = search_idx(x, nx, ky,p);
	if (cnt == -1)
		puts("검색에 실패하였습니다.");
	else {
		printf("해당 요소의 index는 ");
		for (int i = 0; i < cnt; i++) {
		
				printf("x[%d]", p[i]);
			
		
		}
		printf("\n해당 요소의 개수는 %d", cnt);
	}
		
	free(x);

	return 0;
}
///* 연습 3-3 배열에서 임의의 값과 일치하는 모든 요소의 인덱스를 추출 */
//#include <stdio.h>
//#include <stdlib.h>
//
///*--- 배열 a에서 값이 key인 모든 요소의 인덱스를 idx에 저장 ---*/
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
//	int no;		/* ky과 일치하는 요소의 개수 */
//	int *x;		/* 데이터를 저장하는 배열 */
//	int *idx;	/* ky와 일치하는 요소의 인덱스를 저장하는 배열 */
//
//	puts("선형 검색");
//	printf("요솟수 : ");
//	scanf("%d", &nx);
//	x = calloc(nx, sizeof(int));	/* 요솟수 nx인 int 형 배열을 생성 */
//	idx = calloc(nx, sizeof(int));	/* 요솟수 nx인 int 형 배열을 생성 */
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf("%d", &x[i]);
//	}
//	printf("검색 값 :");
//	scanf("%d", &ky);
//
//	no = search_idx(x, nx, ky, idx);	/* 배열 x에서 값이 ky 인 요소를 선형 검색 */
//
//	if (no == -1)
//		puts("일치하는 요소는 존재하지 않습니다.");
//	else {
//		printf("일치하는 요소는 %d 개입니다.\n", no);
//		for (i = 0; i < no; i++)
//			printf("x[%d] ", idx[i]);
//		putchar('\n');
//	}
//
//	free(x);	/* 배열을 해제 */
//	free(idx);	/* 배열을 해제 */
//
//	return 0;
//}
