#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//1.递归和非递归分别实现求第n个斐波那契数。
int fei(int n)
{
	if (n >= 2)
		return(fei(n - 1) + fei(n - 2));
	else
		return(1);
}

int fei2(int n)
{
	int i,count,x,y;
	for (i = 0; i < n; i++)
	{
		if (i >= 2)
		{
			x = y;
			y = count;
			count = x + y;
		}
		else
			x = y = count = 1;
			
	}
	return count;
}

//2.编写一个函数实现n ^ k，使用递归实现
int cifang(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n * cifang(n, k - 1);
	}
}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigiSum(int n)
{
	if (n > 10)
		return n % 10 + DigiSum(n / 10);
	else
		return n;
}

//4. 编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char *string)
{
	if (*string != '\0')
	{
		reverse_string(string + 1);
		printf("%c ", *string);
	}
	else
		return 0;
}




int main()
{

	int n = 6;
	int y = 3;
	int x = fei2(n);
	int nk1 = cifang(n, y);
	int digi = DigiSum(2234);
	//printf("%d", x);
	//printf("%d", nk1);
	//printf("%d", digi);
	char *str1 = "qwej";
	reverse_string(str1);
	return 0;
}