#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int  HowManySeven(int number)
//{
//	int i;
//	int howmany = 0;
//	for (i = number; i < number + 200; i++)
//	{
//		if (i % 7 == 0) //7의 배수라면
//			howmany++; 
//	}
//	return howmany;
//}
//
//int main(void)
//{
//	int n, result;
//	printf("정수를 입력하세요: ");
//	scanf("%d", &n);
//	result = HowManySeven(n);
//	printf("%d와 %d 사이의 7의 배수는 %d개입니다.", n, n + 200, result);
//
//	return 0;
//}

//#include <stdio.h>
//
//void convertCentiToMeter(int height)
//{
//	double convertResult;
//	convertResult = (double)height / 100;
//	printf("결과: %.2lf m\n", convertResult);
//}
//
//int main(void)
//{
//	int height;
//	printf("키를 cm단위로 입력하세요: ");
//	scanf("%d", &height);
//	convertCentiToMeter(height);
//
//	return 0;
//}

//#include <stdio.h>
//
//void swapNumber(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	printf("함수 안에서 확인한 결과, num1: %d, num2: %d\n", num1, num2);
//}
//
//int main(void)
//{
//	int number1 = 3, number2 = 99;
//	swapNumber(number1, number2);
//	printf("함수 호출 완료 후 확인한 결과, number1: %d, number2: %d\n", number1, number2);
//	return 0;
//}

//#include <stdio.h>
//
//void swapNumber(int* ptr1, int* ptr2)
//{
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//	printf("함수 안에서 확인한 결과, num1: %d, num2: %d\n", *ptr1, *ptr2);
//}
//
//int main(void)
//{
//	int number1 = 33, number2 = 99;
//	swapNumber(&number1, & number2); //각 변수의 주소를 인자로 전달
//	printf("함수 호출 완료 후 확인한 결과, number1: %d, number2: %d\n", number1, number2);
//	return 0;
//}



//재귀 호출 함수
//함수가 몸체 내에서 자기 자신을 호출하는 것

//#include <stdio.h>
//
//void sayHello()
//{
//	printf("Hello!\n");
//	sayHello(); //자기 자신을 호출(재귀 호출)
//}
//
//int main(void)
//{
//	sayHello();
//
//	return 0;
//}

//#include <stdio.h>
//
//int sayHello(int count)
//{
//	printf("hello!\n");
//
//	if (count != 3)
//		sayHello(count + 1);
//
//	return 0;
//}
//
//int main(void)
//{
//	sayHello(1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int getDiffByValue(int number1, int number2)
//{
//	int result;
//	result = number1 - number2;
//	//결과 값이 음수인 경우 -1을 곱하여 양수로 만든다.
//	result = result >= 0 ? result : result * -1;
//
//}
//
//int callDiffByRef(int* number1, int* number2)
//{
//	if (*number1 < *number2)
//	{
//		int temp = *number1;
//		*number1 = *number2;
//		*number2 = temp;
//	}
//}
//
//int main(void)
//{
//	int number1 = 3, number2 = 5;
//	//두 수의 차를 구하는 함수 호출
//	printf("두 수의 차는: %d\n", getDiffByValue(number1, number2));
//
//	//더 큰 수를 number1에 저장하는 함수 호출
//	callDiffByRef(&number1, &number2);
//	printf("number1: %d, number2: %d\n", number1, number2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int recursiveSum(int n)
//{
//	if (n == 0)
//		return 0;
//	return n + recursiveSum(n - 1); //재귀 함수 호출
//}
//int main(void)
//{
//	int n;
//	printf("n을 입력하세요: ");
//	scanf("%d", &n);
//	int result = recursiveSum(n);
//	printf("1부터 n까지의 합: %d\n", result);
//
//	return 0;
//}

//난수(Random Number)

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int ranNum = rand(); //난수를 발생시켜 반환
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", ranNum % 10);
//		ranNum = rand();
//	}
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	srand((unsigned int)time(NULL)); //시드(seed)값 설정
//	int ranNum = rand() % 10 + 1; //1~10으로 범위를 한정시키기 위해
//	int guess;
//
//	while (1)
//	{
//		printf("난수를 맞춰보세요(1~10사이): ");
//		scanf("%d", &guess);
//
//		if (guess == ranNum)
//		{
//			printf("정답입니다! 프로그램을 종료합니다.\n");
//			break;
//		}
//		else
//		{
//			printf("틀렸습니다! 재시도!!!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	srand((unsigned int)time(NULL)); //시드값 설정
//	int computer = rand() % 3 + 1; //1~3의 값
//	int me;
//
//	printf("가위 1, 바위 2, 보 3\n 당신의 선택은: ");
//	scanf("%d", &me);
//
//	if (me == 1)
//	{
//		printf("당신은 가위, ");
//		printf(computer == 1 ? "컴퓨터 난수는 가위, 비겼습니다!" :
//			computer == 2 ? "컴퓨터 난수는 바위, 졌습니다!" :
//			"컴퓨터 난수는 보, 이겼습니다!");
//	}
//	else if (me == 2)
//	{
//		printf("당신은 바위, ");
//		printf(computer == 1 ? "컴퓨터 난수는 가위, 이겼습니다!" :
//			computer == 2 ? "컴퓨터 난수는 바위, 비겼습니다!" :
//			"컴퓨터 난수는 보, 졌겼습니다!");
//	}
//	else if (me == 3)
//	{
//		printf("당신은 보, ");
//		printf(computer == 1 ? "컴퓨터 난수는 가위, 졌습니다!" :
//			computer == 2 ? "컴퓨터 난수는 바위, 이겼습니다!" :
//			"컴퓨터 난수는 보, 비겼습니다!");
//	}
//	printf("\n\n");
//}
//
//int main(void)
//{
//	game();
//	game();
//	return 0;
//}



//ex) 포인터의 크기
//#include <stdio.h>
//
//int main(void)
//{
//	int* ptr1 = NULL;
//	short* ptr2 = NULL;
//	char* ptr3 = NULL;
//	double* ptr4 = NULL;
//
//	printf("int형 포인터 크기: %d\n", sizeof(ptr1));
//	printf("short형 포인터 크기: %d\n", sizeof(ptr2));
//	printf("char형 포인터 크기: %d\n", sizeof(ptr3));
//	printf("double형 포인터 크기: %d\n", sizeof(ptr4));
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 3;
//	int* ptr1 = &num;
//	int** dptr = &ptr1;
//	int* ptr2;
//
//	printf("%u %u\n", ptr1, *dptr);
//	printf("%d %d\n", num, **dptr);
//	ptr2 = *dptr;
//	*ptr2 = 9;
//	printf("%d %d\n", num, **dptr);
//
//	return 0;
//}

//ex) 더블 포인터 예제
#include <stdio.h>

int main(void)
{
	int i = 100; //정수 변수 선언
	int* p = &i; //포인터 p는 i를 가리킨다.
	int** q = &p; //더블 포인터 q는 p를 가리킨다.

	printf("i: %d\n", i);

	*p = 200; //p를 통하여 i에 200을 저장
	printf("i: %d\n", i);

	**q = 300; //q를 통하여 i에 300을 저장
	printf("i: %d\n", i);

	return 0;

}