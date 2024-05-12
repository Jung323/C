#define _CRT_SECURE_NO_WARNINGS


//ex) 동적할당영역을 배열처럼 사용

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* list;
//	list = (int*)malloc(sizeof(int) * 3); //12바이트 동적할당
//	if (list == NULL)
//	{
//		printf("메모리가 부족합니다.\n");
//		exit(1);
//	}
//
//	list[0] = 10; //동적할당영역 사용
//	list[1] = 20;
//	list[2] = 30;
//
//	printf("%d %d %d\n", list[0], list[1], list[2]);
//
//	free(list); //동적할당영역 반납(해제)
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* iptr = (int*)malloc(sizeof(int) * 5); //int형 5개(20바이트)
//	double* dptr = (double*)malloc(sizeof(double) * 3); //double형 3개(24바이트)
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
//	//동적할당영역 반납(해제)
//	if (iptr != NULL) free(iptr);
//	if (dptr != NULL) free(dptr);
//
//	return 0;
//
//}


//ex)동적할당영역을 배열처럼 사용하여 평균구하기
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* pi;//동적할당영역을 연결한 포인터 변수
//	int i, sum = 0;
//	
//	pi = (int*)malloc(sizeof(int) * 5); //저장공간 20바이트 할당
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다.\n"); //실패했을 경우 나오는 문구
//		exit(1);
//	}
//	printf("다섯명의 나이를 차례대로 입력하세요: ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("다섯명의 평균 나이: %.1lf\n", (double)sum / 5);
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
//	char* str = (char*)malloc(sizeof(char) * 100); //동적할당영역 100바이트
//	printf("좋아하는 단어는? ");
//	gets(str);
//	return str;
//}
//
//int main(void)
//{
//	char* result = getString();//함수 호출
//	printf("당신이 좋아하는 단어는: %s\n", result);
//
//	if (result != NULL) free(result); //동적할당영역 반납(해제)
//
//	return 0;
//}




//malloc함수는 할당된 메모리 공간을 별도의 값으로 초기화하지 않음
//calloc함수는 할당된 메모리 공간의 모든 비트를 0으로 초기화


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* ptr;
//	int count = 0; //입력받은 데이터의 개수
//	int maxSize = 3; //할당받은 메모리의 크기
//	int num;
//	int i;
//
//	ptr = (int*)calloc(maxSize, sizeof(int)); //동적할당 연결(12바이트)
//	while (1)
//	{
//		printf("정수를 입력하세요 (-1 입력 시 종료): ");
//		scanf("%d", &num);
//
//		if (num == -1)
//			break;
//
//		//입력한 정수의 개수가 메모리 크기만큼 찼을 경우
//		if (count == maxSize)
//		{
//			maxSize += maxSize; //재할당을 통한 메모리 영역 확장
//			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
//		}
//
//		ptr[count++] = num;
//	}
//	for (i = 0; i < count; i++)
//		printf("%d ", ptr[i]);
//
//
//	if (ptr != NULL) free(ptr); //동적할당영역 반납(해제)
//
//	return 0;
//
//}


//ex) 동적할당영역을 사용한 문자열 처리
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	char temp[80]; //임시 char 배열
//	char* str[3]; //동적할당영역을 연결할 포인터 배열
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("문자열을 입력하세요: ");
//		gets(temp); //문자열 입력
//		str[i] = (char*)malloc(strlen(temp)+1); //문자열 공간할당
//		//strlen은 널문자를 제외한 글자수를 세기 때문에  +1 해줌
//		strcpy(str[i], temp);//동적할당영역에 문자열 복사
//	}
//
//	for (i = 0; i < 3; i++)
//		printf("%s\n", str[i]); //입력된 문자열 출력
//
//	for (i = 0; i < 3; i++)
//		free(str[i]); //동적할당영역 해제(반납)
//
//	return 0;
//}




//ex) 동적할당영역의 문자열을 함수로 출력
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void print_str(char** ps); //동적할당영역의 문자열을 출력하는 함수 원형
//
//int main(void)
//{
//	char temp[80];
//	char* str[20];
//	int i = 0;
//
//	while (i < 20)
//	{
//		printf("문자열을 입력하세요: ");
//		gets(temp);
//		if (strcmp(temp, "end") == 0) //strcmp(a,b): a와 b가 같은지 비교,같으면 0이 출력
//			break; //end가 입력되면 반복 종료
//		str[i] = (char*)malloc(strlen(temp) + 1); //널 문자 포함
//		strcpy(str[i], temp);
//		i++;
//	}
//
//	print_str(str); //함수 호출
//
//	for (i = 0; str[i] != NULL; i++) //str에 연결된 문자열이 없을 때까지
//		free(str[i]); //동적할당영역 반납(해제)
//
//	return 0;
//}
//
//void print_str(char** ps)
//{
//	while (*ps != NULL) //포인터배열의 값이 널포인터가 아닌 동안 반복
//	{
//		printf("%s\n", *ps); //ps가 가리키는 것은 포인터배열의 요소(값)
//		ps++; //ps가 다음 배열 요소를 가리킨다
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


//구조체
//하나 이상의 변수를 한꺼번에 묶어서 만드는 새로운 유형의 자료형
//사용자 정의 자료형이라고도 부르기도 함
//struct 키워드를 사용해 정의
//즉, int double 같은 자료형을 내가 직접 만드는 것


//#include <stdio.h>
//#include <string.h>
//
//struct person
//{
//	char name[30]; //멤버 변수
//	int age;
//};
//
//int main(void)
//{
//	struct person boy, girl; //구조체 변수 선언, int a,b;와 같은 형태
//
//	//name 멤버 변수에 대한 접근
//	strcpy(boy.name, "김소년");
//	strcpy(girl.name, "이소녀");
//
//	//age 멤버 변수에 대한 접근
//	boy.age = 12;
//	girl.age = 9;
//
//	printf("소년의 이름은 %s, 나이는 %d세\n", boy.name, boy.age);
//	printf("소녀의 이름은 %s, 나이는 %d세\n", girl.name, girl.age);
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
//	//구조적 변수 선언과 동시에 초기화
//	struct person boy = { "김소년",12 };
//	struct person girl = { "이소녀",9 };
//
//	printf("소년의 이름은 %s, 나이는 %d세\n", boy.name, boy.age);
//	printf("소녀의 이름은 %s, 나이는 %d세\n", girl.name, girl.age);
//
//	return 0;
//}



//ex)구조체 멤버에 사용자로부터 데이터 입력받기
//#include <stdio.h>
//
//struct student
//{
//	int number; //학번(멤버 변수)
//	char name[10]; //이름(멤버 변수)
//	double grade; //학점(멤버 변수)
//};
//
//int main(void)
//{
//	struct student s;
//
//	printf("학번을 입력하세요: ");
//	scanf("%d", &s.number);
//	
//	printf("이름을 입력하세요: ");
//	scanf("%s", s.name); //name은 배열이기 때문에 배열이름이 주소
//
//	printf("학점을 입력하세요 (실수): ");
//	scanf("%lf", &s.grade);
//
//	printf("학번: %d\n", s.number);
//	printf("이름: %d\n", s.name);
//	printf("학점: %.1lf\n", s.grade);
//
//	return 0;
//}

#include <stdio.h>

struct coffee
{
	char origin[30]; //원산지(멤버 변수)
	int price; //가격(멤버 변수)
	char barista[30]; //바리스타 이름(멤버 변수)
};


struct coffee temp1; //초기화 안함
struct coffee temp2 = { "colombia",5000,"tom" }; //초기화

