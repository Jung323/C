#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int arr[5] = { 10,20,30,40,50 };
//	int* pa;
//	int* pb;
//	int* pc;
//	int i;
//
//	pa = (int*)malloc(sizeof(arr)); //�迭 ��ü ũ���̹Ƿ� int*5 �ؼ� 20����Ʈ�� �Ҵ�
//	
//	for (i = 0; i < 5; i++)
//		pa[i] = arr[i];
//
//	pb = (int*)calloc(pa[3], sizeof(int)); //pa[3]�� 40�̹Ƿ� int*40 �ؼ� 160����Ʈ�� �Ҵ�
//
//	pc = (int*)realloc(NULL, pa[4]); //pa[4]�� 50�̹Ƿ� 50����Ʈ �Ҵ�
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int len, i;
//	char* str;
//	int numofa = 0;
//
//	printf("���ڿ��� �ִ� ���̴�? ");
//	scanf("%d", &len);
//
//	str = (char*)malloc(sizeof(char) * len);
//	
//	printf("���ڿ� �Է�: ");
//	scanf("%s", str);
//	
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] == '\0') //�� ���ڰ� ������ ����
//			break;
//		if (str[i] == 'a') //a�� ������ ����(����)
//			numofa += 1;
//	}
//	printf("a�� ������ %d���Դϴ�.\n", numofa);
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
//	//���̰� 3�� ����ü �迭�� ���� �� �ʱ�ȭ
//	struct person boy[3] = {
//		{"��ҳ�",12},
//		{"���ҳ�",14},
//		{"û�ҳ�",16}
//	};
//	struct person girl[3];
//	int i;
//
//	//���� ������ ���� �ʱ�ȭ
//	strcpy(girl[0].name, "�̼ҳ�");
//	strcpy(girl[1].name, "���ҳ�");
//	strcpy(girl[2].name, "�ϼҳ�");
//
//	girl[0].age = 9;
//	girl[1].age = 13;
//	girl[2].age = 7;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy[i].name, boy[i].age);
//		printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl[i].name, girl[i].age);
//
//	}
//	return 0;
//}


