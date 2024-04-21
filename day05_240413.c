#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//	printf("나이를 입력하세요: ");
//	scanf("%d", &age);
//	if (age >= 6 && age < 13)
//		printf("요금은 500원입니다.\n");
//	else if (age >= 13 && age < 19)
//		printf("요금은 900원입니다.\n");
//	else if (age>=19 && age<65)
//		printf("요금은 1250원입니다.\n");
//	else
//		printf("요금은 무료입니다.\n");
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//
//
//	int kor = 88, eng = 90, mat= 58, soc=81,sci=72;
//	int avg = (kor + eng + mat + soc + sci) / 5;
//	printf("평규은 %d점입니다.\n",avg);
//
//	switch (avg/10)
//	{
//	case 10: // 100점
//	case 9:	// 90~99점
//		printf("학점은 A입니다.\n");
//		break;
//	case 8:	// 80~89점
//		printf("학점은 B입니다.\n");
//		break;
//	case 7: // 70~79점
//		printf("학점은 C입니다.\n");
//		break;
//	case 6: // 60~69점
//		printf("학점은 D입니다.\n");
//		break;
//	default: // 0~59점
//		printf("학점은 F입니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	
//	while (num != -1)
//	{
//		printf("숫자를 입력하세요 (-1 입력 시 종료): ");
//		scanf("%d", &num);
//		if (num == -1)
//			printf("종로합니다.");
//		else
//			printf("%d을(를) 입력하셨네요.\n", num);
//	}
//	return 0;
//}

// do~while문
//do {
//	// 반복 실행하고자 하는 문장
//} while (조건);

//#include <stdio.h>
//int main(void)
//{
//	int num = -1;
//	do {
//		printf("-1 입력 시 종료: "); // 적어도 한번은 수행하는 코드
//		scanf("%d", &num);
//	} while (num != -1);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int number = 0;
//	int sum = 0; //합계 (0으로 초기화)
//
//	do {
//		number++; //number를 1 증가
//		sum += number; //누적합계
//	} while (number < 10);
//
//	printf("1~10까지의 합: %d", sum);
//
//	return 0;
//}


// ex) 1~10까지의 수 중에서 3의 배수 출력
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	while (i <=10)
//	{
//		if (i % 3 == 0)
//			printf("i의 값: %d\n", i);
//		i++;
//	}
//	return 0;
//}

// ex) 구구단(2단)
//#include <stdio.h>
//int main(void)
//{
//	int i = 1;
//
//	while (i < 10)
//	{
//		printf("2 X %d = %d\n", i, 2 * i);
//		i++;
//	}
//	return 0;
//}

//원하는 단을 입력받아 구구단
//#include <stdio.h>
//int main(void)
//{
//	int dan;
//	printf("구구단을 외우자! 몇 단? ");
//	scanf("%d", &dan);
//	int i = 1;
//
//	while (i<10)
//	{
//		printf("%d X %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//	return 0;
//}

// 구구단 전체 출력하기

//#include <stdio.h>
//int main(void)
//{
//	int dan = 2;
//	int i = 1;
//	while (dan < 10)
//	{
//		i = 1;
//		while (i < 10)
//		{
//			printf("%d X %d = %d\n", dan, i, dan * i);
//			i++;
//		}
//		dan++;
//		printf("\n");
//	}
//	return 0;
//}

// for문
//#include <stdio.h>
//int main(void)
//{
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("i is %d now\n",i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	for (; num != -1;)
//	{
//		printf("숫자를 입력하세요 (-1 입력 시 종료): ");
//		scanf("%d", &num);
//	}
//	return 0;
//}

// ex) 구구단(2단)

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//
//	for (i = 1; i < 10; i++)
//	{
//		printf("2 X %d = %d\n", i, 2 * i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int dan;
//	printf("구구단을 외우자! 몇 단? ");
//	scanf("%d", &dan);
//
//	int i = 1;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d X %d = %d\n", dan, i, dan * i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int dan, i;
//	for (dan = 2; dan < 10; dan++)
//	{
//		for (i = 1; i < 10; i++)
//		{
//			printf("%d ", dan * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//for 문제1) 1부터	10까지의 수를 차례대로 출력해보기(가로로)

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//for 문제2) 1부터 10까지의 수 중 짝수만 출력하기(가로로)

//#include <stdio.h>
//
//int main(void)
//{
//	int i ;
//	for (i = 2; i <= 10; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//for 문제3) 1부터 10까지의 합계를 구해보자
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sum=0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 10까지의 합계 = %d", sum);
//	return 0;
//}

//for 문제3) 정수 2개를 입력받아서 처음값부터 끝값까지의 합계구하기

//#include <stdio.h>
//
//int main(void)
//{
//	
//	int i,s, f;
//	int sum = 0;
//	printf("처음 값을 입력하세요: ");
//	scanf("%d", &s);
//
//	printf("끝 값을 입력하세요: ");
//	scanf("%d", &f);
//
//	for (i = s;i <= f;i++)
//	{
//		sum += i;
//	}
//	printf("%d에서부터 %d까지의 수들의 합: %d", s, f, sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	
//	while (1)
//	{
//		printf("-1 입력 시 종료: ");
//		scanf("%d", &num);
//		if (num == -1)
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	for (num = 1; num <= 5; num++)
//	{
//		if (num == 3)
//			continue; //num 3이 되면 반복문의 처음으로 돌아간다.
//		printf("%d\n", num);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for (i = 1; i <= 100;  i++)
//	{
//		if (i % 6 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int i = 1;
	int num, sum = 0;
	printf("마지막 숫자를 입력하세요: ");
	scanf("%d", &num);

	while (i<=num)
	{
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 합계: %d", num, sum);
}