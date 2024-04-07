# define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	int num1;
//	printf("값을 입력하세요 : ");
//	scanf("%d", &num1);
//	printf("입력 값 : %d", num1);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int id, password;
//	printf("아이디와 패스워드를 4개의 숫자로 입력하세요.\n");
//	printf("id:____\b\b\b\b"); //\b: 커서를 뒤로 움직이게 하는 제어 문자
//	scanf("%d", &id);
//	printf("password:____\b\b\b\b");
//	scanf("%d", &password);
//	printf("입력된 아이디는 \"%d\"이고, 패스워드는 \"%d\"입니다.\n", id, password);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int num1 = 3, num2 = 4;
//
//	num1 += 3; // num = num1 + 3
//	num2 *= 4; //num2 = num2 * 4
//
//	printf("num1 += 3의 결과: %d\n", num1);
//	printf("num2 *= 4의 결과: %d\n", num2);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 10, b = 11;
//	printf("a == b: %d\n", a == b);
//	printf("a > b: %d\n", a > b);
//	printf("a < b: %d\n", a < b);
//	printf("a >= b: %d\n", a >= b);
//	printf("a <= b: %d\n", a <= b);
//	printf("a != b: %d\n", a != b);
//	// 참이면 1,거짓이면 0이 출력
//	return 0;
//}

//전위(Prefix), 후위(Postfix)연산자
//전위: ++num,--num
//후위: num++,num--

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 10;
//	
//	printf("a : %d\n", a); //10
//	printf("a : %d\n", ++a); //11, 증가 후 출력
//	printf("a : %d\n", a); //11
//
//	printf("b : %d\n", b);//10
//	printf("b : %d\n", b++);//10
//	printf("b : %d\n", b);//11
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 3, num2 = 5;
//
//	int result = num1++ + num2 * 3; // 곱셈-덧셈-대입-증가(후위)
//	printf("연산 결과: %d\n", result);
//	printf("num1 : %d\n", num1);
//	printf("num2 : %d\n", num2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	num++;
//
//	printf("%d\n",num); //11
//	printf("%d\n", num+3);//14
//	printf("%d\n", ++num); //12
//	printf("%d\n", num++); //12
//	printf("%d\n",num); //13
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 27;
//
//	printf("%d\n", num1 >= 5);
//	printf("%d\n", num1 != 5); 
//
//	printf("%d\n", num1 >= 27); //1
//	printf("%d\n", num1 == 27);
//
//	printf("%d\n", num1 < 30);
//	printf("%d\n", num1 <= 27);
// 
// return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int korean = 86;
//	int english = 75;
//	int math = 88;
//	int society = 60;
//	int science = 96;
//
//	int total = korean + english + math+ society + science;
//	double avg = (double) total / 5;
//
//	printf("평균점수는 %.2lf입니다.", avg);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 5;
//	printf("num의 값: %d\n", ++num);
//	printf("num의 값: %d\n", num++);
//	printf("num의 값: %d\n", ++num);
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 20, num2 = 10;
//	int result;
//
//	result = 1 && 1; // 참, 0을 제외한 나머지 수는 모두 참
//	printf("result1 : %d\n", result);
//
//	result = num1 == 20 && num2 == 10;
//	printf("result2 : %d\n", result);
//
//	result = num1 > num2 && num1 == num2;
//	printf("result3 : %d\n", result);
//
//	return 0;
//}

//삼항조건식
//#include <stdio.h>
//
//int main(void)
//{
//	int num, absolute;
//	printf("정수 입력: ");
//	scanf("%d", &num);
//
//	absolute = num > 0 ? num : num * -1; // 삼항 조건 연산자
//	printf("절댓값 : %d\n", absolute);
//
//	return 0;
//
//}

//비트연산자
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 3; //00000011(2진수)
//	int b = 5; //00000101
//
//	//같은 자리의 값을 비교
//	printf("3 & 5 = %d\n", a & b); //00000001 (둘이 같으면 1)
//	printf("3 | 5 = %d\n", a | b); //00000111 (둘 중 하나라도 1 있는거는 1)
//	printf("3 ^ 5 = %d\n", a ^ b); //00000110 ( 둘이 다르면 1)
//	printf("~3 = %d\n", ~a); // 11111100 (원래 값의 반대)
//
//	return 0;
//
//}

//시프트 연산자

//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	a = 1; //00000001
//	b = a << 2;//0000100, 왼쪽으로 두 칸 이동
//	printf("%d << 2 = %d\n", a, b);
//	b = a >> 2;//00000000, 오른쪽으로 두 칸 이동
//	printf("%d >> 2 = %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//
//	printf("나이를 입력하세요: ");
//	scanf("%d", &age);
//	int fee = age >= 20 ? 1250 : 800;
//	
//	printf("당신의 나이는 %d이며, 요금은 %d원입니다!", age, fee);
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int age, height; // 나이와 키
	int canRide;
	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("키를 입력하세요: ");
	scanf("%d", &height);

	canRide = age >= 12 && height >= 120;
	printf(canRide ? "탑승가능":"탑승불가능");

	return 0;

}