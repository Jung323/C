#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	char character;
//	while (1)
//	{
//		printf("알파벳을 입력하세요.(대문자 입력 시 종료): ");
//		scanf(" %c", &character);
//
//		if (character >= 65 && character <= 90)
//		{`
//			printf("%c 입력했습니다. 종료합니다.\n", character);
//			break; // 대문자를 입력하면 종료
//		}
//		printf("%c 입력했습니다.\n", character);
//
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0 || i%7==0) {
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 5; i > 0;i--)
//	{
//		printf("숫자 %d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num,i;
//	printf("원하는 숫자를 입력하시오: ");
//	scanf("%d", &num);
//
//	for (i = num; i > 0; i--)
//	{
//		printf("숫자 %d\n", i);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int start, end,temp;
//	int dan, mul;
//	printf("첫번째 숫자를 입력하세요: ");
//	scanf("%d", &start);
//	printf("두번째 숫자를 입력하세요: ");
//	scanf("%d", &end);
//
//	if (start > end)
//	{
//		temp = start;
//		start = end;
//		end = temp;
//	}
//	for (dan = start; dan <= end; dan++) {
//		for (mul = 1; mul <= 9; mul++)
//		{
//			printf("%d X %d = %d\n", dan, mul, dan * mul);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	char sign;
//
//	printf("피연산자 1: ");
//	scanf("%d", &num1);
//	printf("연산자: ");
//	scanf(" %c", &sign);
//	printf("피연산자 2: ");
//	scanf("%d", &num2);
//
//	switch (sign)
//	{
//	case '+':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 + num2);
//		break;
//	case '-':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 + num2);
//		break;
//	case '*':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 * num2);
//		break;
//	case '/':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 / num2);
//		break;
//	case '%':
//		printf("%d %c %d = %d\n", num1, sign, num2, num1 % num2);
//		break;
//	}
//	return 0;
//}


//배열

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//
//	printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[4]);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int odd[3];
//	int even[5] = { 2,4,6,8,10 };
//
//	odd[0] = 1;
//	odd[1] = 3;
//	odd[2] = 5;
//
//	printf("%d %d %d\n", odd[0], odd[1], odd[2]);
//	
//	//for문을 통한 배열요소(값) 출력
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", even[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arr[10];
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("정수 입력: ");
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);	//각 벼열요소 안의 값을 반복문으로 출력
//	}
//
//	return 0;
//}

//배열문제1) 길이가 4인 int형 배열 nums를 선언하여라.
//선언과 동시에 {!,2,3,4}로 초기화를 하여라.
//반복문(for)을 활용하여 nums의 요소(값)들을 출력하여라

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arr[4] = { 1,2,3,4 };
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//배열문제2) 정수(int)형 5개의 요소를 가진 빈 배열 nums를 생성하고,
//반복문을 통해 배열 요소에 차례대로 1,2,3,4,5를 담고,
//반복무을 이용해서 요소들을 차례대로 출력하여라.
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arr[5];
//
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = i + 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//문자열 표현

//#include <stdio.h>
//
//int main(void)
//{
//	char greet[] = "Hello, Guys!";
//	printf("%s\n", greet);
//	
//	//sizeof(자료형 또는 변수): 크기를 알려주는 연산자
//	printf("1차원 배열 greet의 길이는: %d\n", sizeof(greet)); 
//결과: 13 (문장 맨 끝에는 null 문자가 들어감)
// 
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char mind[30] = "I Love Programming!";
//	printf("%s\n", mind);
//
//	mind[7] = '\0'; // 널 문자 대입
//	printf("%s\n", mind);
//
//	mind[1] = '\0';
//	printf("%s\n", mind);
//
//	//맨 처음 만나는 널까지만 출력됨.
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[50];
//
//	printf("문자열을 입력하세요: ");
//	scanf("%s", str); // 배열이름은 &를 넣지 않음, 배열 이름이 곧 주소이기 때문에 주소를 의미하는 &는 넣지 않음
//
//	printf("입력된 문자열: %s\n", str);
//
//	return 0;
//}

//ex) 성적 입력, 60점 미만 F학점인 학생의 수, 그 외 학생들의 평균
//#include <stdio.h>
//
//int main(void)
//{
//	int i, F = 0, total = 0, score[10];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d번째 학생의 성적 입력: ", i + 1);
//		scanf("%d", &score[i]);
//
//		if (score[i] < 60)
//			F++; // 60점 미만인 학생 카운트 +1
//		else
//			total += score[i];
//	}
//	printf("성적 평균: %.1lf\n", (double)total / (10 - F));
//	printf("F학점인 학생 수: %d\n", F);
//
//	return 0;
//}

//배열문제3) int형 값들을 요소로 하는 배열 arr1에는 {1,2,3,4}를 담고,
//arr2에는 {5,6,7,8}을 담아라.
//두 배열의 각 자리의 합을 새로운 배열 arr3에 담아서 반복문을 이용해서 출력

#include <stdio.h>

int main(void)
{
	int arr1[4] = {1,2,3,4};
	int arr2[4] = {5,6,7,8};
	int arr3[4];
	int i;
	for (i = 0; i < 4; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d ", arr3[i]);
	}
}