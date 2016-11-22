#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 2;

	for (int i = 0; i < a; i++)
	{
		int c;
		for (c = 0; c <= (a - i); c++)
			printf("  ");

		int num;
		for (c = 0; c <= i; c++)
		{
			while (1) {
				for (num = 2; num <= b - 1; num++)
				{
					if (b % num == 0)
						break;
				}
				if (b++ == num)
				{
					printf("%3d ", b - 1);
					break;
				}
			}
		}
		printf("\n");
	}
}

