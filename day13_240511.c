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
#include <stdio.h>

void print_ptr(char** pps, int cnt); //�Լ� ���� ����

int main(void)
{
	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" }; //�ʱ�ȭ

	print_ptr(ptr_ary, 4); //�迭��� �迭��Ҽ��� �Ѱ��ְ� ȣ��

	return 0;
}

void print_ptr(char** pps, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
		printf("%s\n", pps[i]); //���������͸� �迭��ó�� ���
}