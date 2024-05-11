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
#include <stdio.h>

void swap_ptr()
