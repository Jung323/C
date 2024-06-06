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
//	pa = (int*)malloc(sizeof(arr)); //배열 전체 크기이므로 int*5 해서 20바이트를 할당
//	
//	for (i = 0; i < 5; i++)
//		pa[i] = arr[i];
//
//	pb = (int*)calloc(pa[3], sizeof(int)); //pa[3]은 40이므로 int*40 해서 160바이트를 할당
//
//	pc = (int*)realloc(NULL, pa[4]); //pa[4]은 50이므로 50바이트 할당
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
//	printf("문자열의 최대 길이는? ");
//	scanf("%d", &len);
//
//	str = (char*)malloc(sizeof(char) * len);
//	
//	printf("문자열 입력: ");
//	scanf("%s", str);
//	
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] == '\0') //널 문자가 나오면 종료
//			break;
//		if (str[i] == 'a') //a의 개수를 센다(누적)
//			numofa += 1;
//	}
//	printf("a의 개수는 %d개입니다.\n", numofa);
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
//	//길이가 3인 구조체 배열의 선언 및 초기화
//	struct person boy[3] = {
//		{"김소년",12},
//		{"유소년",14},
//		{"청소년",16}
//	};
//	struct person girl[3];
//	int i;
//
//	//개별 변수에 대한 초기화
//	strcpy(girl[0].name, "이소녀");
//	strcpy(girl[1].name, "오소녀");
//	strcpy(girl[2].name, "하소녀");
//
//	girl[0].age = 9;
//	girl[1].age = 13;
//	girl[2].age = 7;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("소년의 이름은 %s, 나이는 %d세\n", boy[i].name, boy[i].age);
//		printf("소녀의 이름은 %s, 나이는 %d세\n", girl[i].name, girl[i].age);
//
//	}
//	return 0;
//}


