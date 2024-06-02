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
//	printf("함수 호출 전 num1 num2 num3: %d %d %d\n", num1, num2, num3);
//	swapNumbers(&num1, &num2, &num3);
//	printf("함수 호출 후 num1 num2 num3: %d %d %d\n", num1, num2, num3);
//
//	return 0;
//}

//ex) 이중포인터가 많이 사용되는 상황
//#include <stdio.h>
//
//void set_pointer(char** q); //함수 원형 선언
//
//int main(void)
//{
//	char* p;
//	set_pointer(&p); //함수 호출(포인터 p의 주소를 전달)
//	printf("오늘의 목표: %s\n", p);
//
//	return 0;
//}
//
//void set_pointer(char** q)
//{
//	//포인터를 함수안에서 변경하려면 매개변수를 이중포인터로 정의해야한다.
//	*q = "C언어 1시간 복습하기!";
//}


//ex) 포인터의 값을 바꾸는 함수의 매개변수
//#include <stdio.h>
//
//void swap_ptr(char** ppa, char** ppb); //함수 원형 선언
//
//int main(void)
//{
//	char* pa = "success";
//	char* pb = "failure";
//	
//	printf("pa: %s, pb: %s\n", pa, pb); //바꾸기 전에 문자열 출력
//	swap_ptr(&pa, &pb); //함수 호출
//
//	printf("pa: %s, pb: %s\n", pa, pb); //바꾼 후에 문자열 출력
//
//	return 0;
//}
//
//void swap_ptr(char** ppa, char** ppb)
//{
//	char* pt; //교환을 위한 임시변수
//
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}


//ex) 포인터 배열을 매개변수로 받는 함수
//#include <stdio.h>
//
//void print_ptr(char** pps, int cnt); //함수 원형 선언
//
//int main(void)
//{
//	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" }; //초기화
//
//	print_ptr(ptr_ary, 4); //배열명과 배열요소수를 넘겨주고 호출
//
//	return 0;
//}
//
//void print_ptr(char** pps, int cnt)
//{
//	int i;
//	for (i = 0; i < cnt; i++)
//		printf("%s\n", pps[i]); //이중포인터를 배열명처럼 사용
//}


//더블 포인터와 Call-by-reference

//#include <stdio.h>
//
//void swapNumber(int** dptr1, int** dptr2)
//{
//	int* temp = *dptr1; //주소값을 교환
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
//	swapNumber(&ptr1, &ptr2); //값의 교환이 아닌 주솟값의 교환이 이루어진다.
//
//	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
//	printf("num1: %d, num2: %d\n", num1, num2); //변수값은 그대로
//
//	return 0;
//}


//함수 포인터
//함수의 주소를 저장할 수 있는 포인터 변수

//#include <stdio.h>
//
//int myFunc(int num1, int num2)
//{
//	printf("num1: %d, num2: %d\n", num1, num2);
//}
//
//int main(void)
//{
//	int (*fptr)(int, int); //함수포인터 선언(함수포인터의 이름은 fptr, 매개변수의 자료형 int)
//
//	fptr = myFunc; //함수 포인터 저장
//	fptr(9, 6); //함수를 호출한 결과와 같게 나온다.
//
//	return 0;
//}


//void형 포인터
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10; //int형 변수(정수형)
//	double b = 3.5; //double형 변수(실수형)
//	void* vp; //void형 포인터
//
//	vp = &a; //int형 변수의 주소를 저장
//	printf("a: %d\n", *(int*)vp); //in형으로 형변환
//
//	vp = &b; //double형 변수의 주소를 저장 
//	printf("b: %.1lf\n", *(double*)vp); //double* 형으로 현변환
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
//	printf("%0.1f \n", **dptr); //실제 변수 안의 값: 3.8
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
////함수의 선언부(함수 원형)
//
//int FirstFunc(int a, int b);
//double SecondFunc(double d);
//void ThirdFunc(char* c);
//
//
//int main(void)
//{
//	//함수 포인터 정의
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
////함수의 정의부(함수 본체)
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



//코드 영역 : 실행 파일을 위한 영역
//스택 : 지역 변수 영역
//기타 데이터 영역 : 전역 변수, 정적 변수 영역
//힙 : 동적 할당 영역

//다른 영역은 변수의 생성과 소멸 시점이 이미 정해져 있지만 
//힙영역은 변수의 생성과 소멸 시점을 임의로 변경가능

//malloc함수
//힙영역에 접근하기 위해 사용해야 하는 함수
//#include <stdlib.h>  헤더파일이 필요
//malloc함수는 할당된 메모리 공간의 주솟값을 반환함. 
//반환되는 포인터의 타입은 void형 포인터
//malloc함수를 통해 할당된 메모리 공간은 사용자가 해제하거나 프로그램이 종료되늰 경우가 아니면 메모리에 남아있음
//만약 사용자가 해제를 원한다면 힙 영역 메모리 주소의 해제를 담당하는 free함수를 호출해야 함


//ex) 동적할당한 저장공간을 사용하는 프로그램
#include <stdio.h>
#include <stdlib.h> //malloc, free함수를 사용하기 위한 헤더파일

int main(void)
{
	int* pi; //동적할당할 영역을 연결할 포인터 선언
	double* pd;

	//메모리 동적할당 후 포인터 연결(4바이트)
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) //동적할당에 실패하면 NULL포인터 반환
	{
		printf("메모리가 부족합니다.\n"); //예외 상황 메시지 출력
		exit(1);
	}
	pd = (double*)malloc(sizeof(double)); //8바이트
	*pi = 10; //포인터로 동적할당 영역 사용
	*pd = 3.4;
	
	//동적할달 영역에 저장된 값 출력
	printf("정수형으로 사용: %d\n", *pi);
	printf("실수형으로 사용: %.1lf\n", *pd);


	//동적할당 영역 반환(반납, 해제)
	free(pi);
	free(pd);

	return 0;
}