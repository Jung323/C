#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//
//	printf("NUM1: ");
//	scanf("%d", &num1);
//	printf("NUM2: ");
//	scanf("%d", &num2);
//
//	printf("%d && %d = %d\n", num1, num2, num1 && num2); // and
//	printf("%d || %d = %d\n", num1, num2, num1 || num2); //or
//	printf("%d & %d = %d\n", num1, num2, num1 & num2); //��Ʈ������
//	printf("%d | %d = %d\n", num1, num2, num1 | num2); //��Ʈ������
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int peach;
//	printf("�������� ������: ");
//	scanf("%d", &peach);
//	int bucket = peach % 8 == 0 ? peach / 8 : peach / 8 + 1;
//	printf("�ʿ��� �ٱ��� ���� %d�Դϴ�.",bucket);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	float num;
//	printf("NUM: ");
//	scanf("%f", &num);
//	int numi = (int)num;
//	int right1= numi % 10;
//	printf("%d",right1);
//
//	return 0;
//
//}


//if ���ǽ�
// 
//#include <stdio.h>
//
//int main(void)
//{
//	int num = 3;
//
//	if (num < 3)
//		printf("num is smaller than 3!");
//
//	if (num == 3)
//		printf("num is 3!");
//
//	if (num > 3)
//		printf("num is bigger than 3!");
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main(void)
//{
//	char alpha = 'A';
//
//	if (alpha == 'B')
//		printf("alpha is B."); // ���϶� ����
//	else
//		printf("alpha is not B."); // �����϶� ����
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char alpha = 'C';
//
//	if (alpha == 'A')
//	{
//		printf("alpha is A\n");
//		printf("I like apple");
//	}
//	else if (alpha == 'B')
//	{
//		printf("alpha is B.\n");
//		printf("I like banana");
//	}
//	else if (alpha == 'C')
//	{
//		printf("alpha is C.\n");
//		printf("I like carrot");
//	}
//	else
//	{
//		printf("I hate fruit & vegetable.");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("input your number: ");
//	scanf("%d", &num);
//
//	if (num == 2)
//		printf("your number is 2.");
//
//	else if (num == 4)
//		printf("your number is 4.");
//
//	else if (num == 8)
//		printf("your number is 8");
//
//	return 0;
//}

//��ø if��

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 5, num2 = 8;
//
//	if (num2 > 5)
//	{
//		if (num1 == 5) // ù��° if ������ ���� ��� ����
//			printf("The first if state!");
//	}
//
//	if (num2 < 5)
//	{
//		if (num1 == 5)
//			printf("The second if state!");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 3;
//
//	if (num == 2)
//	{
//		printf("state 1\n");
//	}
//	else if (num > 2 && num < 4)
//	{
//		printf("state 2\n");
//	}
//	else if (num == 3)
//	{
//		printf("state 3\n");
//	}
//	else
//	{
//		printf("state 4\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("������ �Է��ϼ���: ");
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//		printf("�Է��� ������ ¦���Դϴ�.");
//	else
//		printf("�Է��� ������ Ȧ���Դϴ�.");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("������ �Է��ϼ���: ");
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//	{
//		if (num % 3 == 0)
//			printf("¦���̸鼭 3�� ����Դϴ�.");
//		else
//			printf("¦���Դϴ�.");
//	}
//	else
//	{
//		if (num % 5 == 0)
//			printf("Ȧ���̸鼭 5�� ����Դϴ�.");
//		else
//			printf("Ȧ���Դϴ�.");
//	}
//	return 0;
//}

//switch��

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("input some positive number: ");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("num is 1\n");
//		break;
//	case 2:
//		printf("num is 2\n");
//		break;
//	case 3:
//		printf("num is 3\n");
//		break;
//	default:
//		printf("maybe bigger than 3\n");
//		break;
//	}
//	printf("switch state end.\n");
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("input some positive number: ");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//	case 3:
//	case 5:
//		printf("odd\n"); // 1,3,5
//		break;
//	case 2:
//	case 4:
//	case 6:
//		printf("even\n"); // 2,4,6
//		break;
//	default:
//		printf("maybe bigget than 6\n");
//		break;
//	}
//	printf("switch state end.\n");
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//	printf("���̸� �Է��ϼ���: ");
//	scanf("%d", &age);
//
//	if (age < 19)
//		printf("�̼������Դϴ�.");
//	else if (age == 19)
//		printf("19���Դϴ�.");
//	else
//		printf("�����Դϴ�.");
//	
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	printf("�Է°�: ");
//	scanf("%d %d", &num1, &num2);
//	
//	if (num1 > num2)
//		printf("��°�: %d %d", num1, num2);
//	else
//		printf("��°�: %d %d", num2, num1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int kor, eng;
//	printf("���� ������ �Է��ϼ���: ");
//	scanf("%d", &kor);
//	printf("���� ������ �Է��ϼ���: ");
//	scanf("%d", &eng);
//
//	int score = kor + eng;
//	if (score >= 120)
//		printf("�հ�!");
//	else
//		printf("���հ�!");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//
//	while (num < 3) // while (���ǽ�)
//	{
//		printf("num is %d now\n", num);
//		num++; // ������ 
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	while (1)
//	{
//		printf("���� �ݺ� ��... ���ڸ� �Է��ϼ���: ");
//		scanf("%d", &num);
//		printf("%d��(��) �Է��ϼ̳׿�.\n", num);
//	}
//	return 0;
//}

