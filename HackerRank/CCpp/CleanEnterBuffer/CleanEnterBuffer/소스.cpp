#include <stdio.h>

void ClearEnterBuffer(void)
{
	while (getchar() != '\n')
	{
		//int k = 0;
		//++k;
	}
}
int main(void)
{
	int ch;
	while (1)
	{
		ch = getchar();

		if (ch == EOF)
			break;
		else if ('a' <= ch && 'z' >= ch) // 소문자 a와 z사이에 속하는경우
			printf("입력하신 문자는 알파벳 소문자입니다. \n");
		else if ('A' <= ch && 'Z' >= ch) // 대문자 A와 Z사이에 속하는경우
			printf("입력하신 문자는 알파벳 대문자입니다. \n");
		else if ('0' <= ch && '9' >= ch)
			printf("입력하신 문자는 아라비아숫자입니다. \n");
		else
			printf("특수문자를 입력하셨군요.\n");

		ClearEnterBuffer(); // 버퍼상의 엔터 입력을 지워줌
	}
	printf("프로그램을 종료합니다. \n");
	return 0;
}