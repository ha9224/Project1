#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num1, num2;
	float leng1 = 1;

	printf("���� ��������  [��ȯ�� ����]   -->   [��ȯ��� ����]�� �����մϴ�.\n\n");
	printf(" [1] ����(m)  [2] ��ġ(in)  [3] ��Ʈ(ft)  [4] �ߵ�(yd)  [0] ����(stop)\n\n");
	printf("[��������]  -->  [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���.  >> ");
	scanf("%d %d", &num1, &num2);

	while (num1 != 0 && leng1 != 0)
	{
		printf("\n[��ȯ�� ����]�� ���̸� �Է��ϼ���.  >> ");
		scanf("%f", &leng1);
		if (leng1 == 0)
			break;

		if (num1 == 1)
			switch (num2)
			{
			case 2: printf("\n [���]  %f(����) --> %f(��ġ)\n\n", leng1, (leng1 * 39.37));
				break;
			case 3: printf("\n [���]  %f(����) --> %f(��Ʈ)\n\n", leng1, (leng1 * 3.28));
				break;
			case 4: printf("\n [���]  %f(����) --> %f(�ߵ�)\n\n", leng1, (leng1 * 1.09));
				break;
			}

		else if (num1 == 2)
			switch (num2)
			{
			case 1: printf("\n [���]  %f(��ġ) --> %f(����)\n\n", leng1, (leng1 * 0.02));
				break;
			case 3: printf("\n [���]  %f(��ġ) --> %f(��Ʈ)\n\n", leng1, (leng1 * 0.08));
				break;
			case 4: printf("\n [���]  %f(��ġ) --> %f(�ߵ�)\n\n", leng1, (leng1 * 0.02));
				break;
			}

		else if (num1 == 3)
			switch (num2)
			{
			case 1: printf("\n [���]  %f(��Ʈ) --> %f(����)\n\n", leng1, (leng1 * 0.3));
				break;
			case 2: printf("\n [���]  %f(��Ʈ) --> %f(��ġ)\n\n", leng1, (leng1 * 12));
				break;
			case 4: printf("\n [���]  %f(��Ʈ) --> %f(�ߵ�)\n\n", leng1, (leng1 * 0.33));
				break;
			}

		else if (num1 == 4)
			switch (num2)
			{
			case 1: printf("\n [���]  %f(�ߵ�) --> %f(����)\n\n", leng1, (leng1 * 0.91));
				break;
			case 2: printf("\n [���]  %f(�ߵ�) --> %f(��ġ)\n\n", leng1, (leng1 * 36));
				break;
			case 3: printf("\n [���]  %f(�ߵ�) --> %f(��Ʈ)\n\n", leng1, (leng1 * 3));
				break;
			}
	}
	printf("\n�����մϴ�.\n");

	return 0;
}