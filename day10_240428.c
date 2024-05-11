#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	char googoo[4][9];
//	int i, j;
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 9; j++)
//		{
//			googoo[i][j] = (i + 2) * (j + 1);
//			printf("%-4d ", googoo[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];
//	int i, max, min, total = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("NUM%d: ", i + 1);
//		scanf("%d", &arr[i]);
//
//		if (i == 0)
//		{
//			max = arr[i];
//			min = arr[i];
//			//0번째 값을 최댓값, 최솟값으로 규정
//		}
//		else
//		{
//			if (arr[i] > max) max = arr[i];
//			if (arr[i] < min) min = arr[i];
//			//서로 비교 후 최댓값, 최솟값을 다시 지정
//		}
//		total += arr[i]; //합계 누적
//	}
//	printf("최댓값: %d\n최솟값: %d\n총합계: %d\n", max, min, total);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[8];
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("NUM%d: ",i+1);
//		scanf("%d", &arr[i]);
//	}
//	printf("홀수: ");
//	for (i = 0; i < 8; i++)
//	{
//		if (arr[i] % 2 == 1)
//			printf("%-3d", arr[i]);
//	}
//	printf("\n");
//	printf("짝수: ");
//	for (i = 0; i < 8; i++)
//	{
//		if (arr[i] % 2 == 0)
//			printf("%-3d", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char word[30];
//	int length=0;
//	int i;
//	int isPalindroms; //1이면 회문 ,0이면 회문이 아님
//	
//	printf("문자열 입력: ");
//	scanf("%s", word);
//
//	while (word[length] != '\0')
//		length++;
//
//	//문자열 개수의 절반만큼 반복 구문 실행
//	for (i = 0; i <= length / 2; i++)
//	{
//		if (word[i] != word[length - i - 1])
//		{
//			isPalindroms = 0;
//			break;
//		}
//		isPalindroms = 1;
//	}
//	printf(isPalindroms ? "동일합니다.\n" : "동일하지 않습니다.\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char good[] = "Good!";
//	char* bad = "Bad!";
//	printf("%s %s \n", good, bad);
//
//	//배열 기반의 문자열 변수
//	good[0] = 'H';
//
//	//포인터 기반의 문자열 변수
//	bad = "New Bad!";
//
//	printf("%s %s \n", good, bad);
//
//	return 0;
//}

//문자 단위 입출력 함수
//getchar 함수: 키보드로부터 하나의 문자를 입력받아 입력 데이터를 반환해주는 표준 입력 함수
//putchar 함수: 사용자로부터 문자형 또는 정수형 데이터를 전달받아 전달된 문자 정보를 출력하는 표준 출력 함수

//#include <stdio.h>
//int main(void)
//{
//	int ch1, ch2;
//
//	ch1 = getchar(); //한 글자씩 입력
//	ch2 = getchar();
//
//	putchar(ch1);//한 글자씩 출력
//	putchar(ch2);
//
//	return 0;
//}

//EOF(End Of File) : 문자를 입력할 떄 입력이 종료되었음을 나타냄

//#include <stdio.h>
//int main(void)
//{
//	int ch;
//	while (1) //무한 반복
//	{
//		ch = getchar();
//
//		//입력한 문자가 EOF라면 입력 종료 (ctrl+z 입력 시 종료)
//		if (ch == EOF)
//			break;
//		putchar(ch);
//	}
//	return 0;
//}


//문자열 단위 입출력 함수
//#include <stdio.h>
//int main(void)
//{
//	char ch[30];
//	gets(ch); //scanf와 달리 공백도 문자로 인식
//	puts(ch); //puts함수는 Enter를 가지고 있다. 자동으로 줄 바꿈
//	printf("이 문자열은 다음 줄에서 출력됩니다.\n");
//
//	return 0;
//}


//문자열 처리 함수
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[50] = "apple is good";
//	char str2[50] = "berry is good";
//	char str3[50];
//	// 각 문자열의 길이 출력
//	printf("str1의 길이: %d, str2의 길이: %d\n", strlen(str1), strlen(str2));
//
//	// str1의 내용 전체를 str3에 복사
//	strcpy(str3, str1);
//
//	// str1의 내용 중 다섯 글자를 str2에 복사
//	strncpy(str2, str1, 5);
//
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[50] = "Michael ";
//	char str2[50] = "Michael ";
//
//	//str1에 문자열 이어붙이기
//	strcat(str1, "Bolton");
//	printf("%s\n", str1);
//
//	//str2에 7개의 문자 붙이기
//	strncat(str2, "Jackson Five", 7);
//	printf("%s\n", str2);
//
//	//str1과 str2의 비교
//	printf("비교 결과: %d\n", strcmp(str1, str2));
//
//	//str1과 str2의 앞의 7개의 문자만 비교
//	printf("비교 결과: %d\n", strncmp(str1, str2, 7));
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char name1[30], name2[30];
//
//	gets(name1); //빈칸(공백)을 포함해서 문자열을 입력받음
//	gets(name2);
//
//	if (strcmp(name1, name2) == 0)
//		printf("같습니다.");
//	else
//		printf("같지 않습니다.");
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//
//int main(void)
//{
//	char str1[30], str2[30];
//	gets(str1);
//	gets(str2);
//
//	if (strlen(str1) > strlen(str2))
//		printf("%s\n%s", str1,str2);
//	else
//		printf("%s\n%s", str2, str1);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char value[50];
//	int i;
//	int total = 0;
//	printf("문자열 입력: ");
//	gets(value);
//
//	for (i = 0; i < strlen(value); i++)
//	{
//		if (value[i] >= 48 && value[i] <= 57)
//			total += value[i] - 48;
//	}
//
//	printf("숫자의 합은: %d\n", total);
//
//	return 0;
//
//}


#include <stdio.h>

//사용자 정의 함수 선언
int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int result;

	result = add(3, 5); //사용자 정의 함수 호출
	printf("함수가 반환한 값: %d\n", result);

	return 0;

}