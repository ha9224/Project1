#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int in;
	int a;
	int b;
	int c[32];

	printf(" [1] ��Ʈ AND(&)\n\n");
	printf(" [2] ��Ʈ OR(|)\n\n");
	printf(" [3] ��Ʈ XOR(^)\n\n");
	printf(" [4] ��Ʈ COMPLEMENT(~)\n\n");
	printf(" [0] ���� (STOP)\n\n");

	printf(" �� ���� �� �ϳ��� �����ϼ���. >> ");
	scanf("%d", &in);

	if (in == 1) {
		printf("��Ʈ ������ �� ���� �Է� >>  ");
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
		printf("��Ʈ ������ �� ���� �Է� >>  ");
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
		printf("��Ʈ ������ �� ���� �Է� >>  ");
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
		printf("��Ʈ ������ �ϳ��� ���� �Է� >>  ");
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
		printf("����Ǿ����ϴ�.");
}