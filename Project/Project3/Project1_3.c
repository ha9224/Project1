#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int in;
	int x, y, dump;


	printf("��ȯ�� �� ������ �Է��ϼ���. >>");
	scanf("%d %d", &x, &y);
	printf("\n�Է��� �� ��: x = %d and y = %d\n\n", x, y);

	printf(" �ӽ� ���� ���   �̿� ���[1]\n");
	printf(" ������ ��������  ��ȯ ���[2]\n");
	printf(" ������ ���������� ��ȯ ���[3]\n");
	printf(" XOR ������ ^     �̿� ���[4]\n\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>");
	scanf("%d", &in);

	switch (in)
	{
	case 1:
	{
		dump = x;
		x = y;
		y = dump;
		break;
	}
	case 2:
	{
		x = x + y;
		y = x - y;  //[ (x + y) - y ]
		x = x - y;  //[ (x + y) - x ]
		break;
	}
	case 3:
	{
		x = x * y;
		y = x / y;  //[ (x * y) / y ]
		x = x / y;  //[ (x * y) / x ]
		break;
	}
	case 4:
	{
		x = x ^ y;
		y = x ^ y;  //[ (x ^ y) ^ y ] == [ x ^ (y ^ y) ] == [x ^ 0] == [ x ]
		x = x ^ y;  //[ (x ^ y) ^ x ] == [ (y ^ x) ^ x ] == [y ^ (x ^ x) ] == [y ^ 0] == [ y ]
		break;
	}
	}
	printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);

	return 0;
}