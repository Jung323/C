#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2;
//	int* ptr;
//	ptr = &num1; // num1의 주소를 담음
//
//	(*ptr)++; //ptr이 가리키는 값을 1증가
//	num2 = 5;
//	ptr = &num2;
//	*ptr = *ptr + num1 + num2; // 5+11+5
//
//	printf("num1: %d,num2: %d, *ptr:%d\n", num1, num2, *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 100, num2 = 100;
//	int* pnum;
//	
//	pnum = &num1;
//	(*pnum) += 30; 
//
//	pnum = &num2;
//	(*pnum) -= 30;
//
//
//	printf("num1: %d, num2: %d\n", num1, num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int* ptr;
//	int num1 = 5;
//	int num2 = 8;
//
//	ptr = &num1;
//	printf(" %d\n", *ptr);
//
//	ptr = &num2;
//	printf(" %d\n", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int n1 = 100, n2 = 200;
//	int* ptr1 = &n1;
//	int* ptr2 = &n2;
//
//	printf("%d %d\n", *ptr1, *ptr2);
//	int* ptr3 = &n1;
//	ptr1 = &n2;
//	ptr2 = ptr3;
//
//	printf("%d %d\n", *ptr1, *ptr2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char arr[5] = "copy";
//	char* p;
//	p = arr; //배열이 이름은 곧 주소이기 때문에 &을 붙이지 않음
//
//	printf("p의 값: %u\n", p);
//	printf("배열의 시작주소: %u\n", arr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int myArr[3] = { 1,2,3 };
//	printf("%d\n", myArr[0]);
//	printf("%d\n", myArr[1]);
//	printf("%d\n", myArr[2]);
//
//	printf("배열 각 요소의 주소 확인 \n");
//	printf("배열의 이름: %u\n", myArr); //배열의 시작 주소값(0번 인덱스의 주소값과 동일)
//	printf("첫번째 요소: %u\n", &myArr[0]); 
//	printf("두번째 요소: %u\n", &myArr[1]);
//	printf("세번째 요소: %u\n", &myArr[2]);
//
//	return 0;
//}


//포인터 변수에 증가연산자 사용
//#include <stdio.h>
//
//int main(void)
//{
//	int a[3] = { 10,20,30 };
//	int* p;
//	p = a;
//
//	printf("배열 이름: %u\n", a);
//	printf("포인터 주소: %u\n", &p);
//	printf("포인터의 값: %u\n", p);
//	printf("*p의 값:%d\n", *p);
//	p++; //int는 4바이트이기 때문에 주소값이 4증가
//	printf("포인터의 값: %u\n", p);
//	printf("*p의 값:%d\n", *p);
//
//	return 0;
//}


//포인터 변수에 대한 덧셈 연산
//#include <stdio.h>
//
//int main(void)
//{
//	int a[3] = { 10,20,30 };
//	int* p;
//	p = a;
//	printf("배열 이름: %u\n", a);
//	printf("a[1]의 주소: %u\n", &a[1]);
//	printf("a+1의 값: %u\n", a + 1);
//	printf("p+1의 값: %u\n", p + 1);
//	printf("a[2]의 값: %d\n", a[2]);
//	printf("*(p+2)의 값: %d\n", *(p + 2));
//	printf("*p+2의 값: %d\n", *p + 2);
//
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	short sarr[3] = { 1,2,3 };
//	int iarr[3] = { 10,20,30 };
//
//	//인덱스 번호로 통한 접근
//	printf("%d %d %d\n", sarr[0], sarr[2], sarr[2]);
//	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);
//
//
//	//포인터 연산을 통한 접근
//	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
//	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));
//
//	//주소 확인
//	printf("%u %u %u\n", &sarr[0], &sarr[1], &sarr[2]);
//	printf("%u %u %u\n", sarr, sarr + 1, sarr + 2);
//	printf("%u %u %u\n", &iarr[0], &iarr[1], &iarr[2]);
//	printf("%u %u %u\n", iarr, iarr + 1, iarr + 2);
//
//	return 0;
//}


//배열의 이름을 포인터처럼 사용하기
//#include <stdio.h>
//
//int main(void)
//{
//	int a[5] = { 10,20,30,40,50 };
//
//	printf("a: %u\n", a); //배열의 이름을 포인터처럼 쓸 수 있다.
//	printf("a+1: %u\n", a + 1); //a[1]의 주소와 같다. &a[1]
//	printf("*a: %d\n", *a); //a[0]과 같다.
//	printf("*(a+1): %u\n", *(a + 1)); //a[1]과 같다.
//
//	return 0;
//}


//포인터를 배열처럼 사용하기
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[3] = { 10,20,30 };
//	int* ptr = arr;
//	printf("0 위치 값: %d %d\n", *(arr + 0), *(ptr + 0));
//	printf("1 위치 값: %d %d\n", *(arr + 1), *(ptr + 1));
//	printf("2 위치 값: %d %d\n", *(arr + 2), *(ptr + 2));
//	printf("\n");
//	printf("0 위치 값: %d %d\n", arr[0], ptr[0]);
//	printf("1 위치 값: %d %d\n", arr[1], ptr[1]);
//	printf("2 위치 값: %d %d\n", arr[2], ptr[2]);
//
//	return 0;
//}


//퀴즈1) int형 변수 num1과 num2를 선언과 동시에 각각 10과 20으로 초기화하고
//int형 포인터 변수 ptr1과 ptr2를 선언하여 각각 num1과 num2를 가리키게 하자.
//그리고 이 상태에서 포인터 변수 ptr1과 ptr2를 이용해서 num1의 값을 10 증가, num2의 값을 10 감소시키자.
//num1과 num2의 값을 출력해보고, ptr1과 ptr2가 가리키는 값을 출력해보자.

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	*ptr1 += 10;
//	*ptr2 -= 10;
//
//	printf("num1: %d, num2: %d\n", num1, num2);
//	printf("*ptr1: %u, *ptr2: %u\n", *ptr1, *ptr2);
//}

//퀴즈2) 
//퀴즈1과 이어진 퀴즈
//두 포인터 변수 ptr1과 ptr2가 가리키는 대상을 서로 바꾸자.
//num1과 num2의 값을 출력해보고, ptr1과 ptr2가 가리키는 값을 출력해보자.

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	*ptr1 += 10;
//	*ptr2 -= 10;
//
//	int* ptr3 = ptr1; //&num1
//	ptr1 = ptr2; // &num2
//	ptr2 = ptr3; // &num1
//
//
//	printf("num1: %d, num2: %d\n", num1, num2);
//	printf("*ptr1: %u, *ptr2: %u\n", *ptr1, *ptr2);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a[3] = { 10,20,30 };
//	int* p;
//	p = a;
//	printf("a[0]: %d, a[1]: %d, a[3]: %d\n", a[0], a[1], a[2]);
//	printf("p[0]: %d, p[1]: %d, p[3]: %d\n", p[0], p[1], p[2]);
//
//	p[0] = 60; //포인터를 마치 배열처럼 사용
//	p[1] = 70;
//	p[2] = 80;
//
//
//	printf("a[0]: %d, a[1]: %d, a[3]: %d\n", a[0], a[1], a[2]);
//	printf("p[0]: %d, p[1]: %d, p[3]: %d\n", p[0], p[1], p[2]);
//
//	return 0;
//}


//포인터를 이용한 배열의 값 출력
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3] = { 10,20,30 };
//	int* pa = ary;
//	int i;
//
//	printf("배열의 값: ");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *pa); //pa가 가리키는 배열요소(값) 출력
//		pa++;
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		*(ptr + i) += 3; //배열 요소 값에 3만큼 증가
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(ptr + i));
	}

	return 0;
}