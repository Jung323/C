#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//
//int main(void)
//{
//	char word[30];
//	int max = 0;
//	int i = 0;
//
//	printf("영단어 입력: ");
//	scanf("%s",word);
//
//	while (word[i] != '\0') //문자열의 끝을 알리는 널문자가 등장할 때까지 반복
//	{
//		if (word[i] > max)
//			max = word[i]; // 아스키코드 값이 큰 요소값으로 최댓값이 바뀐다.
//		i++;
//	} 
//	printf("아스키코드가 가장 큰 문자: %c\n", max);
//	printf("아스키코드가 가장 큰 문자(정수로): %d\n", max);
//
//	return 0;
//
//}


//포인터 변수: 메모리 주소(데이터가 저장된 위치 정보)를 저장하기 위한 특수 변수

//ex) 주소 연산자 (&)
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 10;
//	char c = 69;
//	double f = 12.3;
//
//	printf("i의 값: %d\n", i);
//	printf("c의 값: %c\n", c);
//	printf("f의 값: %lf\n", f);
//	printf("\n");
//	printf("i의 값: %u\n", &i);
//	printf("c의 값: %u\n", &c);
//	printf("f의 값: %u\n", &f);
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
//	int* pi; //포인터 변수 pi선언
//	double* pf; //포인터 변수 pf선언
//	 
//	pi = &i; //포인터 변수  pi에 i의 주소를 담음
//	pf = &f; //포인터 변수 pf에 f의 주소를 담음
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
//	printf("k의 주소: %u\n", &k);
//	printf("p의 주소: %u\n", &p);
//	printf("p의 값: %u\n", p);
//	printf("p가 가리키는 곳의 값: %d\n", *p);
//	printf("k의 값:%d\n", k);
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int i = 3000;
//	int* p;
//	p = &i; //포인터 변수 p에 i의 주소를 담음
//
//	printf("p: %u\n", p); //포인터 변수 p에 담긴 값 출력
//	printf("&i: %u\n\n", &i); //변수 i의 주소 출력
//
//	printf("i: %d\n", i); //변수 i에 담긴 값 출력
//	printf("*p: %d\n", *p); // 포인터 변수 p가 가리키는 값 출력
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int x = 10, y = 20;
//	int* p; //포인터 변수
//	p = &x; //x의 주소를 담음
//	printf("p: %u\n", p);
//	printf("*p: %d\n\n",*p); //p가 가리키는 값 = x
//
//
//	p = &y; //y의 주소를 담음
//	printf("p: %u\n", p);
//	printf("*p: %d\n\n", *p); //p가 가리키는 값 = y
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
//	p = &i; //포인터 변수  p에 i의 주소를 담음
//	printf("i= %d\n", i);
//
//	*p = 20; //p가 가리키는 값을 20으로 바꿈
//	printf("*p: %d\n", *p);
//	printf("i: %d\n", i); //i의 값이 20으로 바뀜
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
//	char* cptr = &cnum; //변수 cnum의 주소를 담음
//	int* iptr = &inum; //변수 inum의 주소를 담음
//	double* dptr = &dnum; //변수 dnum의 주소를 담음
//
//	printf("%p\n", cptr); //%p는 원래 주소 , %u로 했던 것은 10진수로 변환해서 보여준 것
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
//	pnum = &num; //num의 주소를 저장
//
//	*pnum = 20; //pnum이 가리키는 값을 20으로 변경
//	printf("num: %d\n", num);
//	printf("pnum:%u\n", pnum);
//
//	(*pnum)++; //pnum이 가리키는 값을 1증가시킴
//	(*pnum)++; //pnum이 가리키는 값을 또 1증가시킴
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

	printf("number의 값: %d\n", *pnumber);
	printf("number의 주소: %p\n", pnumber);

	return 0;
}