#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	char googoo[4][9];
//	int i, j;
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 9; j++)
//		{
//			googoo[i][j] = (i + 2) * (j + 1);
//			printf("%-4d ", googoo[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];
//	int i, max, min, total = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("NUM%d: ", i + 1);
//		scanf("%d", &arr[i]);
//
//		if (i == 0)
//		{
//			max = arr[i];
//			min = arr[i];
//			//0��° ���� �ִ�, �ּڰ����� ����
//		}
//		else
//		{
//			if (arr[i] > max) max = arr[i];
//			if (arr[i] < min) min = arr[i];
//			//���� �� �� �ִ�, �ּڰ��� �ٽ� ����
//		}
//		total += arr[i]; //�հ� ����
//	}
//	printf("�ִ�: %d\n�ּڰ�: %d\n���հ�: %d\n", max, min, total);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[8];
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("NUM%d: ",i+1);
//		scanf("%d", &arr[i]);
//	}
//	printf("Ȧ��: ");
//	for (i = 0; i < 8; i++)
//	{
//		if (arr[i] % 2 == 1)
//			printf("%-3d", arr[i]);
//	}
//	printf("\n");
//	printf("¦��: ");
//	for (i = 0; i < 8; i++)
//	{
//		if (arr[i] % 2 == 0)
//			printf("%-3d", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char word[30];
//	int length=0;
//	int i;
//	int isPalindroms; //1�̸� ȸ�� ,0�̸� ȸ���� �ƴ�
//	
//	printf("���ڿ� �Է�: ");
//	scanf("%s", word);
//
//	while (word[length] != '\0')
//		length++;
//
//	//���ڿ� ������ ���ݸ�ŭ �ݺ� ���� ����
//	for (i = 0; i <= length / 2; i++)
//	{
//		if (word[i] != word[length - i - 1])
//		{
//			isPalindroms = 0;
//			break;
//		}
//		isPalindroms = 1;
//	}
//	printf(isPalindroms ? "�����մϴ�.\n" : "�������� �ʽ��ϴ�.\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char good[] = "Good!";
//	char* bad = "Bad!";
//	printf("%s %s \n", good, bad);
//
//	//�迭 ����� ���ڿ� ����
//	good[0] = 'H';
//
//	//������ ����� ���ڿ� ����
//	bad = "New Bad!";
//
//	printf("%s %s \n", good, bad);
//
//	return 0;
//}

//���� ���� ����� �Լ�
//getchar �Լ�: Ű����κ��� �ϳ��� ���ڸ� �Է¹޾� �Է� �����͸� ��ȯ���ִ� ǥ�� �Է� �Լ�
//putchar �Լ�: ����ڷκ��� ������ �Ǵ� ������ �����͸� ���޹޾� ���޵� ���� ������ ����ϴ� ǥ�� ��� �Լ�

//#include <stdio.h>
//int main(void)
//{
//	int ch1, ch2;
//
//	ch1 = getchar(); //�� ���ھ� �Է�
//	ch2 = getchar();
//
//	putchar(ch1);//�� ���ھ� ���
//	putchar(ch2);
//
//	return 0;
//}

//EOF(End Of File) : ���ڸ� �Է��� �� �Է��� ����Ǿ����� ��Ÿ��

//#include <stdio.h>
//int main(void)
//{
//	int ch;
//	while (1) //���� �ݺ�
//	{
//		ch = getchar();
//
//		//�Է��� ���ڰ� EOF��� �Է� ���� (ctrl+z �Է� �� ����)
//		if (ch == EOF)
//			break;
//		putchar(ch);
//	}
//	return 0;
//}


//���ڿ� ���� ����� �Լ�
//#include <stdio.h>
//int main(void)
//{
//	char ch[30];
//	gets(ch); //scanf�� �޸� ���鵵 ���ڷ� �ν�
//	puts(ch); //puts�Լ��� Enter�� ������ �ִ�. �ڵ����� �� �ٲ�
//	printf("�� ���ڿ��� ���� �ٿ��� ��µ˴ϴ�.\n");
//
//	return 0;
//}


//���ڿ� ó�� �Լ�
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[50] = "apple is good";
//	char str2[50] = "berry is good";
//	char str3[50];
//	// �� ���ڿ��� ���� ���
//	printf("str1�� ����: %d, str2�� ����: %d\n", strlen(str1), strlen(str2));
//
//	// str1�� ���� ��ü�� str3�� ����
//	strcpy(str3, str1);
//
//	// str1�� ���� �� �ټ� ���ڸ� str2�� ����
//	strncpy(str2, str1, 5);
//
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[50] = "Michael ";
//	char str2[50] = "Michael ";
//
//	//str1�� ���ڿ� �̾���̱�
//	strcat(str1, "Bolton");
//	printf("%s\n", str1);
//
//	//str2�� 7���� ���� ���̱�
//	strncat(str2, "Jackson Five", 7);
//	printf("%s\n", str2);
//
//	//str1�� str2�� ��
//	printf("�� ���: %d\n", strcmp(str1, str2));
//
//	//str1�� str2�� ���� 7���� ���ڸ� ��
//	printf("�� ���: %d\n", strncmp(str1, str2, 7));
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char name1[30], name2[30];
//
//	gets(name1); //��ĭ(����)�� �����ؼ� ���ڿ��� �Է¹���
//	gets(name2);
//
//	if (strcmp(name1, name2) == 0)
//		printf("�����ϴ�.");
//	else
//		printf("���� �ʽ��ϴ�.");
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//
//int main(void)
//{
//	char str1[30], str2[30];
//	gets(str1);
//	gets(str2);
//
//	if (strlen(str1) > strlen(str2))
//		printf("%s\n%s", str1,str2);
//	else
//		printf("%s\n%s", str2, str1);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char value[50];
//	int i;
//	int total = 0;
//	printf("���ڿ� �Է�: ");
//	gets(value);
//
//	for (i = 0; i < strlen(value); i++)
//	{
//		if (value[i] >= 48 && value[i] <= 57)
//			total += value[i] - 48;
//	}
//
//	printf("������ ����: %d\n", total);
//
//	return 0;
//
//}


#include <stdio.h>

//����� ���� �Լ� ����
int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int result;

	result = add(3, 5); //����� ���� �Լ� ȣ��
	printf("�Լ��� ��ȯ�� ��: %d\n", result);

	return 0;

}