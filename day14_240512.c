#define _CRT_SECURE_NO_WARNINGS


//ex) �����Ҵ翵���� �迭ó�� ���

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* list;
//	list = (int*)malloc(sizeof(int) * 3); //12����Ʈ �����Ҵ�
//	if (list == NULL)
//	{
//		printf("�޸𸮰� �����մϴ�.\n");
//		exit(1);
//	}
//
//	list[0] = 10; //�����Ҵ翵�� ���
//	list[1] = 20;
//	list[2] = 30;
//
//	printf("%d %d %d\n", list[0], list[1], list[2]);
//
//	free(list); //�����Ҵ翵�� �ݳ�(����)
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* iptr = (int*)malloc(sizeof(int) * 5); //int�� 5��(20����Ʈ)
//	double* dptr = (double*)malloc(sizeof(double) * 3); //double�� 3��(24����Ʈ)
//	int i;
//
//	for (i = 0; i < 5; i++)
//		iptr[i] = 10 * (i + 1);
//	for (i = 0; i < 5; i++)
//		printf("%d ", iptr[i]);
//	printf("\n");
//
//	dptr[0] = 3.14;
//	dptr[1] = 4.31;
//	dptr[2] = 1.43;
//	printf("%g %g %g\n", dptr[0], dptr[1], dptr[2]);
//
//	//�����Ҵ翵�� �ݳ�(����)
//	if (iptr != NULL) free(iptr);
//	if (dptr != NULL) free(dptr);
//
//	return 0;
//
//}


//ex)�����Ҵ翵���� �迭ó�� ����Ͽ� ��ձ��ϱ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* pi;//�����Ҵ翵���� ������ ������ ����
//	int i, sum = 0;
//	
//	pi = (int*)malloc(sizeof(int) * 5); //������� 20����Ʈ �Ҵ�
//	if (pi == NULL)
//	{
//		printf("�޸𸮰� �����մϴ�.\n"); //�������� ��� ������ ����
//		exit(1);
//	}
//	printf("�ټ����� ���̸� ���ʴ�� �Է��ϼ���: ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("�ټ����� ��� ����: %.1lf\n", (double)sum / 5);
//	free(pi);
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//char* getString(void)
//{
//	char* str = (char*)malloc(sizeof(char) * 100); //�����Ҵ翵�� 100����Ʈ
//	printf("�����ϴ� �ܾ��? ");
//	gets(str);
//	return str;
//}
//
//int main(void)
//{
//	char* result = getString();//�Լ� ȣ��
//	printf("����� �����ϴ� �ܾ��: %s\n", result);
//
//	if (result != NULL) free(result); //�����Ҵ翵�� �ݳ�(����)
//
//	return 0;
//}




//malloc�Լ��� �Ҵ�� �޸� ������ ������ ������ �ʱ�ȭ���� ����
//calloc�Լ��� �Ҵ�� �޸� ������ ��� ��Ʈ�� 0���� �ʱ�ȭ


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* ptr;
//	int count = 0; //�Է¹��� �������� ����
//	int maxSize = 3; //�Ҵ���� �޸��� ũ��
//	int num;
//	int i;
//
//	ptr = (int*)calloc(maxSize, sizeof(int)); //�����Ҵ� ����(12����Ʈ)
//	while (1)
//	{
//		printf("������ �Է��ϼ��� (-1 �Է� �� ����): ");
//		scanf("%d", &num);
//
//		if (num == -1)
//			break;
//
//		//�Է��� ������ ������ �޸� ũ�⸸ŭ á�� ���
//		if (count == maxSize)
//		{
//			maxSize += maxSize; //���Ҵ��� ���� �޸� ���� Ȯ��
//			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
//		}
//
//		ptr[count++] = num;
//	}
//	for (i = 0; i < count; i++)
//		printf("%d ", ptr[i]);
//
//
//	if (ptr != NULL) free(ptr); //�����Ҵ翵�� �ݳ�(����)
//
//	return 0;
//
//}


//ex) �����Ҵ翵���� ����� ���ڿ� ó��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	char temp[80]; //�ӽ� char �迭
//	char* str[3]; //�����Ҵ翵���� ������ ������ �迭
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���ڿ��� �Է��ϼ���: ");
//		gets(temp); //���ڿ� �Է�
//		str[i] = (char*)malloc(strlen(temp)+1); //���ڿ� �����Ҵ�
//		//strlen�� �ι��ڸ� ������ ���ڼ��� ���� ������  +1 ����
//		strcpy(str[i], temp);//�����Ҵ翵���� ���ڿ� ����
//	}
//
//	for (i = 0; i < 3; i++)
//		printf("%s\n", str[i]); //�Էµ� ���ڿ� ���
//
//	for (i = 0; i < 3; i++)
//		free(str[i]); //�����Ҵ翵�� ����(�ݳ�)
//
//	return 0;
//}




//ex) �����Ҵ翵���� ���ڿ��� �Լ��� ���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void print_str(char** ps); //�����Ҵ翵���� ���ڿ��� ����ϴ� �Լ� ����
//
//int main(void)
//{
//	char temp[80];
//	char* str[20];
//	int i = 0;
//
//	while (i < 20)
//	{
//		printf("���ڿ��� �Է��ϼ���: ");
//		gets(temp);
//		if (strcmp(temp, "end") == 0) //strcmp(a,b): a�� b�� ������ ��,������ 0�� ���
//			break; //end�� �ԷµǸ� �ݺ� ����
//		str[i] = (char*)malloc(strlen(temp) + 1); //�� ���� ����
//		strcpy(str[i], temp);
//		i++;
//	}
//
//	print_str(str); //�Լ� ȣ��
//
//	for (i = 0; str[i] != NULL; i++) //str�� ����� ���ڿ��� ���� ������
//		free(str[i]); //�����Ҵ翵�� �ݳ�(����)
//
//	return 0;
//}
//
//void print_str(char** ps)
//{
//	while (*ps != NULL) //�����͹迭�� ���� �������Ͱ� �ƴ� ���� �ݺ�
//	{
//		printf("%s\n", *ps); //ps�� ����Ű�� ���� �����͹迭�� ���(��)
//		ps++; //ps�� ���� �迭 ��Ҹ� ����Ų��
//	}
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	char* s1 = "Take a look";
//	char* s2 = (char*)malloc(strlen(s1) + 1);
//
//	strcpy(s2, s1);
//
//	printf("%s\n", s2);
//
//	if (s2 != NULL) free(s2);
//
//	return 0;
//}


//����ü
//�ϳ� �̻��� ������ �Ѳ����� ��� ����� ���ο� ������ �ڷ���
//����� ���� �ڷ����̶�� �θ��⵵ ��
//struct Ű���带 ����� ����
//��, int double ���� �ڷ����� ���� ���� ����� ��


//#include <stdio.h>
//#include <string.h>
//
//struct person
//{
//	char name[30]; //��� ����
//	int age;
//};
//
//int main(void)
//{
//	struct person boy, girl; //����ü ���� ����, int a,b;�� ���� ����
//
//	//name ��� ������ ���� ����
//	strcpy(boy.name, "��ҳ�");
//	strcpy(girl.name, "�̼ҳ�");
//
//	//age ��� ������ ���� ����
//	boy.age = 12;
//	girl.age = 9;
//
//	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.name, boy.age);
//	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl.name, girl.age);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct person
//{
//	char name[30];
//	int age;
//};
//
//int main(void)
//{
//	//������ ���� ����� ���ÿ� �ʱ�ȭ
//	struct person boy = { "��ҳ�",12 };
//	struct person girl = { "�̼ҳ�",9 };
//
//	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.name, boy.age);
//	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl.name, girl.age);
//
//	return 0;
//}



//ex)����ü ����� ����ڷκ��� ������ �Է¹ޱ�
//#include <stdio.h>
//
//struct student
//{
//	int number; //�й�(��� ����)
//	char name[10]; //�̸�(��� ����)
//	double grade; //����(��� ����)
//};
//
//int main(void)
//{
//	struct student s;
//
//	printf("�й��� �Է��ϼ���: ");
//	scanf("%d", &s.number);
//	
//	printf("�̸��� �Է��ϼ���: ");
//	scanf("%s", s.name); //name�� �迭�̱� ������ �迭�̸��� �ּ�
//
//	printf("������ �Է��ϼ��� (�Ǽ�): ");
//	scanf("%lf", &s.grade);
//
//	printf("�й�: %d\n", s.number);
//	printf("�̸�: %d\n", s.name);
//	printf("����: %.1lf\n", s.grade);
//
//	return 0;
//}

#include <stdio.h>

struct coffee
{
	char origin[30]; //������(��� ����)
	int price; //����(��� ����)
	char barista[30]; //�ٸ���Ÿ �̸�(��� ����)
};


struct coffee temp1; //�ʱ�ȭ ����
struct coffee temp2 = { "colombia",5000,"tom" }; //�ʱ�ȭ

