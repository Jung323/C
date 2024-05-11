#define _CRT_SECURE_NO_WARNINGS

//입력값과 반환값이 모두 있는 경우
//입력값만 존재하는 경우
//반환값만 존재하는 경우
//입력값과 반환값이 모두 없는 경우

//ex)반환값 유무에 따른 함수 비교
//#include <stdio.h>
//
//void func1() //void형 함수이므로 반환값(return)이 없다. 
//{
//	printf("void형 함수는 돌려줄게 없음.\n");
//}
//
//int func2() //int형 함수이므로 반환값(return)이 있다
//{
//	return 100;
//}
//int main(void)
//{
//	int a;
//	func1(); //void형 함수를 호출한다
//	a = func2(); //int형 함수를 호출한다
//	printf("int형 함수에서 돌려준 값: %d\n", a);
//
//	return 0;
//}

//ex) 매개변수 전달 방법1: 값으로 전달
//#include <stdio.h>
//
//void func1(int a)
//{
//	a = a + 1; //a++
//	printf("전달받은 a: %d\n", a);
//}
//
//int main(void)
//{
//	int a = 10;
//	func1(a); //a값을 매개변수로 넘겨 함수 호출한다
//	printf("func1() 실행 후의 a: %d\n", a); //함수 호출 후 a값 출력
//
//	return 0;
//}

//ex) 매개변수 전달 방법2: 주소로 전달
//#include <stdio.h>
//
//void func1(int* a) //매개변수로 주솟값(포인터)를 받는다
//{
//	*a = *a + 1; //a가 가리키는 곳의 실제값+1을 수행한다
//	printf("전달받은 a: %d\n", *a); //a가 가리키는 곳의 실제값을 출력
//}
//
//int main(void)
//{
//	int a = 10;
//	func1(&a); //함수를 호출할 때 a의 주소를 전달한다
//	printf("func1() 실행 후의 a: %d\n", a); //함수 호출 후 a값 출력
//
//	return 0;
//}


// main 함수를 위쪽에 적기 위해 함수 선언만 먼저 함
//#include <stdio.h>
//
//int add(int a, int b); //add 함수의 원형(선언부)
//
//int main(void)
//{
//	int result;
//
//	result = add(3, 5); //add  함수의 호출
//	printf("함수가 반환한 값: %d\n", result);
//
//	return 0;
//}
//
//int add(int a, int b) //add 함수의 기능(정의부)
//{
//	return a + b;
//}


//ex) 매개변수(입력값)와 반환값(출력값)이 없는 사용자 정의 함수

//#include <stdio.h>
//
//void insa(); //함수 원형(선언부)
//
//int main(void)
//{
//	printf("사용자 정의 함수를 호출합니다.\n");
//	insa(); //사용자 함수 호출
//	
//	return 0;
//}
//
//void insa()
//{
//	printf("\n[insa() 함수 영역]\n");
//	printf("오늘 하루도 행복하세요!\n");
//}


//ex) 매개변수(입력값)만 있는 함수
//#include <stdio.h>
//
//void exchange(float a); //함수 원형(선언부)
//
//int main(void)
//{
//	float input;
//
//	printf("인치(inch)를 센티미터(cm)로 환산\n");
//	printf("인치 입력: ");
//	scanf("%f", &input);
//
//	exchange(input); //함수 호출
//
//	return 0;
//}
//
//void exchange(float a)
//{
//	float swap;
//	swap = a * 2.5399;
//	printf("\n[exchange() 함수 영역]\n");
//	printf("단위 환산: %.2f, inch: %.2fcm", a, swap);
//}


//ex) 반환값(리턴값, 결과값)만 있는 함수
//#include <stdio.h>
//
//char alpha(); //함수 원형(선언부)
//
//int main(void)
//{
//	char show;
//	printf("사용자 함수에서 입력한 알파벳 전달 \n");
//
//	show = alpha(); //함수 호출
//	printf("\n[main() 함수 영역]\n");
//	printf("전달받은 알파벳: %c\n", show);
//	printf("아스키 코드값: %d\n", show);
//
//	return 0;
//}
//
//char alpha() //사용자 함수 정의
//{
//	char ch;
//	printf("\n[alpha() 함수 영역]\n");
//	printf("알파벳 입력: ");
//	scanf("%c", & ch);
//
//	return ch;
//}

//ex) 매개변수와 반환값이 모두 있는 함수
//#include <stdio.h>
//
//int sum(int su); //함수 원형(선언부)
//
//int main(void)
//{
//	int input, result;
//	printf("1부터 입력받는 수까지 누적합계 산출\n");
//	printf("\n[main() 함수 영역]\n");
//	printf("어디까지 누적합계를 구할까요: ");
//	scanf("%d", &input);
//
//	result = sum(input); //함수 호출
//
//	printf("\n[main() 함수 영역]\n");
//	printf("1부터 %d까지 누적합계: %d\n", input, result);
//
//	return 0;
//}
//
//int sum(int su) //함수 정의
//{
//	int cnt, hap = 0;
//	printf("\n[sum() 함수 영역]\n");
//	printf("1부터 %d까지 누적합계 산출하여 반환 \n", su);
//
//	for (cnt = 1; cnt <= su; cnt++)
//		hap += cnt;
//
//	return hap;
//}


//#include <stdio.h>
//
//int getBigger(int n1, int n2) //함수 정의와 선언
//{
//	if (n1 > n2)
//		return n1;
//	else if (n1 < n2)
//		return n2;
//	else
//		return 0;
//}
//
//int main(void)
//{
//	int result; //반환값(결과)을 저장하는 변수
//
//	result = getBigger(3, 5); //함수 호출
//	printf("첫번째 결과: %d\n", result);
//	result = getBigger(8, 2); //함수 호출
//	printf("두번째 결과: %d\n", result);
//	result = getBigger(4, 4); //함수 호출
//	printf("세번째 결과: %d\n", result);
//
//	return 0;
//}

//#include <stdio.h>
//
//void guide()
//{
//	printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다.\n");
//	printf("또한 printNumber 함수를 통해 입력한 정수를 출력할 수도 있습니다. \n");
//}
//
//void printNumber(int num)
//{
//	printf("당신이 입력한 정수는 %d입니다. \n", num);
//}
//
//int inputNumber()
//{
//	int num;
//	printf("정수를 입력해주세요: ");
//	scanf("%d", &num);
//
//	return num;
//}
//
//int main(void)
//{
//	guide(); //함수 호출
//	int num = inputNumber(); //함수 호출: 반환값 저장
//	printNumber(num); //함수 호출
//	num = inputNumber(); //함수 호출
//	printNumber(num); //함수 호출
//
//	return 0;
//}



//지역 변수: 중괄호 내에 선언된 모든 변수
//함수의 매개변수도 지역변수 중 하나

//#include <stdio.h>
//
//int localFunc(int num)
//{
//	int result = 0; //지역 변수
//	return result + num;
//}
//
//int main(void)
//{
//	int num = 5;//지역 변수
//	int result = localFunc(num); //함수 호출
//
//	printf("결과:%d\n", result);
//
//	return 0;
//}

//#include <stdio.h>
//
//int number = 0; //전역 변수
//
//void printNumber(void)
//{
//	printf("전역 변수 number는 %d를 저장하고 있다.\n", number);
//	//함수 안에서 지역 변수가 있으면 지역변수를 받지만 없으면 함수 밖에서 전역변수를 받음
//}
//
//int main(void)
//{
//	int number = 3; //지역 변수
//	printf("지역 변수 number는 %d를 저장하고 있다.\n", number);
//	printNumber();
//
//	return 0;
//}
//

//ex) 지역 변수
//#include <stdio.h>
//
//void increaseNumber()
//{
//	int number = 0; //지역 변수
//	number++; 
//	printf("number: %d\n", number);
//}
//
//int main(void)
//{
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//
//	return 0;
//}



//static 변수: 최초로 메모리를 할당받은 후 프로그램이 종료할 때까지 소멸되지 않고 유지됨.
//지역변수: 해당 지역 내에서만 유효한 변수로 함수가 호출될 땜다 공간을 할당받았다가 함수의 실행문이 종료되면 소멸


//#include <stdio.h>
//
//void increaseNumber()
//{
//	static int number = 0; //static 지역변수
//	number++;
//	printf("number: %d\n", number);
//}
//
//int main(void)
//{
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//
//	return 0;
//} 

//#include <stdio.h>
//
//void calc(int a, int b)
//{	
//	int plus = a + b;
//	int minus = a - b;
//	int multiplication = a * b;
//	int division = a / b;
//	printf("%d + %d = %d\n", a, b, plus);
//	printf("%d - %d = %d\n", a, b, minus);
//	printf("%d * %d = %d\n", a, b, multiplication);
//	printf("%d / %d = %d\n", a, b, division);
//
//}
//
//int main(void)
//{
//	int a, b;
//	printf("첫번째 숫자를 입력하세요: ");
//	scanf("%d", &a);
//
//	printf("두번째 숫자를 입력하세요: ");
//	scanf("%d", &b);
//
//	calc(a, b);
//
//	return 0;
//}

//#include <stdio.h>
//int totalbetween(int a, int b)
//{
//	int i;
//	int total = 0;
//
//	for (i = a+1; i < b; i++)
//		total += i;
//	return total;
//}
//
//int main(void)
//{
//	int a, b;
//	printf("첫번째 숫자를 입력하세요: ");
//	scanf("%d", &a);
//	
//	printf("두번째 숫자를 입력하세요: ");
//	scanf("%d", &b);
//	int result = totalbetween(a, b);
//	printf("%d와 %d 사이의 정수의 총합은: %d",a,b,result);
//
//	return 0;
//}

#include <stdio.h>

void readArray(int* arr,int length)
{
	int i;
	printf("배열의 요소 읽어보기: [");

	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
		if (i + 1 < length)
			printf(", ");
		else
			printf("");
	}
	printf("]\n");
}

int main(void)
{
	int arr[3] = { 3,6,9 };
	readArray(arr, 3); //배열의 이름 arr(주소)를 포인터변수에 대입

	return 0;
}