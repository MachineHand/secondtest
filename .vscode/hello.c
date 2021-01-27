	#include <stdio.h>


	int main(void)
	{
	int mul[3][9];

	for (int i = 0; i <3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			mul[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%d  ", mul[i][j]);
		}
		printf("\n");
	}
	return 0;
	}