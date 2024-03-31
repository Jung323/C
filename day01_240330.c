//#include <stdio.h> 
////#include: 전처리문(포함하다)
////<stdio.h>:헤더파일(기본 입출력 함수 호출용)
///*
//함수: 수(값)을 담아 처리하는 논리적인 공간
//함수 종류
//1. main함수: 최초로 실행되는 함수
//2. 라이브러리 함수: 특정한 기능 수행을 위해 미리 만들어진 함수
//3. 사용자 정의 함수: main을 제외하고 개발자가 만든 임의의 함수
//*/
//int main(void) //함수의 헤더(반환자료형 함수명 값입력부분)
//{ //함수의 시작
//	printf("hello, world!"); //라이브러리 함수(화면에 출력)
//
//	return 0; //반환값 0(함수가 종료되었을 떄 전달하는 값)
//} //함수의 끝
//
////실행: ctrl + f5
////주석처리:ctrl+ k 누른 다음 c
////추석처리 취소: ctrl + k 누른 다음 u

//변수: 지정된 값을 필요에 의해 반복적으로 바꿔서 사용하는 값
//상수: 항상 같은 값, 고정적으로 사용
//수, 값(data, 자료): 선 저장 후 처리 → 저장을 하기 위해서는 공간(변수)이 필요
// = (대입연산자): 대입연산자의 왼쪽은 공간, 오른쪽은 값으로 해석 → 오른쪽을 먼저 처리

//변수선언: 이름 부여 + 공간을 형성
//변수 초기화: 이름 부여 + 공간을 형성 + 기본값

//서식: 꾸며준다
//서식 문자: 특정 서식 공간에 제한된 자료를 대입해서 화면에 출력하거나 입력받기 위한 용도의 문자
// %d: 10진 정수 서식 문자
// %f: 10진 실수 서식 문자
// %c: 한 문자 서식 문자
// %s: 문자열 서식 문자

//#include <stdio.h>
//
//int main(void)
//{
//	int number1, number2;
//	number1 = 1;
//	number2 = 2;
//	int number3 = 3, number4 = 4;
//	
//	printf("%d %d %d %d", number1, number2, number3, number4);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) 
//{
//	int number1 = 3;
//	printf("%d\n", number1);
//	int number2 = 5;
//	printf("%d\n", number2);
//	return 0
//}


//자료형: 자료의 종류에 따라서 공간을 만들기 위해 사용되늰 예약어
//- 자료의 종류에 따라 저장된 공간을 미리 규격화한 예약어

//정수자료형: int(4바이트),short(2바이트),char(1바이트)
//실수자료형: double(8바이트),float(4바이트)
//문자자료형: char(1바이트)
//문자열: 배열 또는 포인터로 처리

//#include <stdio.h>
//int main(void)
//{
//	printf("%d\n", sizeof(100)); //정수는 int형으로 처리(4바이트로 인식)
//	printf("%d\n", sizeof(3.14)); //실수는 double형으로 처리(8바이트로 인식)
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    char ch1 = 66, ch2 = 'B'; // 문자(한글자)를 표현할 때는 작은따옴표 사용
//    short sh1 = 67;
//    int in1 = 68;
//
//    printf("%c\n", ch1); //문자 형태로 출력
//    printf("%c\n", ch2);
//    printf("%c\n", sh1);
//    printf("%c\n", in1);
//    printf("\n");
//    printf("%d\n", ch1); //정수 형태로 출력
//    printf("%d\n", ch2);
//    printf("%d\n", sh1);
//    printf("%d\n", in1);
//    
//    return 0;
//}


//#include <stdio.h>
//#define LENGTH 10 // 매크로 상수
//
//int main(void)
//{
//    int number = 3; // 변수
//    const int  NUMBER = 5; // 심볼릭 상수
//    number = 10; //변수값을 변경가능
//    //NUMBER = 10; //상수는 값을 변경할 수 없다,
//
//    printf("%d\n", LENGTH);
//    printf("%d\n", number);
//    printf("%d\n", NUMBER);
//}

#include <stdio.h>
int main(void)
{
	printf("오늘의 주제 : 변수와 자료형\n");
	printf("프로그램 작성자 : 홍길동\n");
	printf("프로그램 작성일 : 2021.02.23\n");
	return 0;
}