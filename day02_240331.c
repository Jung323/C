//�ڷ��� ��ȯ: Ư�� �ڷ����� �ٸ� �ڷ������� ��ȯ�Ǿ����ų� ������ ��ȯ�Ǵ� ����
//�� ��ȯ ����
//1. �ڵ�����ȯ(�Ͻ���): �����Ϸ��� ���� �ڵ����� ��ȯ,������ ���� ������ ���� ���� ���ԵǴ� ��찡 ����.
//char < short < int < long < float < double �� ������ �ս� �ּ�ȭ
//2. ��������ȯ(�����): �����ڿ� ���� ��õ� ����ȯ

//#include <stdio.h>
//int main(void)
//{
//	double number1 = 10;
//	int number2 = 1.2345;
//	short number3 = 70000;
//
//	printf("%f\n", number1); //�Ǽ� ǥ��
//	printf("%d\n", number2);
//	printf("%d\n", number3);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("%d\n", (short)3.1415);//short������ ���������ȯ
//	printf("%d\n", (int)3.1415);//int������ ���������ȯ
//	printf("%f\n", (double)10);//doublet������ ���������ȯ
//	printf("%f\n", (float)10);//float������ ���������ȯ
//
//	return 0;
//}



// unsigned: ��Ʈ�� �þ ���� ������ �þ����, ��ȣ�� ǥ���Ҽ� ���Ե�
//#include <stdio.h>
//
//int main(void)
//{
//	char cnum = 128; //���:-128�� �ν�, char�� ���� -128~127�� ǥ��
//	unsigned char u_cnum = 128; // ��ȣ���� �ڷ���,��� 128�� ǥ��
//	short snum = 32768; //���: -32768�� �ν�, short�� -32768~32767�� ǥ��
//	unsigned short u_snum = 32768; // ��ȣ���� �ڷ���,��� 32768�� ǥ��
//
//	printf("%d\n", cnum);
//	printf("%d\n", u_cnum);
//	printf("%d\n", snum);
//	printf("%d\n", u_snum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("\"I am a boy.\"\n");
//	printf("I am a \'boy\'.\n");
//	printf("I\tam\ta\tboy.\n");
//	printf("I\bam a boy.\n"); //\b�� Ŀ���� ��ĭ ������ �̵�
//	printf("I am a boy\\\?\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char character = 'X';
//	int inumber = 92;
//	double dnumber = 20.201005;
//	printf("%c\n", character);
//	printf("%d\n", character); // �ƽ�Ű�ڵ�� ��ȯ�ؼ� ���
//	printf("%d\n", inumber);
//	printf("%x\n", inumber); //��ȣ���� 16����
//	printf("%o\n", dnumber); //��ȣ���� 8����
//	printf("%f\n", dnumber);
//	printf("%e\n", dnumber); //�������
//
//	return 0;
//}

//%10d�� ���� ǥ���ϵ� 10ĭ�� Ȯ���ϰ�ʹٴ� �ǹ�, ������ ������(������ ����)
//%-10d�� ������ �ڷ�(���� ����)

//#include <stdio.h>
//
//int main(void)
//{
//	char character = 'H'; // �ѱ��ڴ� ���� ����ǥ�� �����
//	int num = 548;
//	printf("%5c\n", character); // �� 5ĭ, ������ ����
//	printf("%-5c\n", character); // �� 5ĭ, ���� ����
//	printf("%10d\n", num); // �� 10ĭ, ������ ����
//	printf("% -10d\n", num); // �� 10ĭ, ���� ����
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	float fnum = 1.234567;
//	printf("%10f\n", fnum);
//	printf("%-10f\n", fnum);
//	printf("%10.3f\n", fnum); //�Ҽ��� 3°�ڸ� �ݿø����� ǥ��
//	printf("%-10.3f\n", fnum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(50)); //4
//	printf("%d\n", sizeof(float)); //4
//	printf("%d\n", sizeof(3.14)); //8
//}




//scanf �Լ�
// �� ǥ���Է���ġ(ex.Ű����)�κ��� ���� �Է¹޾� ���α׷� ���� ������ �� ����ϴ� �Լ�
// ���̽��� input�Լ��� ������ ���
// scanf�� f�� format�� ��� �� ����(����)���ڸ� ����Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
//���־� ��Ʃ����� �� ���� ���� �Լ��̱� ������ �Է����־�� ��

//#include <stdio.h>
//
//int main(void)
//{
//	char character;
//	int inum;
//	float fnum;
//
//	scanf("%c", &character); //&character: character�� ��ġ�� �ּҿ� ���� �� ������ �Է��� ������ ����
//	scanf("%d", &inum);
//	scanf("%f", &fnum);
//
//	printf("%c %d %f\n", character, inum, fnum);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, num3;
//	float fnum1, fnum2;
//
//	printf("�� ���� ���� �Է�: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	printf("�Էµ� ������: %d %d %d\n", num1, num2, num3);
//	
//	printf("�Ǽ�,����,�Ǽ� ���ʴ�� �Է�: ");
//	scanf("%f %d %f", &fnum1, &num1, &fnum2);
//	printf("�Էµ� ����: %.2f %d %.2f\n", fnum1, num1, fnum2);
//
//	return 0;
//}

//����
//[ȭ�������]
//����� ���̴�?
//���� ���̴�    ���Դϴ�.

//#include <stdio.h>
//
//int main(void)
//{
//	int inum;
//	printf("����� ���̴�? ");
//	scanf("%d", &inum);
//	printf("���� ���̴� %d���Դϴ�.", inum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, num3;
//	printf("�� ���� ���� �Է�: ");
//	scanf("%o %x %d", &num1, &num2, &num3);
//	printf("�Էµ� ������: %d %d %d\n", num1, num2, num3);
//	printf("�Էµ� ������: %o %x %d\n", num1, num2, num3);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	printf(" %10.3f\n", 152.49861);
//	printf("you\tcan\tmake\tint\n");
//	printf("\"Everbody say \'hello\'!\"");
//
//	return 0;
//}

#include <stdio.h>
int main(void) {
	printf("%5s\n", "*");
	printf("%6s\n", "***");
	printf("%7s\n", "*****");
	printf("%8s\n", "*******");

	
	return 0;
}