#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int  HowManySeven(int number)
//{
//	int i;
//	int howmany = 0;
//	for (i = number; i < number + 200; i++)
//	{
//		if (i % 7 == 0) //7�� ������
//			howmany++; 
//	}
//	return howmany;
//}
//
//int main(void)
//{
//	int n, result;
//	printf("������ �Է��ϼ���: ");
//	scanf("%d", &n);
//	result = HowManySeven(n);
//	printf("%d�� %d ������ 7�� ����� %d���Դϴ�.", n, n + 200, result);
//
//	return 0;
//}

//#include <stdio.h>
//
//void convertCentiToMeter(int height)
//{
//	double convertResult;
//	convertResult = (double)height / 100;
//	printf("���: %.2lf m\n", convertResult);
//}
//
//int main(void)
//{
//	int height;
//	printf("Ű�� cm������ �Է��ϼ���: ");
//	scanf("%d", &height);
//	convertCentiToMeter(height);
//
//	return 0;
//}

//#include <stdio.h>
//
//void swapNumber(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	printf("�Լ� �ȿ��� Ȯ���� ���, num1: %d, num2: %d\n", num1, num2);
//}
//
//int main(void)
//{
//	int number1 = 3, number2 = 99;
//	swapNumber(number1, number2);
//	printf("�Լ� ȣ�� �Ϸ� �� Ȯ���� ���, number1: %d, number2: %d\n", number1, number2);
//	return 0;
//}

//#include <stdio.h>
//
//void swapNumber(int* ptr1, int* ptr2)
//{
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//	printf("�Լ� �ȿ��� Ȯ���� ���, num1: %d, num2: %d\n", *ptr1, *ptr2);
//}
//
//int main(void)
//{
//	int number1 = 33, number2 = 99;
//	swapNumber(&number1, & number2); //�� ������ �ּҸ� ���ڷ� ����
//	printf("�Լ� ȣ�� �Ϸ� �� Ȯ���� ���, number1: %d, number2: %d\n", number1, number2);
//	return 0;
//}



//��� ȣ�� �Լ�
//�Լ��� ��ü ������ �ڱ� �ڽ��� ȣ���ϴ� ��

//#include <stdio.h>
//
//void sayHello()
//{
//	printf("Hello!\n");
//	sayHello(); //�ڱ� �ڽ��� ȣ��(��� ȣ��)
//}
//
//int main(void)
//{
//	sayHello();
//
//	return 0;
//}

//#include <stdio.h>
//
//int sayHello(int count)
//{
//	printf("hello!\n");
//
//	if (count != 3)
//		sayHello(count + 1);
//
//	return 0;
//}
//
//int main(void)
//{
//	sayHello(1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int getDiffByValue(int number1, int number2)
//{
//	int result;
//	result = number1 - number2;
//	//��� ���� ������ ��� -1�� ���Ͽ� ����� �����.
//	result = result >= 0 ? result : result * -1;
//
//}
//
//int callDiffByRef(int* number1, int* number2)
//{
//	if (*number1 < *number2)
//	{
//		int temp = *number1;
//		*number1 = *number2;
//		*number2 = temp;
//	}
//}
//
//int main(void)
//{
//	int number1 = 3, number2 = 5;
//	//�� ���� ���� ���ϴ� �Լ� ȣ��
//	printf("�� ���� ����: %d\n", getDiffByValue(number1, number2));
//
//	//�� ū ���� number1�� �����ϴ� �Լ� ȣ��
//	callDiffByRef(&number1, &number2);
//	printf("number1: %d, number2: %d\n", number1, number2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int recursiveSum(int n)
//{
//	if (n == 0)
//		return 0;
//	return n + recursiveSum(n - 1); //��� �Լ� ȣ��
//}
//int main(void)
//{
//	int n;
//	printf("n�� �Է��ϼ���: ");
//	scanf("%d", &n);
//	int result = recursiveSum(n);
//	printf("1���� n������ ��: %d\n", result);
//
//	return 0;
//}

//����(Random Number)

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int ranNum = rand(); //������ �߻����� ��ȯ
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", ranNum % 10);
//		ranNum = rand();
//	}
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	srand((unsigned int)time(NULL)); //�õ�(seed)�� ����
//	int ranNum = rand() % 10 + 1; //1~10���� ������ ������Ű�� ����
//	int guess;
//
//	while (1)
//	{
//		printf("������ ���纸����(1~10����): ");
//		scanf("%d", &guess);
//
//		if (guess == ranNum)
//		{
//			printf("�����Դϴ�! ���α׷��� �����մϴ�.\n");
//			break;
//		}
//		else
//		{
//			printf("Ʋ�Ƚ��ϴ�! ��õ�!!!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	srand((unsigned int)time(NULL)); //�õ尪 ����
//	int computer = rand() % 3 + 1; //1~3�� ��
//	int me;
//
//	printf("���� 1, ���� 2, �� 3\n ����� ������: ");
//	scanf("%d", &me);
//
//	if (me == 1)
//	{
//		printf("����� ����, ");
//		printf(computer == 1 ? "��ǻ�� ������ ����, �����ϴ�!" :
//			computer == 2 ? "��ǻ�� ������ ����, �����ϴ�!" :
//			"��ǻ�� ������ ��, �̰���ϴ�!");
//	}
//	else if (me == 2)
//	{
//		printf("����� ����, ");
//		printf(computer == 1 ? "��ǻ�� ������ ����, �̰���ϴ�!" :
//			computer == 2 ? "��ǻ�� ������ ����, �����ϴ�!" :
//			"��ǻ�� ������ ��, ������ϴ�!");
//	}
//	else if (me == 3)
//	{
//		printf("����� ��, ");
//		printf(computer == 1 ? "��ǻ�� ������ ����, �����ϴ�!" :
//			computer == 2 ? "��ǻ�� ������ ����, �̰���ϴ�!" :
//			"��ǻ�� ������ ��, �����ϴ�!");
//	}
//	printf("\n\n");
//}
//
//int main(void)
//{
//	game();
//	game();
//	return 0;
//}



//ex) �������� ũ��
//#include <stdio.h>
//
//int main(void)
//{
//	int* ptr1 = NULL;
//	short* ptr2 = NULL;
//	char* ptr3 = NULL;
//	double* ptr4 = NULL;
//
//	printf("int�� ������ ũ��: %d\n", sizeof(ptr1));
//	printf("short�� ������ ũ��: %d\n", sizeof(ptr2));
//	printf("char�� ������ ũ��: %d\n", sizeof(ptr3));
//	printf("double�� ������ ũ��: %d\n", sizeof(ptr4));
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 3;
//	int* ptr1 = &num;
//	int** dptr = &ptr1;
//	int* ptr2;
//
//	printf("%u %u\n", ptr1, *dptr);
//	printf("%d %d\n", num, **dptr);
//	ptr2 = *dptr;
//	*ptr2 = 9;
//	printf("%d %d\n", num, **dptr);
//
//	return 0;
//}

//ex) ���� ������ ����
#include <stdio.h>

int main(void)
{
	int i = 100; //���� ���� ����
	int* p = &i; //������ p�� i�� ����Ų��.
	int** q = &p; //���� ������ q�� p�� ����Ų��.

	printf("i: %d\n", i);

	*p = 200; //p�� ���Ͽ� i�� 200�� ����
	printf("i: %d\n", i);

	**q = 300; //q�� ���Ͽ� i�� 300�� ����
	printf("i: %d\n", i);

	return 0;

}