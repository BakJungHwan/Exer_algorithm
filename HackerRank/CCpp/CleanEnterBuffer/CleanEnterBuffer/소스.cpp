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
		else if ('a' <= ch && 'z' >= ch) // �ҹ��� a�� z���̿� ���ϴ°��
			printf("�Է��Ͻ� ���ڴ� ���ĺ� �ҹ����Դϴ�. \n");
		else if ('A' <= ch && 'Z' >= ch) // �빮�� A�� Z���̿� ���ϴ°��
			printf("�Է��Ͻ� ���ڴ� ���ĺ� �빮���Դϴ�. \n");
		else if ('0' <= ch && '9' >= ch)
			printf("�Է��Ͻ� ���ڴ� �ƶ��Ƽ����Դϴ�. \n");
		else
			printf("Ư�����ڸ� �Է��ϼ̱���.\n");

		ClearEnterBuffer(); // ���ۻ��� ���� �Է��� ������
	}
	printf("���α׷��� �����մϴ�. \n");
	return 0;
}