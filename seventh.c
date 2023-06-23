#define _CRT_SECURE_NO_WARNINGS 1
#include"func.h"

int main()
{
	int input = 0;
	char arr[3][3] = { 0 };
	Initboard(arr, 3, 3);
	head();
	do {
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(arr);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("erro\n");
			break;
		}
	} while (input);


	return 0;
}