# define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	int num1;
//	printf("���� �Է��ϼ��� : ");
//	scanf("%d", &num1);
//	printf("�Է� �� : %d", num1);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int id, password;
//	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���.\n");
//	printf("id:____\b\b\b\b"); //\b: Ŀ���� �ڷ� �����̰� �ϴ� ���� ����
//	scanf("%d", &id);
//	printf("password:____\b\b\b\b");
//	scanf("%d", &password);
//	printf("�Էµ� ���̵�� \"%d\"�̰�, �н������ \"%d\"�Դϴ�.\n", id, password);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int num1 = 3, num2 = 4;
//
//	num1 += 3; // num = num1 + 3
//	num2 *= 4; //num2 = num2 * 4
//
//	printf("num1 += 3�� ���: %d\n", num1);
//	printf("num2 *= 4�� ���: %d\n", num2);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 10, b = 11;
//	printf("a == b: %d\n", a == b);
//	printf("a > b: %d\n", a > b);
//	printf("a < b: %d\n", a < b);
//	printf("a >= b: %d\n", a >= b);
//	printf("a <= b: %d\n", a <= b);
//	printf("a != b: %d\n", a != b);
//	// ���̸� 1,�����̸� 0�� ���
//	return 0;
//}

//����(Prefix), ����(Postfix)������
//����: ++num,--num
//����: num++,num--

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 10;
//	
//	printf("a : %d\n", a); //10
//	printf("a : %d\n", ++a); //11, ���� �� ���
//	printf("a : %d\n", a); //11
//
//	printf("b : %d\n", b);//10
//	printf("b : %d\n", b++);//10
//	printf("b : %d\n", b);//11
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 3, num2 = 5;
//
//	int result = num1++ + num2 * 3; // ����-����-����-����(����)
//	printf("���� ���: %d\n", result);
//	printf("num1 : %d\n", num1);
//	printf("num2 : %d\n", num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	num++;
//
//	printf("%d\n",num); //11
//	printf("%d\n", num+3);//14
//	printf("%d\n", ++num); //12
//	printf("%d\n", num++); //12
//	printf("%d\n",num); //13
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 27;
//
//	printf("%d\n", num1 >= 5);
//	printf("%d\n", num1 != 5); 
//
//	printf("%d\n", num1 >= 27); //1
//	printf("%d\n", num1 == 27);
//
//	printf("%d\n", num1 < 30);
//	printf("%d\n", num1 <= 27);
// 
// return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int korean = 86;
//	int english = 75;
//	int math = 88;
//	int society = 60;
//	int science = 96;
//
//	int total = korean + english + math+ society + science;
//	double avg = (double) total / 5;
//
//	printf("��������� %.2lf�Դϴ�.", avg);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 5;
//	printf("num�� ��: %d\n", ++num);
//	printf("num�� ��: %d\n", num++);
//	printf("num�� ��: %d\n", ++num);
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 20, num2 = 10;
//	int result;
//
//	result = 1 && 1; // ��, 0�� ������ ������ ���� ��� ��
//	printf("result1 : %d\n", result);
//
//	result = num1 == 20 && num2 == 10;
//	printf("result2 : %d\n", result);
//
//	result = num1 > num2 && num1 == num2;
//	printf("result3 : %d\n", result);
//
//	return 0;
//}

//�������ǽ�
//#include <stdio.h>
//
//int main(void)
//{
//	int num, absolute;
//	printf("���� �Է�: ");
//	scanf("%d", &num);
//
//	absolute = num > 0 ? num : num * -1; // ���� ���� ������
//	printf("���� : %d\n", absolute);
//
//	return 0;
//
//}

//��Ʈ������
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 3; //00000011(2����)
//	int b = 5; //00000101
//
//	//���� �ڸ��� ���� ��
//	printf("3 & 5 = %d\n", a & b); //00000001 (���� ������ 1)
//	printf("3 | 5 = %d\n", a | b); //00000111 (�� �� �ϳ��� 1 �ִ°Ŵ� 1)
//	printf("3 ^ 5 = %d\n", a ^ b); //00000110 ( ���� �ٸ��� 1)
//	printf("~3 = %d\n", ~a); // 11111100 (���� ���� �ݴ�)
//
//	return 0;
//
//}

//����Ʈ ������

//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	a = 1; //00000001
//	b = a << 2;//0000100, �������� �� ĭ �̵�
//	printf("%d << 2 = %d\n", a, b);
//	b = a >> 2;//00000000, ���������� �� ĭ �̵�
//	printf("%d >> 2 = %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//
//	printf("���̸� �Է��ϼ���: ");
//	scanf("%d", &age);
//	int fee = age >= 20 ? 1250 : 800;
//	
//	printf("����� ���̴� %d�̸�, ����� %d���Դϴ�!", age, fee);
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int age, height; // ���̿� Ű
	int canRide;
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);
	printf("Ű�� �Է��ϼ���: ");
	scanf("%d", &height);

	canRide = age >= 12 && height >= 120;
	printf(canRide ? "ž�°���":"ž�ºҰ���");

	return 0;

}