#include<stdio.h>
#include<math.h>
int flower(int x)
{
	int a = x/100;
	int b = (x / 10) % 10;
	int c = x % 10;
	int y = pow(a, 3) + pow(b, 3) + pow(c, 3);
	return y;
}
int add(int n,int x)
{
	int num = 0;
	while (n > 0)
	{
		num = num * 10 + x;
		n--;
	}
	return num;
}
int main()
{
	////���0��999֮������С�ˮ�ɻ������������
	//int i = 0;
	//int in = 0;
	//for (; i < 1000; i++)
	//{
	//	in = flower(i);
	//	if (i == in)
	//	{
	//		printf("This is flower %d\n", i);
	//	}
	//}

	//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
	int sn = 0;
	int a = 2;
	int i = 0;
	for (i = 1; i <= 5; i++)
	{
		sn = sn+add(i, a);
	}
	printf("%d", sn);

	return 0;
}