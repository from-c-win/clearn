#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
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

//2.��дһ������ʵ��n ^ k��ʹ�õݹ�ʵ��
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

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigiSum(int n)
{
	if (n > 10)
		return n % 10 + DigiSum(n / 10);
	else
		return n;
}

//4. ��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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