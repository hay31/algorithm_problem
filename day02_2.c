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
	printf("사람 수 : %d",number);
	
	return 0;
}*/
//Q5
/*void ary_reverse(int a[], int n) {
	
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[j]);
		}
		printf("\na[%d]과 a[%d]를 교환합니다.", i, n - 1 - i);
		swap(int, a[i], a[n - 1 - i]);
		printf("\n");
	
	}
	for (int j = 0; j < n; j++) {
		printf("%d ", a[j]);
	}
	printf("\n역순 정렬을 종료합니다.");
}
int main(void) {
	int i;
	int* x;
	int nx;

	printf("요소 개수 :");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요.\n", nx);
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
//	int digits = 0;		/* 변환한 다음의 자릿수 */
//
//	if (x == 0)								/* 0이면 */
//		d[digits++] = dchar[0];				/* 변환한 다음에 0을 대입 */
//	else {									/* 0이 아니라면 */
//		while (x) {
//			if (x < n) d[digits++] = x;
//			d[digits++] = dchar[x / n];		/* n으로 나눈 나머지를 넣음 */
//			x %= n;
//		}
//		return digits;
//	}
//}

//Q7 전체 주석 해제 : CTRL+K +U 주석 설정 CTRL + K +C
//int card_conv(unsigned x, int n, char d[])
//{
//	int i;
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0;		/* 변환한 다음의 자릿수 */
//
//	if (x == 0)								/* 0이면 */
//		d[digits++] = dchar[0];				/* 변환한 다음에 0을 대입 */
//	else {									/* 0이 아니라면 */
//		while (x) {
//			d[digits++] = dchar[x % n];		/* n으로 나눈 나머지를 넣음 */
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
//	unsigned no;			/* 변환하는 정수 */
//	int cd;					/* 기수 */
//	int dno;				/* 변환 뒤 자릿수 */
//	char cno[512];			/* 변환 뒤 각 자리의 숫자를 넣어두는 문자 배열 */
//	int retry;				/* 다시 한번? */
//
//	puts("10 진수를 기수 변환합니다.");
//
//	do {
//		printf("변환하는 음이 아닌 정수 : ");
//		scanf("%u", &no);
//
//		do {
//			printf("무슨 진수로 변환합니까?(2 ~ 36) : ");
//			scanf("%d", &cd);
//		} while (cd < 2 || cd > 36);
//
//		dno = card_conv(no, cd, cno);		/* no를 cd 진수로 변환 */
//
//		printf("%d 진수로 ", cd);
//		for (i = dno-1; i >=0 ; i--)			/* 윗자리부터 표시 */
//			printf("%c", cno[i]);
//		printf("입니다.\n");
//
//		printf("다시 한 번 할까요?(1 예 / 0 아니오): ");
//		scanf("%d", &retry);
//	} while (retry == 1);
//
//	return 0;
//}

//Q10
/*--- type 형의 x와 y의 값을 교환 ---*/
#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)
#include <time.h>
#include <stdlib.h>
/*--- 요솟수 n인 배열 a의 모든 요소의 순서를 셔플 ---*/
void shuffle(int a[], int n)
{
	int i;

	srand(time(NULL));
	for (i = n - 1; i> 0; i--) {		/* 배열 a를 셔플 */
		int j = rand() % (i + 1);
		if (i != j) //i랑 j가 같지 않다면 
			swap(int, a[i], a[j]);
	}
}

int main(void)
{
	int i;
	int *x;		/* 배열의 첫 번째 요소에 대한 포인터 */
	int nx;			/* 배열 x의 요솟수 */

	printf("요솟수 : ");
	scanf("%d", &nx);
	x =(int)( calloc(nx, sizeof(int)));			/* 요솟수 nx인 int 형 배열 x를 생성 */

	printf("%d 개의 정수를 입력하세요.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	shuffle(x, nx); /* 배열 x의 요소 순서를 셔플 */

	printf("배열 요소의 순서를 셔플했습니다.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); /* 배열 x를 해제 */

	return 0;
}