#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int in;
	int a;
	int b;
	int c[32];

	printf(" [1] 비트 AND(&)\n\n");
	printf(" [2] 비트 OR(|)\n\n");
	printf(" [3] 비트 XOR(^)\n\n");
	printf(" [4] 비트 COMPLEMENT(~)\n\n");
	printf(" [0] 종료 (STOP)\n\n");

	printf(" 위 연산 중 하나를 선택하세요. >> ");
	scanf("%d", &in);

	if (in == 1) {
		printf("비트 연산할 두 정수 입력 >>  ");
		scanf("%d%d", &a, &b);
		printf("x =    ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((a >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", a);
		printf("y =    ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((b >> i) & 1) ? 1 : 0);
		}
		printf(" %d \n", b);
		printf("x&y =  ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", (((a & b) >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", a&b);
	}
	else if (in == 2) {
		printf("비트 연산할 두 정수 입력 >>  ");
		scanf("%d%d", &a, &b);
		printf("x =    ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((a >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", a);
		printf("y =    ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((b >> i) & 1) ? 1 : 0);
		}
		printf(" %d \n", b);
		printf("x&y =  ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", (((a | b) >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", a | b);
	}
	else if (in == 3) {
		printf("비트 연산할 두 정수 입력 >>  ");
		scanf("%d%d", &a, &b);
		printf("x =    ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((a >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", a);
		printf("y =    ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((b >> i) & 1) ? 1 : 0);
		}
		printf(" %d \n", b);
		printf("x&y =  ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", (((a ^ b) >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", a^b);
	}
	else if (in == 4) {
		printf("비트 연산할 하나의 정수 입력 >>  ");
		scanf("%d", &a);
		printf("x =    ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((a >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", a);
		printf("~x =   ");
		for (int i = 31; i >= 0; i--) {
			printf("%d", ((~a >> i) & 1) ? 1 : 0);
		}
		printf(" %d\n", ~a);
	}
	else
		printf("종료되었습니다.");
}