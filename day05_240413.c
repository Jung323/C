#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//	printf("���̸� �Է��ϼ���: ");
//	scanf("%d", &age);
//	if (age >= 6 && age < 13)
//		printf("����� 500���Դϴ�.\n");
//	else if (age >= 13 && age < 19)
//		printf("����� 900���Դϴ�.\n");
//	else if (age>=19 && age<65)
//		printf("����� 1250���Դϴ�.\n");
//	else
//		printf("����� �����Դϴ�.\n");
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//
//
//	int kor = 88, eng = 90, mat= 58, soc=81,sci=72;
//	int avg = (kor + eng + mat + soc + sci) / 5;
//	printf("����� %d���Դϴ�.\n",avg);
//
//	switch (avg/10)
//	{
//	case 10: // 100��
//	case 9:	// 90~99��
//		printf("������ A�Դϴ�.\n");
//		break;
//	case 8:	// 80~89��
//		printf("������ B�Դϴ�.\n");
//		break;
//	case 7: // 70~79��
//		printf("������ C�Դϴ�.\n");
//		break;
//	case 6: // 60~69��
//		printf("������ D�Դϴ�.\n");
//		break;
//	default: // 0~59��
//		printf("������ F�Դϴ�.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	
//	while (num != -1)
//	{
//		printf("���ڸ� �Է��ϼ��� (-1 �Է� �� ����): ");
//		scanf("%d", &num);
//		if (num == -1)
//			printf("�����մϴ�.");
//		else
//			printf("%d��(��) �Է��ϼ̳׿�.\n", num);
//	}
//	return 0;
//}

// do~while��
//do {
//	// �ݺ� �����ϰ��� �ϴ� ����
//} while (����);

//#include <stdio.h>
//int main(void)
//{
//	int num = -1;
//	do {
//		printf("-1 �Է� �� ����: "); // ��� �ѹ��� �����ϴ� �ڵ�
//		scanf("%d", &num);
//	} while (num != -1);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int number = 0;
//	int sum = 0; //�հ� (0���� �ʱ�ȭ)
//
//	do {
//		number++; //number�� 1 ����
//		sum += number; //�����հ�
//	} while (number < 10);
//
//	printf("1~10������ ��: %d", sum);
//
//	return 0;
//}


// ex) 1~10������ �� �߿��� 3�� ��� ���
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	while (i <=10)
//	{
//		if (i % 3 == 0)
//			printf("i�� ��: %d\n", i);
//		i++;
//	}
//	return 0;
//}

// ex) ������(2��)
//#include <stdio.h>
//int main(void)
//{
//	int i = 1;
//
//	while (i < 10)
//	{
//		printf("2 X %d = %d\n", i, 2 * i);
//		i++;
//	}
//	return 0;
//}

//���ϴ� ���� �Է¹޾� ������
//#include <stdio.h>
//int main(void)
//{
//	int dan;
//	printf("�������� �ܿ���! �� ��? ");
//	scanf("%d", &dan);
//	int i = 1;
//
//	while (i<10)
//	{
//		printf("%d X %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//	return 0;
//}

// ������ ��ü ����ϱ�

//#include <stdio.h>
//int main(void)
//{
//	int dan = 2;
//	int i = 1;
//	while (dan < 10)
//	{
//		i = 1;
//		while (i < 10)
//		{
//			printf("%d X %d = %d\n", dan, i, dan * i);
//			i++;
//		}
//		dan++;
//		printf("\n");
//	}
//	return 0;
//}

// for��
//#include <stdio.h>
//int main(void)
//{
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("i is %d now\n",i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	for (; num != -1;)
//	{
//		printf("���ڸ� �Է��ϼ��� (-1 �Է� �� ����): ");
//		scanf("%d", &num);
//	}
//	return 0;
//}

// ex) ������(2��)

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//
//	for (i = 1; i < 10; i++)
//	{
//		printf("2 X %d = %d\n", i, 2 * i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int dan;
//	printf("�������� �ܿ���! �� ��? ");
//	scanf("%d", &dan);
//
//	int i = 1;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d X %d = %d\n", dan, i, dan * i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int dan, i;
//	for (dan = 2; dan < 10; dan++)
//	{
//		for (i = 1; i < 10; i++)
//		{
//			printf("%d ", dan * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//for ����1) 1����	10������ ���� ���ʴ�� ����غ���(���η�)

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//for ����2) 1���� 10������ �� �� ¦���� ����ϱ�(���η�)

//#include <stdio.h>
//
//int main(void)
//{
//	int i ;
//	for (i = 2; i <= 10; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//for ����3) 1���� 10������ �հ踦 ���غ���
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sum=0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i;
//	}
//	printf("1���� 10������ �հ� = %d", sum);
//	return 0;
//}

//for ����3) ���� 2���� �Է¹޾Ƽ� ó�������� ���������� �հ豸�ϱ�

//#include <stdio.h>
//
//int main(void)
//{
//	
//	int i,s, f;
//	int sum = 0;
//	printf("ó�� ���� �Է��ϼ���: ");
//	scanf("%d", &s);
//
//	printf("�� ���� �Է��ϼ���: ");
//	scanf("%d", &f);
//
//	for (i = s;i <= f;i++)
//	{
//		sum += i;
//	}
//	printf("%d�������� %d������ ������ ��: %d", s, f, sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	
//	while (1)
//	{
//		printf("-1 �Է� �� ����: ");
//		scanf("%d", &num);
//		if (num == -1)
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	for (num = 1; num <= 5; num++)
//	{
//		if (num == 3)
//			continue; //num 3�� �Ǹ� �ݺ����� ó������ ���ư���.
//		printf("%d\n", num);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 1; i <= 100;  i++)
//	{
//		if (i % 6 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int i = 1;
	int num, sum = 0;
	printf("������ ���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);

	while (i<=num)
	{
		sum += i;
		i++;
	}
	printf("1���� %d������ �հ�: %d", num, sum);
}