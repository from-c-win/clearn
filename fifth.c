#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
int reset(int arr1[],int sz)
{
	int i = 0;
	for (i=0; i < sz; i++)
	{
		arr1[i] = i+1;
		//���ﲻ֧�ֱ䳤����....ǰ������ˣ�д��int arr1[i] = i+1ϵͳ��Ϊ��Ҫ�������顣
		printf("%d", arr1[i]);
	}
}



int main()
{

	int x = 12;
	int arr1[5] = {0};
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	reset(arr1, sz);
	//�� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
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