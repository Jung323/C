#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	char character;
//	while (1)
//	{
//		printf("���ĺ��� �Է��ϼ���.(�빮�� �Է� �� ����): ");
//		scanf(" %c", &character);
//
//		if (character >= 65 && character <= 90)
//		{`
//			printf("%c �Է��߽��ϴ�. �����մϴ�.\n", character);
//			break; // �빮�ڸ� �Է��ϸ� ����
//		}
//		printf("%c �Է��߽��ϴ�.\n", character);
//
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0 || i%7==0) {
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 5; i > 0;i--)
//	{
//		printf("���� %d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num,i;
//	printf("���ϴ� ���ڸ� �Է��Ͻÿ�: ");
//	scanf("%d", &num);
//
//	for (i = num; i > 0; i--)
//	{
//		printf("���� %d\n", i);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int start, end,temp;
//	int dan, mul;
//	printf("ù��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &start);
//	printf("�ι�° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &end);
//
//	if (start > end)
//	{
//		temp = start;
//		start = end;
//		end = temp;
//	}
//	for (dan = start; dan <= end; dan++) {
//		for (mul = 1; mul <= 9; mul++)
//		{
//			printf("%d X %d = %d\n", dan, mul, dan * mul);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	char sign;
//
//	printf("�ǿ����� 1: ");
//	scanf("%d", &num1);
//	printf("������: ");
//	scanf(" %c", &sign);
//	printf("�ǿ����� 2: ");
//	scanf("%d", &num2);
//
//	switch (sign)
//	{
//	case '+':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 + num2);
//		break;
//	case '-':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 + num2);
//		break;
//	case '*':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 * num2);
//		break;
//	case '/':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 / num2);
//		break;
//	case '%':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 % num2);
//		break;
//	}
//	return 0;
//}


//�迭

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//
//	printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[4]);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int odd[3];
//	int even[5] = { 2,4,6,8,10 };
//
//	odd[0] = 1;
//	odd[1] = 3;
//	odd[2] = 5;
//
//	printf("%d %d %d\n", odd[0], odd[1], odd[2]);
//	
//	//for���� ���� �迭���(��) ���
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", even[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arr[10];
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("���� �Է�: ");
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);	//�� ������� ���� ���� �ݺ������� ���
//	}
//
//	return 0;
//}

//�迭����1) ���̰� 4�� int�� �迭 nums�� �����Ͽ���.
//����� ���ÿ� {!,2,3,4}�� �ʱ�ȭ�� �Ͽ���.
//�ݺ���(for)�� Ȱ���Ͽ� nums�� ���(��)���� ����Ͽ���

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arr[4] = { 1,2,3,4 };
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//�迭����2) ����(int)�� 5���� ��Ҹ� ���� �� �迭 nums�� �����ϰ�,
//�ݺ����� ���� �迭 ��ҿ� ���ʴ�� 1,2,3,4,5�� ���,
//�ݺ����� �̿��ؼ� ��ҵ��� ���ʴ�� ����Ͽ���.
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arr[5];
//
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = i + 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//���ڿ� ǥ��

//#include <stdio.h>
//
//int main(void)
//{
//	char greet[] = "Hello, Guys!";
//	printf("%s\n", greet);
//	
//	//sizeof(�ڷ��� �Ǵ� ����): ũ�⸦ �˷��ִ� ������
//	printf("1���� �迭 greet�� ���̴�: %d\n", sizeof(greet)); 
//���: 13 (���� �� ������ null ���ڰ� ��)
// 
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char mind[30] = "I Love Programming!";
//	printf("%s\n", mind);
//
//	mind[7] = '\0'; // �� ���� ����
//	printf("%s\n", mind);
//
//	mind[1] = '\0';
//	printf("%s\n", mind);
//
//	//�� ó�� ������ �α����� ��µ�.
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[50];
//
//	printf("���ڿ��� �Է��ϼ���: ");
//	scanf("%s", str); // �迭�̸��� &�� ���� ����, �迭 �̸��� �� �ּ��̱� ������ �ּҸ� �ǹ��ϴ� &�� ���� ����
//
//	printf("�Էµ� ���ڿ�: %s\n", str);
//
//	return 0;
//}

//ex) ���� �Է�, 60�� �̸� F������ �л��� ��, �� �� �л����� ���
//#include <stdio.h>
//
//int main(void)
//{
//	int i, F = 0, total = 0, score[10];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d��° �л��� ���� �Է�: ", i + 1);
//		scanf("%d", &score[i]);
//
//		if (score[i] < 60)
//			F++; // 60�� �̸��� �л� ī��Ʈ +1
//		else
//			total += score[i];
//	}
//	printf("���� ���: %.1lf\n", (double)total / (10 - F));
//	printf("F������ �л� ��: %d\n", F);
//
//	return 0;
//}

//�迭����3) int�� ������ ��ҷ� �ϴ� �迭 arr1���� {1,2,3,4}�� ���,
//arr2���� {5,6,7,8}�� ��ƶ�.
//�� �迭�� �� �ڸ��� ���� ���ο� �迭 arr3�� ��Ƽ� �ݺ����� �̿��ؼ� ���

#include <stdio.h>

int main(void)
{
	int arr1[4] = {1,2,3,4};
	int arr2[4] = {5,6,7,8};
	int arr3[4];
	int i;
	for (i = 0; i < 4; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d ", arr3[i]);
	}
}