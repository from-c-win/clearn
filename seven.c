#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ���������ز����������� 1 �ĸ���
int count1(int x)
{
	int count = 0;
	/*while (x)
	{
		x = x & (x - 1);
		count++;
	}*/
	int i = 0;
	for (; i < 32; i++)
	{

		if (x & (1 << i))
			count++;
	}
	return count;
}

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
void apart(int x)
{
	int arr1[16] = {0};
	int arr2[16] = {0};
	int i,last;
	int a = 0, b = 0;
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 1)
		{
			last = x & 1;
			arr1[a] = last;
			x=x >> 1;
			a++;
		}
		if (i % 2 == 0)
		{
			last = x & 1;
			arr2[b] = last;
			x = x >> 1;
			b++;
		}
	}
	for (i = 15; i >= 0; i--)
	{
		printf("%d  ", arr1[i]);
		printf("%d\n", arr2[i]);
	}

}

//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
void diff(int a,int b)
{
	int x;
	x = a ^ b;
	int y=count1(x);
	printf("%d", y);
}



int main()
{

	int y = count1(5);
	//printf("%d", y);
	//apart(5);
	diff(1999, 2299);
	return 0;
}