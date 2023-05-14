#include <stdio.h>

void disTypeSize()
{
	printf("sizeof(char)        = %d\n", sizeof(char));
	printf("sizeof(short)       = %d\n", sizeof(short));
	printf("sizeof(int)         = %d\n", sizeof(int));
	printf("sizeof(long)        = %d\n", sizeof(long));
	printf("sizeof(long long)   = %d\n", sizeof(long long));
	printf("sizeof(float)       = %d\n", sizeof(float));
	printf("sizeof(double)      = %d\n", sizeof(double));
	printf("sizeof(long double) = %d\n", sizeof(long double));
}

void swapWithNoThirdVar(int *firstNum, int *secondNum)
{
	// not consider overflow
	/*
	*firstNum = *firstNum + *secondNum;  // eg:f = 8, s = 5
	*secondNum = *firstNum - *secondNum;  // eg:f = 8, s = 3
	*firstNum = *firstNum - *secondNum;  // eg:f = 5, s = 3
	*/

	// consider the case of overflow
	*firstNum ^= *secondNum;
	*secondNum ^= *firstNum;
	*firstNum ^= *secondNum;
}

void swapByThirdVar(int *firstNum, int *secondNum)
{
	int tmpNum = *firstNum;
	*firstNum = *secondNum;
	*secondNum = tmpNum;
}

void disBinary(char num)
{
	int bitNum = 8;

	while(bitNum--)
	{
		if((1<<bitNum)&num)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

		if(0 == bitNum%4)
		{
			printf(" ");
		}
	}
	putchar(10);
}

void disLowerAndUpperLetter()
{
	for(char ch = 'a'; ch <= 'z'; ch++)
	{
		// lower letter
		printf("%d-->%c\n", ch, ch);
		// upper letter
		printf("%d-->%c\n", ch-' ', ch-' ');
	}
	putchar(10);
}

void disCharOfDigital()
{
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	putchar(10);

	for(char ch = 0; ch < 10; ch++)
	{
		printf("%c\n", ch + '0');
	}
	putchar(10);

	for(char ch = '0'; ch <= '9'; ch++)
	{
		printf("%d-->%c\n", ch, ch);
	}
}

void disEscapeCharacter()
{
	printf("\t123\n");
	printf("abcd\r123\n");
	printf("abcd\01234\n");  // ?
	printf("%%%d\n", 10);  // %10
	printf("%% \b%d\n", 10);  // %10

	printf("==========\n");
	printf("\"\n");
	printf("\\\n");
	printf("%%\n", '%');

	printf("==========\n");
	printf("I like \126 number restaurant\n");
	printf("I like \12 6number restaurant\n");
	printf("I like \xa 6number restaurant\n");

	printf("==========\n");
	//printf("%c\n", 'abcd');
}

#define PiBase 3.14
#define Pi 3.1415926F
#define LongPi 3.1415926L

void disConstant()
{
	// macro
	printf("sizeof(PiBase) = %d\n", sizeof(PiBase));  // double type, 8 Bytes
	printf("sizeof(Pi)     = %d\n", sizeof(Pi));  // float type, 4 Bytes
	printf("sizeof(LongPi) = %d\n", sizeof(LongPi));  // long double type, 16 Bytes


	printf("==========\n");
	// digital
	printf("sizeof(0)   = %d, sizeof(0.0F)  = %d\n", sizeof(0), sizeof(0.0F));  // int 4 Bytes, float 4 Bytes
	printf("sizeof(0L)  = %d, sizeof(0.0)   = %d\n", sizeof(0L), sizeof(0.0));  // long int 8 Bytes, double 8 Bytes
	printf("sizeof(0L)  = %d, sizeof(0.0L)  = %d\n", sizeof(0L), sizeof(0.0L));  // long int 8 Bytes, long double 16 Bytes
	printf("sizeof(0LL) = %d, sizeof(0.0L)  = %d\n", sizeof(0LL), sizeof(0.0L));  // long long int 8 Bytes, long double 16 Bytes
	printf("sizeof(long)           = %d\n", sizeof(long));
	printf("sizeof(long long)      = %d\n", sizeof(long long));
	printf("sizeof(float)          = %d\n", sizeof(float));
	printf("sizeof(double)         = %d\n", sizeof(double));
	printf("sizeof(long double)    = %d\n", sizeof(long double));
	
	printf("==========\n");
	// form
	float f1 = 4.23;
	float f2 = 0.15;
	float f3 = .56;
	float f4 = 78.;
	float f5 = 0.0;

	double d1 = 2.3e1;
	double d2 = 500e-2;
	double d3 = .5E3;
	double d4 = 4.5E0;
	double d5 = 2.5E3L;

	// other
	// note:conver to int
	printf("sizeof('a') = %d\n", sizeof('a'));

	printf("sizeof(0)    = %d\n", '0');
	printf("sizeof('\\0') = %d\n", '\0');

}

int main()
{
	//disTypeSize();

/*
	int numOne = 3;
	int numTwo = 5;
	printf("numOne = %d, numTwo = %d\n", numOne, numTwo);
	swapByThirdVar(&numOne, &numTwo);
	printf("numOne = %d, numTwo = %d\n", numOne, numTwo);
*/

	// disBinary(1);
	// disBinary(2);
	// disBinary(127);
	// disBinary(128);
	// disBinary(254);
	// disBinary(255);
	// disBinary(-1);
	// disBinary(-2);

/*
	printf("----------\n");
	for(unsigned char ch = 0; ch < 128; ch++)
	{
		printf("%d-->%c\t", ch, ch);
		if(0 == ch % 32 && ch != 0)
		{
			putchar(10);
		}
	}
	putchar(10);
*/

	//disLowerAndUpperLetter();

	//disCharOfDigital();

	//disEscapeCharacter();

	disConstant();

	return 0;
}