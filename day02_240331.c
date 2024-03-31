//자료형 변환: 특정 자료형이 다른 자료형으로 변환되어지거나 강제로 변환되는 문법
//형 변환 종류
//1. 자동형변환(암시적): 컴파일러에 의해 자동으로 변환,범위가 넓은 공간에 작은 값이 대입되는 경우가 많다.
//char < short < int < long < float < double → 데이터 손실 최소화
//2. 강제적변환(명시적): 개발자에 의해 명시된 형변환

//#include <stdio.h>
//int main(void)
//{
//	double number1 = 10;
//	int number2 = 1.2345;
//	short number3 = 70000;
//
//	printf("%f\n", number1); //실수 표현
//	printf("%d\n", number2);
//	printf("%d\n", number3);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("%d\n", (short)3.1415);//short형으로 명시적형변환
//	printf("%d\n", (int)3.1415);//int형으로 명시적형변환
//	printf("%f\n", (double)10);//doublet형으로 명시적형변환
//	printf("%f\n", (float)10);//float형으로 명시적형변환
//
//	return 0;
//}



// unsigned: 비트가 늘어나 값의 범위가 늘어나지만, 부호는 표현할수 없게됨
//#include <stdio.h>
//
//int main(void)
//{
//	char cnum = 128; //결과:-128로 인식, char은 원래 -128~127만 표현
//	unsigned char u_cnum = 128; // 부호없는 자료형,양수 128을 표현
//	short snum = 32768; //결과: -32768로 인식, short는 -32768~32767만 표현
//	unsigned short u_snum = 32768; // 부호없는 자료형,양수 32768을 표현
//
//	printf("%d\n", cnum);
//	printf("%d\n", u_cnum);
//	printf("%d\n", snum);
//	printf("%d\n", u_snum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("\"I am a boy.\"\n");
//	printf("I am a \'boy\'.\n");
//	printf("I\tam\ta\tboy.\n");
//	printf("I\bam a boy.\n"); //\b는 커서가 한칸 앞으로 이동
//	printf("I am a boy\\\?\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char character = 'X';
//	int inumber = 92;
//	double dnumber = 20.201005;
//	printf("%c\n", character);
//	printf("%d\n", character); // 아스키코드로 변환해서 출력
//	printf("%d\n", inumber);
//	printf("%x\n", inumber); //부호없는 16진수
//	printf("%o\n", dnumber); //부호없는 8진수
//	printf("%f\n", dnumber);
//	printf("%e\n", dnumber); //지수방식
//
//	return 0;
//}

//%10d는 값을 표현하되 10칸을 확보하고싶다는 의미, 공백이 앞으로(오른쪽 정렬)
//%-10d는 공백이 뒤로(왼쪽 정렬)

//#include <stdio.h>
//
//int main(void)
//{
//	char character = 'H'; // 한글자는 작은 따옴표를 써야함
//	int num = 548;
//	printf("%5c\n", character); // 폭 5칸, 오른쪽 정렬
//	printf("%-5c\n", character); // 폭 5칸, 왼쪽 정렬
//	printf("%10d\n", num); // 폭 10칸, 오른쪽 정렬
//	printf("% -10d\n", num); // 폭 10칸, 왼쪽 정렬
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	float fnum = 1.234567;
//	printf("%10f\n", fnum);
//	printf("%-10f\n", fnum);
//	printf("%10.3f\n", fnum); //소숫점 3째자리 반올림으로 표현
//	printf("%-10.3f\n", fnum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(50)); //4
//	printf("%d\n", sizeof(float)); //4
//	printf("%d\n", sizeof(3.14)); //8
//}




//scanf 함수
// → 표준입력장치(ex.키보드)로부터 값을 입력받아 프로그램 내로 가져올 때 사용하는 함수
// 파이썬의 input함수와 동일한 기능
// scanf의 f는 format의 약어 → 형식(서식)문자를 사용한다.

#define _CRT_SECURE_NO_WARNINGS
//비주얼 스튜디오가 못 쓰게 막은 함수이기 때문에 입력해주어야 함

//#include <stdio.h>
//
//int main(void)
//{
//	char character;
//	int inum;
//	float fnum;
//
//	scanf("%c", &character); //&character: character이 위치한 주소에 가서 그 공간에 입력한 내용을 저장
//	scanf("%d", &inum);
//	scanf("%f", &fnum);
//
//	printf("%c %d %f\n", character, inum, fnum);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, num3;
//	float fnum1, fnum2;
//
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	printf("입력된 정수들: %d %d %d\n", num1, num2, num3);
//	
//	printf("실수,정수,실수 차례대로 입력: ");
//	scanf("%f %d %f", &fnum1, &num1, &fnum2);
//	printf("입력된 값들: %.2f %d %.2f\n", fnum1, num1, fnum2);
//
//	return 0;
//}

//문제
//[화면실행결과]
//당신의 나이는?
//나의 나이는    살입니다.

//#include <stdio.h>
//
//int main(void)
//{
//	int inum;
//	printf("당신의 나이는? ");
//	scanf("%d", &inum);
//	printf("나의 나이는 %d살입니다.", inum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, num3;
//	printf("세 개의 정수 입력: ");
//	scanf("%o %x %d", &num1, &num2, &num3);
//	printf("입력된 정수들: %d %d %d\n", num1, num2, num3);
//	printf("입력된 정수들: %o %x %d\n", num1, num2, num3);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	printf(" %10.3f\n", 152.49861);
//	printf("you\tcan\tmake\tint\n");
//	printf("\"Everbody say \'hello\'!\"");
//
//	return 0;
//}

#include <stdio.h>
int main(void) {
	printf("%5s\n", "*");
	printf("%6s\n", "***");
	printf("%7s\n", "*****");
	printf("%8s\n", "*******");

	
	return 0;
}