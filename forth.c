#define _CRT_SECURE_NO_WAENINGS 1
#include<stdio.h>
int main()
{
	////写代码可以在整型有序数组中查找想要的数字，
	////	找到了返回下标，找不到返回 - 1.（折半查找）
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int left = 0;
	//int len = sizeof(arr) / sizeof(arr[0]);
	//int right = len - 1;
	//int sign = len / 2;
	//int g=7;
	//while (sign == g)
	//{
	//	if (arr[sign] < g)
	//	{
	//		left = sign + 1;
	//		sign = (right + left) / 2;
	//	}
	//	else if(arr[sign] > g)
	//	{
	//		right = sign - 1;
	//		sign = (right + left) / 2;
	//	}
	//	else if (g == left || g == right)
	//	{
	//		if (g == left)
	//			sign = left;
	//		else
	//			sign = right;
	//	}
	//}
	//printf("Anser %d", sign);

	//编写一个程序，可以一直接收键盘字符，
	//	如果是小写字符就输出对应的大写字符，
	//	如果接收的是大写字符，就输出对应的小写字符，
	//	如果是数字不输出。

	//int i, n;
	//for (;;)
	//{
	//	scanf("%c", &i);
	//	if (97 < i < 122) {
	//		n = i - 32;
	//		printf("%c\n", n);
	//	}
	//	else if (65 < i < 90) {
	//		n = i + 32;
	//		printf("%c\n", n);
	//	}

	//}
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
		{

		}
	}

	return 0;

}