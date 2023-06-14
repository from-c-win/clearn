//2. 不允许创建临时变量，交换两个数的内容（附加题）
#include<stdio.h>
int main()
{
	////2. 不允许创建临时变量，交换两个数的内容（附加题）
	//int x = 5;
	//int y = 3;
	//x = x ^ y;
	//y = x ^ y;
	//x = x ^ y;
	//printf("%d,%d", x, y);

	////1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
	//int arr1[] = { 1,2,3 };
	//int arr2[] = { 4,5,6 };
	//int x1[3] = {0};
	//int y = sizeof(arr1) / sizeof(arr1[0]);
	//int i = 0;
	//for (i = 0; i < y; i++)
	//{
	//	x1[i] = arr1[i];
	//	arr1[i] = arr2[i];
	//	arr2[i] = x1[i];
	//	printf("%d,%d\n", arr1[i], arr2[i]);
	//}

	////3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
	//int i = 0;
	//int x = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	int y=i % 10;
	//	int z=i / 10;
	//	if (9 == y) {
	//		x+=1;
	//		printf("%d\n", i);
	//	}
	//	if (9 == z) {
	//		x+=1;
	//		printf("%d\n", i);
	//	}
	//}
	//printf("%d", x);

	/*1.在屏幕上输出以下图案：
		*
		***
		*****
		*******
		*********
		***********
		*************
		***********
		*********
		*******
		*****
		***
		**/

	//char arr1[] = {' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' '};
	//int i = 0;
	//int j = 0;
	//int x = strlen(arr1) / strlen(arr1[0]);
	//int mid = (x / 2);
	//for (i = 1; i < mid; i++)
	//{
	//	arr1[mid - i] = '*';
	//	arr1[mid + i] = '*';
	//	while (j < x)
	//	{
	//		printf("%c", arr1[j]);
	//		j++;
	//	}
	//}
	//以下是正确答案，上面是数组打印做不出来
	int i =6;
	int j = 1;
	for (; i > 0; i--)
	{
		int x = 0;
		while (x<i) 
		{
			printf(" ");
			x++;
		}
		int y = 0;
		while (y<j)
		{
			printf("*");
			y++;
		}
		j += 2;
		printf("\n");
	}
	int xin = 11;
	int kon = 1;
	for (; kon < 7; kon++)
	{
		int z = 0;
		while (z < kon)
		{
			printf(" ");
			z++;
		}
		int k = 0;
		while (k < xin)
		{
			printf("*");
			k++;
		}
		xin -= 2;
		printf("\n");
	}
	




	return 0;
}