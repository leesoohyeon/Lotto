#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//���ڿ� ��ȯ, �� ���� ����, ���� �޸� ���� ���� �Լ����� ����
#include <time.h>//�ð��� ��¥�� ��ų� �����ϴ� �Լ����� ����

int output(int i);

int main(void)
{
	int lotto[7];//�迭 ����
	int i, j, a, temp;
	int m[6];//����� �Է� ����
	int Nums;
	srand((int)time(NULL));
	//rand �Լ��� ���� ��� ���� ���� ��� ��
	//time�Լ��� seed���� �����ؼ� ���α׷��� ������ ������ �ٸ��� ��µǰ� ���� 

	printf("�� ���� �����Ͻðڽ��ϱ�?\n");

	printf("     ");
	scanf_s("%d", &Nums);
	printf("\n\n	L O T T O\n");
	printf("	�� 978 ȸ\n");
	printf("    -----------------\n\n");
	printf("          ����   \n");
	printf("-------------------------\n");

	for (Nums; Nums > 0; Nums--)
	{
		int c;
		printf("    ");
		for (c = 0; c < 6; c++)
		{
			scanf_s("%d", &m[c]);
		}
	}

	printf("\n     �ζ� ��÷ ��ȣ\n");


	for (a = 0; a < 6; a++)
	{
		i = rand() % 10000; // 0-10000���� ���� ����
		lotto[a] = output(i); // �迭�� ����
		for (int b = 0; b < a; b++)//�ߺ�����
		{
			if (lotto[a] == lotto[b])
			{
				a--;
				break;
			}
		}
	}

	for (j = 0; j < 6; j++)//��������
	{
		for (a = 0; (a + j) < 5; a++)
		{
			if (lotto[a] > lotto[a + 1])
			{
				temp = lotto[a];
				lotto[a] = lotto[a + 1];
				lotto[a + 1] = temp;
			}
		}
	}

	printf("    ");

	for (a = 0; a < 6; a++)
	{
		printf("%d ", lotto[a]);//�ζ���÷���
	}

	lotto[a] = rand() % 45 + 1;
	printf("[%d]\n\n", lotto[a]);//���ʽ���ȣ���


	int ball = 0, bonus = 0;//������
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (m[i] == lotto[j])

			{
				if (i == 6)
					bonus++;
				else
					ball++;
			}
		}
	}
	printf("       ");
	if (ball == 6)
		printf("1���Դϴ�.\n");
	else if (ball == 5 && bonus == 1)
		printf("2���Դϴ�.\n");
	else if (ball == 5)
		printf("3���Դϴ�.\n");
	else if (ball == 4)
		printf("4���Դϴ�.\n");
	else if (ball == 3)
		printf("5���Դϴ�.\n");
	else if (ball < 3)
		printf("������ȸ��\n");




	return 0;
}

int output(int i) // Ȯ���� ���� ���ں� �з�
{
	if (i < 244)
		return 1;
	else if (i < 476)
		return 2;
	else if (i < 700)
		return 3;
	else if (i < 937)
		return 4;
	else if (i < 1155)
		return 5;
	else if (i < 1375)
		return 6;
	else if (i < 1595)
		return 7;
	else if (i < 1811)
		return 8;
	else if (i < 1998)
		return 9;
	else if (i < 2231)
		return 10;
	else if (i < 2455)
		return 11;
	else if (i < 2693)
		return 12;
	else if (i < 2931)
		return 13;
	else if (i < 3161)
		return 14;
	else if (i < 3376)
		return 15;
	else if (i < 3597)
		return 16;
	else if (i < 3838)
		return 17;
	else if (i < 4067)
		return 18;
	else if (i < 4285)
		return 19;
	else if (i < 4516)
		return 20;
	else if (i < 4739)
		return 21;
	else if (i < 4924)
		return 22;
	else if (i < 5119)
		return 23;
	else if (i < 5344)
		return 24;
	else if (i < 5553)
		return 25;
	else if (i < 5781)
		return 26;
	else if (i < 6024)
		return 27;
	else if (i < 6224)
		return 28;
	else if (i < 6417)
		return 29;
	else if (i < 6631)
		return 30;
	else if (i < 6856)
		return 31;
	else if (i < 7055)
		return 32;
	else if (i < 7290)
		return 33;
	else if (i < 7970)
		return 34;
	else if (i < 7536)
		return 35;
	else if (i < 7751)
		return 36;
	else if (i < 7970)
		return 37;
	else if (i < 8198)
		return 38;
	else if (i < 8426)
		return 39;
	else if (i < 8663)
		return 40;
	else if (i < 9091)
		return 41;
	else if (i < 9308)
		return 42;
	else if (i < 9567)
		return 43;
	else if (i < 9780)
		return 44;
	else if (i < 10000)
		return 45;
}
