#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2;
//	int* ptr;
//	ptr = &num1; // num1�� �ּҸ� ����
//
//	(*ptr)++; //ptr�� ����Ű�� ���� 1����
//	num2 = 5;
//	ptr = &num2;
//	*ptr = *ptr + num1 + num2; // 5+11+5
//
//	printf("num1: %d,num2: %d, *ptr:%d\n", num1, num2, *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 100, num2 = 100;
//	int* pnum;
//	
//	pnum = &num1;
//	(*pnum) += 30; 
//
//	pnum = &num2;
//	(*pnum) -= 30;
//
//
//	printf("num1: %d, num2: %d\n", num1, num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int* ptr;
//	int num1 = 5;
//	int num2 = 8;
//
//	ptr = &num1;
//	printf(" %d\n", *ptr);
//
//	ptr = &num2;
//	printf(" %d\n", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int n1 = 100, n2 = 200;
//	int* ptr1 = &n1;
//	int* ptr2 = &n2;
//
//	printf("%d %d\n", *ptr1, *ptr2);
//	int* ptr3 = &n1;
//	ptr1 = &n2;
//	ptr2 = ptr3;
//
//	printf("%d %d\n", *ptr1, *ptr2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char arr[5] = "copy";
//	char* p;
//	p = arr; //�迭�� �̸��� �� �ּ��̱� ������ &�� ������ ����
//
//	printf("p�� ��: %u\n", p);
//	printf("�迭�� �����ּ�: %u\n", arr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int myArr[3] = { 1,2,3 };
//	printf("%d\n", myArr[0]);
//	printf("%d\n", myArr[1]);
//	printf("%d\n", myArr[2]);
//
//	printf("�迭 �� ����� �ּ� Ȯ�� \n");
//	printf("�迭�� �̸�: %u\n", myArr); //�迭�� ���� �ּҰ�(0�� �ε����� �ּҰ��� ����)
//	printf("ù��° ���: %u\n", &myArr[0]); 
//	printf("�ι�° ���: %u\n", &myArr[1]);
//	printf("����° ���: %u\n", &myArr[2]);
//
//	return 0;
//}


//������ ������ ���������� ���
//#include <stdio.h>
//
//int main(void)
//{
//	int a[3] = { 10,20,30 };
//	int* p;
//	p = a;
//
//	printf("�迭 �̸�: %u\n", a);
//	printf("������ �ּ�: %u\n", &p);
//	printf("�������� ��: %u\n", p);
//	printf("*p�� ��:%d\n", *p);
//	p++; //int�� 4����Ʈ�̱� ������ �ּҰ��� 4����
//	printf("�������� ��: %u\n", p);
//	printf("*p�� ��:%d\n", *p);
//
//	return 0;
//}


//������ ������ ���� ���� ����
//#include <stdio.h>
//
//int main(void)
//{
//	int a[3] = { 10,20,30 };
//	int* p;
//	p = a;
//	printf("�迭 �̸�: %u\n", a);
//	printf("a[1]�� �ּ�: %u\n", &a[1]);
//	printf("a+1�� ��: %u\n", a + 1);
//	printf("p+1�� ��: %u\n", p + 1);
//	printf("a[2]�� ��: %d\n", a[2]);
//	printf("*(p+2)�� ��: %d\n", *(p + 2));
//	printf("*p+2�� ��: %d\n", *p + 2);
//
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	short sarr[3] = { 1,2,3 };
//	int iarr[3] = { 10,20,30 };
//
//	//�ε��� ��ȣ�� ���� ����
//	printf("%d %d %d\n", sarr[0], sarr[2], sarr[2]);
//	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);
//
//
//	//������ ������ ���� ����
//	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
//	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));
//
//	//�ּ� Ȯ��
//	printf("%u %u %u\n", &sarr[0], &sarr[1], &sarr[2]);
//	printf("%u %u %u\n", sarr, sarr + 1, sarr + 2);
//	printf("%u %u %u\n", &iarr[0], &iarr[1], &iarr[2]);
//	printf("%u %u %u\n", iarr, iarr + 1, iarr + 2);
//
//	return 0;
//}


//�迭�� �̸��� ������ó�� ����ϱ�
//#include <stdio.h>
//
//int main(void)
//{
//	int a[5] = { 10,20,30,40,50 };
//
//	printf("a: %u\n", a); //�迭�� �̸��� ������ó�� �� �� �ִ�.
//	printf("a+1: %u\n", a + 1); //a[1]�� �ּҿ� ����. &a[1]
//	printf("*a: %d\n", *a); //a[0]�� ����.
//	printf("*(a+1): %u\n", *(a + 1)); //a[1]�� ����.
//
//	return 0;
//}


//�����͸� �迭ó�� ����ϱ�
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[3] = { 10,20,30 };
//	int* ptr = arr;
//	printf("0 ��ġ ��: %d %d\n", *(arr + 0), *(ptr + 0));
//	printf("1 ��ġ ��: %d %d\n", *(arr + 1), *(ptr + 1));
//	printf("2 ��ġ ��: %d %d\n", *(arr + 2), *(ptr + 2));
//	printf("\n");
//	printf("0 ��ġ ��: %d %d\n", arr[0], ptr[0]);
//	printf("1 ��ġ ��: %d %d\n", arr[1], ptr[1]);
//	printf("2 ��ġ ��: %d %d\n", arr[2], ptr[2]);
//
//	return 0;
//}


//����1) int�� ���� num1�� num2�� ����� ���ÿ� ���� 10�� 20���� �ʱ�ȭ�ϰ�
//int�� ������ ���� ptr1�� ptr2�� �����Ͽ� ���� num1�� num2�� ����Ű�� ����.
//�׸��� �� ���¿��� ������ ���� ptr1�� ptr2�� �̿��ؼ� num1�� ���� 10 ����, num2�� ���� 10 ���ҽ�Ű��.
//num1�� num2�� ���� ����غ���, ptr1�� ptr2�� ����Ű�� ���� ����غ���.

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	*ptr1 += 10;
//	*ptr2 -= 10;
//
//	printf("num1: %d, num2: %d\n", num1, num2);
//	printf("*ptr1: %u, *ptr2: %u\n", *ptr1, *ptr2);
//}

//����2) 
//����1�� �̾��� ����
//�� ������ ���� ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ���.
//num1�� num2�� ���� ����غ���, ptr1�� ptr2�� ����Ű�� ���� ����غ���.

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	*ptr1 += 10;
//	*ptr2 -= 10;
//
//	int* ptr3 = ptr1; //&num1
//	ptr1 = ptr2; // &num2
//	ptr2 = ptr3; // &num1
//
//
//	printf("num1: %d, num2: %d\n", num1, num2);
//	printf("*ptr1: %u, *ptr2: %u\n", *ptr1, *ptr2);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a[3] = { 10,20,30 };
//	int* p;
//	p = a;
//	printf("a[0]: %d, a[1]: %d, a[3]: %d\n", a[0], a[1], a[2]);
//	printf("p[0]: %d, p[1]: %d, p[3]: %d\n", p[0], p[1], p[2]);
//
//	p[0] = 60; //�����͸� ��ġ �迭ó�� ���
//	p[1] = 70;
//	p[2] = 80;
//
//
//	printf("a[0]: %d, a[1]: %d, a[3]: %d\n", a[0], a[1], a[2]);
//	printf("p[0]: %d, p[1]: %d, p[3]: %d\n", p[0], p[1], p[2]);
//
//	return 0;
//}


//�����͸� �̿��� �迭�� �� ���
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3] = { 10,20,30 };
//	int* pa = ary;
//	int i;
//
//	printf("�迭�� ��: ");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *pa); //pa�� ����Ű�� �迭���(��) ���
//		pa++;
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		*(ptr + i) += 3; //�迭 ��� ���� 3��ŭ ����
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(ptr + i));
	}

	return 0;
}