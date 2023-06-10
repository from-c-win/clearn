//#include<stdio.h>
//int main()
//{
//	//const float pai = 3.14f;
//	//pai = 5.14;
//
//	/*char arr1[] ="bit";
//	char arr2[] = {'b','i','t'};
//	char arr3[] = {'b','i','t','\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr3);*/\
//
//	/*printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\628\test.c"));*/
//
//	/*int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d",*p);*/
//
//	//char a = "x";
//	//char* b = &a;
//	//*b = "y";
//	//printf("%c\n", *b);
//
//	//int n = 1;
//	//int m = 2;
//	//switch (n)
//	//{
//	// case 1:
//	//	m++;
//	// case 2:
//	//	n++;
//	// case 3:
//	//	switch (n)
//	//	{
//	//	 case 1:
//	//		n++;
//	//	 case 2:
//	//		m++;
//	//		n++;
//	//		break;
//	//	}
//	// case 4:
//	//	 m++;
//	//	 break;
//	//default:
//	//	break;
//
//	//}
//	//printf("m=%d,n=%d\n", m, n);
//
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	i = i + 1;
//	//	if (i == 5)
//	//		continue;
//	//	printf("%d\n", i);
//	//}
//
//	//int i = 0;
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	if (i == 5)
//	//		continue;
//	//	printf("%d", i);
//
//	//}
//
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)
//	//	{
//	//		printf("hehe\n");
//	//	}
//
//	//}
//
//	//int x, y;
//	//for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	//{
//	//	printf("hehe\n");
//	//}
//	//int i = 0;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++)
//	//{
//	//	k++;
//	//	printf(1);
//	//}
//
//	//int i = 10;
//
//	//do
//	//{
//	//	if (5 == i)
//	//		continue;
//	//	printf("%d\n", i);
//	//} while (i < 10);
//
//	//	int bin_search(int arr[], int left, int right, int key)
//	//	 {
//	//	int mid = 0;
//	//	while (left + right) >> 1;
//	//	if (arr[mid] > key)
//	//	{
//	//		right = mid - 1;
//	//	}
//	//	else if (arr[mid] < key)
//	//	{
//	//		left = mid + 1;
//	//	}
//	//	else
//	//		return mid;
//	//}
//	return 0;
//}
#include <stdio.h>
int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right)
	{
		mid = (right + left) >> 1;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{

	int key = 3;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int x = bin_search(arr, left, right, key);
	printf("%d", x);
	return 0;
}