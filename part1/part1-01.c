#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("���� �������� [��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n");
	printf("\n [1] ����(m)  [2] ��ġ(in)  [3] ��Ʈ(ft)  [4] �ߵ�(yd)  [0] ����(stop) \n");
	printf("\n[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >> ");
	scanf("%d %d", &a, &b);

	double input = 0.1;
	while (a && b && input)
	{
		if (a >= 5 || a < 0 || b >= 5 || b < 0)
		{
			printf("�߸� �����߽��ϴ�. �ٽ� �����ϼ���.\n");
			continue;
		}

		printf("\n[��ȯ�� ����]�� ���̸� �Է��ϼ���. >> ");
		scanf("%lf", &input);
		if (input == 0) break;

		switch (a) {
		case 1:
			printf("\n [���]  %.2f(����) -->", input);
			if (b == 1)
				printf("%.2f(����)\n", input);
			else if (b == 2)
				printf("%.2f(��ġ)\n", 39.370079 * input);
			else if (b == 3)
				printf("%.2f(��Ʈ)\n", 3.28084 * input);
			else if (b == 4)
				printf("%.2f(�ߵ�)\n", 1.093613 * input);
			break;

		case 2:
			printf("\n [���] %.2f(��ġ) -->", input);
			if (b == 1)
				printf("%.2f(����)\n", 0.0254 * input);
			else if (b == 2)
				printf("%.2f(��ġ)\n", input);
			else if (b == 3)
				printf("%.2f(��Ʈ)\n", 0.083333 * input);
			else if (b == 4)
				printf("%.2f(�ߵ�)\n", 0.027778 * input);
			break;

		case 3:
			printf("\n [���] %.2f(��Ʈ) -->", input);
			if (b == 1)
				printf("%.2f(����)\n", 0.3848 * input);
			else if (b == 2)
				printf("%.2f(��ġ)\n", 12 * input);
			else if (b == 3)
				printf("%.2f(��Ʈ)\n", input);
			else if (b == 4)
				printf("%.2f(�ߵ�)\n", 0.3333 * input);
			break;

		case 4:
			printf("\n [���] %.2f(�ߵ�) -->", input);
			if (b == 1)
				printf("%.2f(����)\n", 0.9144 * input);
			else if (b == 2)
				printf("%.2f(��ġ)\n", 36 * input);
			else if (b == 3)
				printf("%.2f(��Ʈ)\n", 3 * input);
			else if (b == 4)
				printf("%.2f(�ߵ�)\n", input);
			break;
		}
	};

	printf("\n�����մϴ�.\n");

	return 0;
}

