#define _CRT_SECURE_NO_WARNINGS

//�Է°��� ��ȯ���� ��� �ִ� ���
//�Է°��� �����ϴ� ���
//��ȯ���� �����ϴ� ���
//�Է°��� ��ȯ���� ��� ���� ���

//ex)��ȯ�� ������ ���� �Լ� ��
//#include <stdio.h>
//
//void func1() //void�� �Լ��̹Ƿ� ��ȯ��(return)�� ����. 
//{
//	printf("void�� �Լ��� �����ٰ� ����.\n");
//}
//
//int func2() //int�� �Լ��̹Ƿ� ��ȯ��(return)�� �ִ�
//{
//	return 100;
//}
//int main(void)
//{
//	int a;
//	func1(); //void�� �Լ��� ȣ���Ѵ�
//	a = func2(); //int�� �Լ��� ȣ���Ѵ�
//	printf("int�� �Լ����� ������ ��: %d\n", a);
//
//	return 0;
//}

//ex) �Ű����� ���� ���1: ������ ����
//#include <stdio.h>
//
//void func1(int a)
//{
//	a = a + 1; //a++
//	printf("���޹��� a: %d\n", a);
//}
//
//int main(void)
//{
//	int a = 10;
//	func1(a); //a���� �Ű������� �Ѱ� �Լ� ȣ���Ѵ�
//	printf("func1() ���� ���� a: %d\n", a); //�Լ� ȣ�� �� a�� ���
//
//	return 0;
//}

//ex) �Ű����� ���� ���2: �ּҷ� ����
//#include <stdio.h>
//
//void func1(int* a) //�Ű������� �ּڰ�(������)�� �޴´�
//{
//	*a = *a + 1; //a�� ����Ű�� ���� ������+1�� �����Ѵ�
//	printf("���޹��� a: %d\n", *a); //a�� ����Ű�� ���� �������� ���
//}
//
//int main(void)
//{
//	int a = 10;
//	func1(&a); //�Լ��� ȣ���� �� a�� �ּҸ� �����Ѵ�
//	printf("func1() ���� ���� a: %d\n", a); //�Լ� ȣ�� �� a�� ���
//
//	return 0;
//}


// main �Լ��� ���ʿ� ���� ���� �Լ� ���� ���� ��
//#include <stdio.h>
//
//int add(int a, int b); //add �Լ��� ����(�����)
//
//int main(void)
//{
//	int result;
//
//	result = add(3, 5); //add  �Լ��� ȣ��
//	printf("�Լ��� ��ȯ�� ��: %d\n", result);
//
//	return 0;
//}
//
//int add(int a, int b) //add �Լ��� ���(���Ǻ�)
//{
//	return a + b;
//}


//ex) �Ű�����(�Է°�)�� ��ȯ��(��°�)�� ���� ����� ���� �Լ�

//#include <stdio.h>
//
//void insa(); //�Լ� ����(�����)
//
//int main(void)
//{
//	printf("����� ���� �Լ��� ȣ���մϴ�.\n");
//	insa(); //����� �Լ� ȣ��
//	
//	return 0;
//}
//
//void insa()
//{
//	printf("\n[insa() �Լ� ����]\n");
//	printf("���� �Ϸ絵 �ູ�ϼ���!\n");
//}


//ex) �Ű�����(�Է°�)�� �ִ� �Լ�
//#include <stdio.h>
//
//void exchange(float a); //�Լ� ����(�����)
//
//int main(void)
//{
//	float input;
//
//	printf("��ġ(inch)�� ��Ƽ����(cm)�� ȯ��\n");
//	printf("��ġ �Է�: ");
//	scanf("%f", &input);
//
//	exchange(input); //�Լ� ȣ��
//
//	return 0;
//}
//
//void exchange(float a)
//{
//	float swap;
//	swap = a * 2.5399;
//	printf("\n[exchange() �Լ� ����]\n");
//	printf("���� ȯ��: %.2f, inch: %.2fcm", a, swap);
//}


//ex) ��ȯ��(���ϰ�, �����)�� �ִ� �Լ�
//#include <stdio.h>
//
//char alpha(); //�Լ� ����(�����)
//
//int main(void)
//{
//	char show;
//	printf("����� �Լ����� �Է��� ���ĺ� ���� \n");
//
//	show = alpha(); //�Լ� ȣ��
//	printf("\n[main() �Լ� ����]\n");
//	printf("���޹��� ���ĺ�: %c\n", show);
//	printf("�ƽ�Ű �ڵ尪: %d\n", show);
//
//	return 0;
//}
//
//char alpha() //����� �Լ� ����
//{
//	char ch;
//	printf("\n[alpha() �Լ� ����]\n");
//	printf("���ĺ� �Է�: ");
//	scanf("%c", & ch);
//
//	return ch;
//}

//ex) �Ű������� ��ȯ���� ��� �ִ� �Լ�
//#include <stdio.h>
//
//int sum(int su); //�Լ� ����(�����)
//
//int main(void)
//{
//	int input, result;
//	printf("1���� �Է¹޴� ������ �����հ� ����\n");
//	printf("\n[main() �Լ� ����]\n");
//	printf("������ �����հ踦 ���ұ��: ");
//	scanf("%d", &input);
//
//	result = sum(input); //�Լ� ȣ��
//
//	printf("\n[main() �Լ� ����]\n");
//	printf("1���� %d���� �����հ�: %d\n", input, result);
//
//	return 0;
//}
//
//int sum(int su) //�Լ� ����
//{
//	int cnt, hap = 0;
//	printf("\n[sum() �Լ� ����]\n");
//	printf("1���� %d���� �����հ� �����Ͽ� ��ȯ \n", su);
//
//	for (cnt = 1; cnt <= su; cnt++)
//		hap += cnt;
//
//	return hap;
//}


//#include <stdio.h>
//
//int getBigger(int n1, int n2) //�Լ� ���ǿ� ����
//{
//	if (n1 > n2)
//		return n1;
//	else if (n1 < n2)
//		return n2;
//	else
//		return 0;
//}
//
//int main(void)
//{
//	int result; //��ȯ��(���)�� �����ϴ� ����
//
//	result = getBigger(3, 5); //�Լ� ȣ��
//	printf("ù��° ���: %d\n", result);
//	result = getBigger(8, 2); //�Լ� ȣ��
//	printf("�ι�° ���: %d\n", result);
//	result = getBigger(4, 4); //�Լ� ȣ��
//	printf("����° ���: %d\n", result);
//
//	return 0;
//}

//#include <stdio.h>
//
//void guide()
//{
//	printf("inputNumber �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
//	printf("���� printNumber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�. \n");
//}
//
//void printNumber(int num)
//{
//	printf("����� �Է��� ������ %d�Դϴ�. \n", num);
//}
//
//int inputNumber()
//{
//	int num;
//	printf("������ �Է����ּ���: ");
//	scanf("%d", &num);
//
//	return num;
//}
//
//int main(void)
//{
//	guide(); //�Լ� ȣ��
//	int num = inputNumber(); //�Լ� ȣ��: ��ȯ�� ����
//	printNumber(num); //�Լ� ȣ��
//	num = inputNumber(); //�Լ� ȣ��
//	printNumber(num); //�Լ� ȣ��
//
//	return 0;
//}



//���� ����: �߰�ȣ ���� ����� ��� ����
//�Լ��� �Ű������� �������� �� �ϳ�

//#include <stdio.h>
//
//int localFunc(int num)
//{
//	int result = 0; //���� ����
//	return result + num;
//}
//
//int main(void)
//{
//	int num = 5;//���� ����
//	int result = localFunc(num); //�Լ� ȣ��
//
//	printf("���:%d\n", result);
//
//	return 0;
//}

//#include <stdio.h>
//
//int number = 0; //���� ����
//
//void printNumber(void)
//{
//	printf("���� ���� number�� %d�� �����ϰ� �ִ�.\n", number);
//	//�Լ� �ȿ��� ���� ������ ������ ���������� ������ ������ �Լ� �ۿ��� ���������� ����
//}
//
//int main(void)
//{
//	int number = 3; //���� ����
//	printf("���� ���� number�� %d�� �����ϰ� �ִ�.\n", number);
//	printNumber();
//
//	return 0;
//}
//

//ex) ���� ����
//#include <stdio.h>
//
//void increaseNumber()
//{
//	int number = 0; //���� ����
//	number++; 
//	printf("number: %d\n", number);
//}
//
//int main(void)
//{
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//
//	return 0;
//}



//static ����: ���ʷ� �޸𸮸� �Ҵ���� �� ���α׷��� ������ ������ �Ҹ���� �ʰ� ������.
//��������: �ش� ���� �������� ��ȿ�� ������ �Լ��� ȣ��� ���� ������ �Ҵ�޾Ҵٰ� �Լ��� ���๮�� ����Ǹ� �Ҹ�


//#include <stdio.h>
//
//void increaseNumber()
//{
//	static int number = 0; //static ��������
//	number++;
//	printf("number: %d\n", number);
//}
//
//int main(void)
//{
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//
//	return 0;
//} 

//#include <stdio.h>
//
//void calc(int a, int b)
//{	
//	int plus = a + b;
//	int minus = a - b;
//	int multiplication = a * b;
//	int division = a / b;
//	printf("%d + %d = %d\n", a, b, plus);
//	printf("%d - %d = %d\n", a, b, minus);
//	printf("%d * %d = %d\n", a, b, multiplication);
//	printf("%d / %d = %d\n", a, b, division);
//
//}
//
//int main(void)
//{
//	int a, b;
//	printf("ù��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &a);
//
//	printf("�ι�° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &b);
//
//	calc(a, b);
//
//	return 0;
//}

//#include <stdio.h>
//int totalbetween(int a, int b)
//{
//	int i;
//	int total = 0;
//
//	for (i = a+1; i < b; i++)
//		total += i;
//	return total;
//}
//
//int main(void)
//{
//	int a, b;
//	printf("ù��° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &a);
//	
//	printf("�ι�° ���ڸ� �Է��ϼ���: ");
//	scanf("%d", &b);
//	int result = totalbetween(a, b);
//	printf("%d�� %d ������ ������ ������: %d",a,b,result);
//
//	return 0;
//}

#include <stdio.h>

void readArray(int* arr,int length)
{
	int i;
	printf("�迭�� ��� �о��: [");

	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
		if (i + 1 < length)
			printf(", ");
		else
			printf("");
	}
	printf("]\n");
}

int main(void)
{
	int arr[3] = { 3,6,9 };
	readArray(arr, 3); //�迭�� �̸� arr(�ּ�)�� �����ͺ����� ����

	return 0;
}