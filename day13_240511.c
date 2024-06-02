#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int swapNumbers(int* num1, int* num2, int* num3)
//{
//	int temp = *num3;
//	*num3 = *num2;
//	*num2 = *num1;
//	*num1 = temp;
//}
//
//int main(void)
//{
//	int num1 = 5, num2 = 8, num3 = 10;
//
//	printf("�Լ� ȣ�� �� num1 num2 num3: %d %d %d\n", num1, num2, num3);
//	swapNumbers(&num1, &num2, &num3);
//	printf("�Լ� ȣ�� �� num1 num2 num3: %d %d %d\n", num1, num2, num3);
//
//	return 0;
//}

//ex) ���������Ͱ� ���� ���Ǵ� ��Ȳ
//#include <stdio.h>
//
//void set_pointer(char** q); //�Լ� ���� ����
//
//int main(void)
//{
//	char* p;
//	set_pointer(&p); //�Լ� ȣ��(������ p�� �ּҸ� ����)
//	printf("������ ��ǥ: %s\n", p);
//
//	return 0;
//}
//
//void set_pointer(char** q)
//{
//	//�����͸� �Լ��ȿ��� �����Ϸ��� �Ű������� ���������ͷ� �����ؾ��Ѵ�.
//	*q = "C��� 1�ð� �����ϱ�!";
//}


//ex) �������� ���� �ٲٴ� �Լ��� �Ű�����
//#include <stdio.h>
//
//void swap_ptr(char** ppa, char** ppb); //�Լ� ���� ����
//
//int main(void)
//{
//	char* pa = "success";
//	char* pb = "failure";
//	
//	printf("pa: %s, pb: %s\n", pa, pb); //�ٲٱ� ���� ���ڿ� ���
//	swap_ptr(&pa, &pb); //�Լ� ȣ��
//
//	printf("pa: %s, pb: %s\n", pa, pb); //�ٲ� �Ŀ� ���ڿ� ���
//
//	return 0;
//}
//
//void swap_ptr(char** ppa, char** ppb)
//{
//	char* pt; //��ȯ�� ���� �ӽú���
//
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}


//ex) ������ �迭�� �Ű������� �޴� �Լ�
//#include <stdio.h>
//
//void print_ptr(char** pps, int cnt); //�Լ� ���� ����
//
//int main(void)
//{
//	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" }; //�ʱ�ȭ
//
//	print_ptr(ptr_ary, 4); //�迭��� �迭��Ҽ��� �Ѱ��ְ� ȣ��
//
//	return 0;
//}
//
//void print_ptr(char** pps, int cnt)
//{
//	int i;
//	for (i = 0; i < cnt; i++)
//		printf("%s\n", pps[i]); //���������͸� �迭��ó�� ���
//}


//���� �����Ϳ� Call-by-reference

//#include <stdio.h>
//
//void swapNumber(int** dptr1, int** dptr2)
//{
//	int* temp = *dptr1; //�ּҰ��� ��ȯ
//	*dptr1 = *dptr2;
//	*dptr2 = temp;
//}
//
//int main(void)
//{
//	int num1 = 66, num2 = 99;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
//
//	swapNumber(&ptr1, &ptr2); //���� ��ȯ�� �ƴ� �ּڰ��� ��ȯ�� �̷������.
//
//	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
//	printf("num1: %d, num2: %d\n", num1, num2); //�������� �״��
//
//	return 0;
//}


//�Լ� ������
//�Լ��� �ּҸ� ������ �� �ִ� ������ ����

//#include <stdio.h>
//
//int myFunc(int num1, int num2)
//{
//	printf("num1: %d, num2: %d\n", num1, num2);
//}
//
//int main(void)
//{
//	int (*fptr)(int, int); //�Լ������� ����(�Լ��������� �̸��� fptr, �Ű������� �ڷ��� int)
//
//	fptr = myFunc; //�Լ� ������ ����
//	fptr(9, 6); //�Լ��� ȣ���� ����� ���� ���´�.
//
//	return 0;
//}


//void�� ������
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10; //int�� ����(������)
//	double b = 3.5; //double�� ����(�Ǽ���)
//	void* vp; //void�� ������
//
//	vp = &a; //int�� ������ �ּҸ� ����
//	printf("a: %d\n", *(int*)vp); //in������ ����ȯ
//
//	vp = &b; //double�� ������ �ּҸ� ���� 
//	printf("b: %.1lf\n", *(double*)vp); //double* ������ ����ȯ
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	double value = 3.8;
//	double* ptr = &value;
//	double** dptr = &ptr;
//
//	printf("%0.1f \n", **dptr); //���� ���� ���� ��: 3.8
//	printf("%u \n", &dptr); //24
//	printf("%u \n", *&ptr); //
//	printf("%u \n", *dptr); //60
//	printf("%u \n", &*dptr); //92
//	printf("%u \n", &ptr); //92
//
//	printf("%u\n%u\n%u\n", &value, &ptr, &dptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 33, b = 66;
//	int* pa = &a;
//	int* pb = &b;
//	int** ppa = &pa;
//	int** ppb = &pb;
//	int* ptr;
//
//	ptr = *ppb;
//	*ppb = *ppa;
//	*ppa = ptr;
//
//	printf("%d %d %d %d\n", a, b, *pa, *pb);
//	return 0;
//}



//#include <stdio.h>
//
////�Լ��� �����(�Լ� ����)
//
//int FirstFunc(int a, int b);
//double SecondFunc(double d);
//void ThirdFunc(char* c);
//
//
//int main(void)
//{
//	//�Լ� ������ ����
//	int (*first)(int, int);
//	double (*second)(double);
//	void (*third)(char*);
//
//	first = FirstFunc;
//	second = SecondFunc;
//	third = ThirdFunc;
//
//	return 0;
//}
//
////�Լ��� ���Ǻ�(�Լ� ��ü)
//int FirstFunc(int a, int b)
//{
//	return a + b;
//}
//
//double SecondFunc(double d)
//{
//	return 0.0;
//}
//
//void ThirdFunc(char* c)
//{
//	return;
//}



//�ڵ� ���� : ���� ������ ���� ����
//���� : ���� ���� ����
//��Ÿ ������ ���� : ���� ����, ���� ���� ����
//�� : ���� �Ҵ� ����

//�ٸ� ������ ������ ������ �Ҹ� ������ �̹� ������ ������ 
//�������� ������ ������ �Ҹ� ������ ���Ƿ� ���氡��

//malloc�Լ�
//�������� �����ϱ� ���� ����ؾ� �ϴ� �Լ�
//#include <stdlib.h>  ��������� �ʿ�
//malloc�Լ��� �Ҵ�� �޸� ������ �ּڰ��� ��ȯ��. 
//��ȯ�Ǵ� �������� Ÿ���� void�� ������
//malloc�Լ��� ���� �Ҵ�� �޸� ������ ����ڰ� �����ϰų� ���α׷��� ����Ǵ� ��찡 �ƴϸ� �޸𸮿� ��������
//���� ����ڰ� ������ ���Ѵٸ� �� ���� �޸� �ּ��� ������ ����ϴ� free�Լ��� ȣ���ؾ� ��


//ex) �����Ҵ��� ��������� ����ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h> //malloc, free�Լ��� ����ϱ� ���� �������

int main(void)
{
	int* pi; //�����Ҵ��� ������ ������ ������ ����
	double* pd;

	//�޸� �����Ҵ� �� ������ ����(4����Ʈ)
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) //�����Ҵ翡 �����ϸ� NULL������ ��ȯ
	{
		printf("�޸𸮰� �����մϴ�.\n"); //���� ��Ȳ �޽��� ���
		exit(1);
	}
	pd = (double*)malloc(sizeof(double)); //8����Ʈ
	*pi = 10; //�����ͷ� �����Ҵ� ���� ���
	*pd = 3.4;
	
	//�����Ҵ� ������ ����� �� ���
	printf("���������� ���: %d\n", *pi);
	printf("�Ǽ������� ���: %.1lf\n", *pd);


	//�����Ҵ� ���� ��ȯ(�ݳ�, ����)
	free(pi);
	free(pd);

	return 0;
}