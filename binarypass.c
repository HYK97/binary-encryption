#include <stdio.h>
#include <windows.h>
void decryption();
void encryption();
int main()
{
	int enter;
	printf("ver 1.0 제작 김현용\n\n\n");
	printf("1. Encryption  2. Decryption  :: ");
	scanf_s("%d", &enter);
	if (enter == 1)
	{
		encryption();

	}
	else if (enter == 2)
	{
		decryption();

	}
	else
	{
		printf("Re-enter");
	}

	return 0;

}
void encryption() //암호화
{
	system("cls");
	char plaintext[10];
	char key[10];
	int plaintext1;
	int key1;
	int i;
	char end[10];

	printf("ver 1.0 제작 김현용\n\n\n");
	printf("Please enter plain text. ::");
	scanf_s("%d", plaintext1);
	printf("Enter key. ::  ");
	scanf_s("%d", key1);

	for (i = 0; i < 10; i++)
	{
		if () {// 이진수로 변환후 아스키코드표와 비교해서 0,1을 각각 char 변수에 입력하자
			end[i] = '0';
		}
		else if (strcmp(plaintext[i], key[i]) != 0)
		{
			end[i] = '1';
		}

	for (i = 0; i < 10; i++)
	{
		if (plaintext[i] && key == '\0')
			break;

		if (strcmp(plaintext[i], key[i])==0) {
			end[i] = '0';
		}
		else if (strcmp(plaintext[i], key[i]) !=0)
		{
			end[i] = '1';
		}

	}
	
	
}


void decryption() //복호화
{
	system("cls");
	printf("ver 1.0 제작 김현용\n\n\n");
	int password;
	int key;

	printf("Enter a password to decrypt. ::  ");
	scanf_s("%d", &password);
	printf("Enter key. ::  ");
	scanf_s("%d", &key);

	password = password^key;
	
	printf("Plain text :: %d",password);
	

}
/*
char* toBinary(int n) { // xor연산 
	char res[36];
	int i;
	for (i = 0; i <= 34; i++)
	if (i % 9 == 8)
	res[i] = ' ';
	if (n & 1 << (i - i / 9))
		res[i] = '1';
	else
		res[i] = '0';
	res[35] = 0;
	return res;
	printf("XOR연산 결과:%s\n", toBinary(rel3));

}*/

