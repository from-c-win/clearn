#define _CRT_SECURE_NO_WARNINGS 1
#include "func.h"

//��Ϸ��ʼ��־
void head()
{
	printf("*******************\n");
	printf("**1:��ʼ��0���˳�**\n");
	printf("*******************\n");
	printf("�����룺");
}

//��ʼ������
void Initboard(char arr[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

//��ӡ����
void chequer(char arr[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("| %c |", arr[i][j]);
		}
		if (i < row-1)
			printf("\n------------\n");
	}
	printf("\n");
}

//��������
char overrule(char arr[ROW][COL])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		//�����ж�
		if ((arr[i][0] == arr[i][1] )&&(arr[i][1] == arr[i][2])&&(arr[i][0]!=' '))
			return arr[i][0];
		//�����ж�
		if ((arr[0][i] == arr[1][i])&&(arr[1][i] == arr[2][i])&&(arr[0][i]!=' '))
			return arr[0][i];
	}
	//б���ж�
	if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[1][1] != ' '))
		return arr[1][1];
	if ((arr[0][2] == arr[1][1]) && (arr[2][0] == arr[1][1])&&(arr[1][1]!=' '))
		return arr[1][1];
	
	//������
	if (full(arr) == 1)
		return 9;

	//û���κ��������Ϸ����
	return 0;
}

//������
int full(char arr[ROW][COL])
{
	int i, j;
	int count = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] != ' ')
				count++;
		}
	}
	if (count == 9)
		return 1;
	else
		return 0;
}

//��Ϸ��������
void game(char arr[ROW][COL])
{
	chequer(arr, ROW, COL);

	//���������ַ
	int row, col,airow,aicol;
	do
	{
		printf("enter blank codinate\n");
		scanf("%d %d", &row, &col);
	} while (arr[row][col] != ' ');//�ж��Ƿ�Ϊ��
	arr[row][col] = 'X';
	printf("player:\n");
	chequer(arr, ROW, COL);

	//�ж���Ϸ1
	if (overrule(arr) == 'X') 
	{
		printf("player  win!!!!\n");
		printf("player  win!!!!\n");
		printf("play again?\n");
		head();
		Initboard(arr, 3, 3);
		return 0;
	}
	else if (overrule(arr) == 9)
	{
		printf("chequer is full!\n");
		printf("chequer is full!\n");
		printf("game over\n");
		head();
		Initboard(arr, 3, 3);
		return 0;
	}

	//Ϊ��������
	do
	{
		airow = rand() % 3;
		aicol = rand() % 3;
	} while (arr[airow][aicol] !=' ');//�ж��Ƿ�Ϊ��
	arr[airow][aicol] = 'O';
	printf("computer:\n");
	chequer(arr, ROW, COL);
	printf("turn over\n\n\n");


	//�ж���Ϸ�Ƿ����
	switch (overrule(arr))
	{
	case 0:
		game(arr);
		break;
	case 'X':
		printf("player  win!!!!\n");
		printf("player  win!!!!\n");
		printf("play again?\n");
		head();
		Initboard(arr,3,3);
		break;
	case 'O':
		printf("computer win!!!\n");
		printf("computer win!!!\n");
		printf("play again?\n");
		head();
		Initboard(arr,3,3);
		break;
	case 9:
		printf("chequer is full!\n");
		printf("chequer is full!\n");
		printf("game over\n");
		head();
		Initboard(arr, 3, 3);
	}

}