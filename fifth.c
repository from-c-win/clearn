#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
int cheng(int num)
{
	int i,j;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
int reset(int arr1[],int sz)
{
	int i = 0;
	for (i=0; i < sz; i++)
	{
		arr1[i] = i+1;
		//这里不支持变长数组....前面输错了，写成int arr1[i] = i+1系统以为我要创建数组。
		printf("%d", arr1[i]);
	}
}



int main()
{

	int x = 12;
	int arr1[5] = {0};
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	reset(arr1, sz);
	//有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
	int i,j,k;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5;j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && i != k && k != j)
				{
					printf("%d%d%d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}