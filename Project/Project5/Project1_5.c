#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)
{
	int num = 1;
	int num8, num16, num162;
	int store = 0;
	int store2 = 0;
	int store3 = 0;
	int count2;


	while (num != 0)
	{


		printf("\n\n������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &num);
		if (num == 0)
			break;
		printf("\n\n       ������: ");

		num8 = num;
		num16 = num;
		num162 = num;



		for (int i = 31; i >= 0; i--)

		{

			printf("%d", (num & (1 << i)) ? 1 : 0);

		}

		printf("\n\n       ������: %8o       ", num8);

		for (int count = 1; num8 > 0; count = count * 10)
		{
			store += ((num8 % 8)* count);
			num8 = num8 / 8;

		}
		printf("%d", store);


		printf("\n\n       16����: %8X       ", num16);


		count2 = 0;

		while (num16 > 0)
		{
			store2 = num16 % 16;
			num16 = num16 / 16;
			count2++;
		}

		for (int i = count2; i>0; i--)
		{
			num162 = num;

			for (int j = 0; j < i - 1; j++)
			{
				num162 = num162 / 16;
			}
			store3 = num162 % 16;
			if (store3 < 10)
			{
				printf("%d", store3);
			}
			else
			{
				printf("%c", store3 + 55);
			}
		}
	}

	printf("�����մϴ�. \n");

	return 0;

}