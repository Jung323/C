#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//
//int main(void)
//{
//	char word[30];
//	int max = 0;
//	int i = 0;
//
//	printf("���ܾ� �Է�: ");
//	scanf("%s",word);
//
//	while (word[i] != '\0') //���ڿ��� ���� �˸��� �ι��ڰ� ������ ������ �ݺ�
//	{
//		if (word[i] > max)
//			max = word[i]; // �ƽ�Ű�ڵ� ���� ū ��Ұ����� �ִ��� �ٲ��.
//		i++;
//	} 
//	printf("�ƽ�Ű�ڵ尡 ���� ū ����: %c\n", max);
//	printf("�ƽ�Ű�ڵ尡 ���� ū ����(������): %d\n", max);
//
//	return 0;
//
//}


//������ ����: �޸� �ּ�(�����Ͱ� ����� ��ġ ����)�� �����ϱ� ���� Ư�� ����

//ex) �ּ� ������ (&)
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 10;
//	char c = 69;
//	double f = 12.3;
//
//	printf("i�� ��: %d\n", i);
//	printf("c�� ��: %c\n", c);
//	printf("f�� ��: %lf\n", f);
//	printf("\n");
//	printf("i�� ��: %u\n", &i);
//	printf("c�� ��: %u\n", &c);
//	printf("f�� ��: %u\n", &f);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 10;
//	double f = 12.3;
//	
//	int* pi; //������ ���� pi����
//	double* pf; //������ ���� pf����
//	 
//	pi = &i; //������ ����  pi�� i�� �ּҸ� ����
//	pf = &f; //������ ���� pf�� f�� �ּҸ� ����
//
//	printf("%u %u\n", pi, &i);
//	printf("%u %u\n", pf, &f);
//	printf("%d %.1lf\n", i, f);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int k = 8;
//	int* p;
//	p = &k;
//
//	printf("k�� �ּ�: %u\n", &k);
//	printf("p�� �ּ�: %u\n", &p);
//	printf("p�� ��: %u\n", p);
//	printf("p�� ����Ű�� ���� ��: %d\n", *p);
//	printf("k�� ��:%d\n", k);
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int i = 3000;
//	int* p;
//	p = &i; //������ ���� p�� i�� �ּҸ� ����
//
//	printf("p: %u\n", p); //������ ���� p�� ��� �� ���
//	printf("&i: %u\n\n", &i); //���� i�� �ּ� ���
//
//	printf("i: %d\n", i); //���� i�� ��� �� ���
//	printf("*p: %d\n", *p); // ������ ���� p�� ����Ű�� �� ���
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int x = 10, y = 20;
//	int* p; //������ ����
//	p = &x; //x�� �ּҸ� ����
//	printf("p: %u\n", p);
//	printf("*p: %d\n\n",*p); //p�� ����Ű�� �� = x
//
//
//	p = &y; //y�� �ּҸ� ����
//	printf("p: %u\n", p);
//	printf("*p: %d\n\n", *p); //p�� ����Ű�� �� = y
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 10;
//	int* p;
//
//	p = &i; //������ ����  p�� i�� �ּҸ� ����
//	printf("i= %d\n", i);
//
//	*p = 20; //p�� ����Ű�� ���� 20���� �ٲ�
//	printf("*p: %d\n", *p);
//	printf("i: %d\n", i); //i�� ���� 20���� �ٲ�
//
//	return 0;
// }

//#include <stdio.h>
//
//int main(void)
//{
//	char cnum = 5;
//	int inum = 999;
//	double dnum = 3.14;
//	
//	char* cptr = &cnum; //���� cnum�� �ּҸ� ����
//	int* iptr = &inum; //���� inum�� �ּҸ� ����
//	double* dptr = &dnum; //���� dnum�� �ּҸ� ����
//
//	printf("%p\n", cptr); //%p�� ���� �ּ� , %u�� �ߴ� ���� 10������ ��ȯ�ؼ� ������ ��
//	printf("%p\n", iptr);
//	printf("%p\n", dptr);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	int* pnum;
//	pnum = &num; //num�� �ּҸ� ����
//
//	*pnum = 20; //pnum�� ����Ű�� ���� 20���� ����
//	printf("num: %d\n", num);
//	printf("pnum:%u\n", pnum);
//
//	(*pnum)++; //pnum�� ����Ű�� ���� 1������Ŵ
//	(*pnum)++; //pnum�� ����Ű�� ���� �� 1������Ŵ
//
//	printf("num: %d\n", num);
//	printf("pnum: %u\n", pnum);
//	printf("*pnum: %d\n", *pnum);
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a); // 20
//	*p = 50;
//	printf("%d\n", a); // 50
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int number = 10;
	int* pnumber = &number;

	printf("number�� ��: %d\n", *pnumber);
	printf("number�� �ּ�: %p\n", pnumber);

	return 0;
}