#define _CRT_SECURE_NO_WAENINGS 1
#include<stdio.h>
int main()
{
	////д����������������������в�����Ҫ�����֣�
	////	�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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

	//��дһ�����򣬿���һֱ���ռ����ַ���
	//	�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
	//	������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
	//	��������ֲ������

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