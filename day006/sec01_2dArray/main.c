#include <stdio.h>

int main1()
{
	int arrF[10];  // int[10] arrF
	int arr[3][4];  // int[4] arr[3], T arr[3]: arr[0], arr[1], arr[2]

	printf("sizeof(arr)    = %d\n", sizeof(arr));
	printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));

	printf("sizeof(int[3] [4]) = %d\n", sizeof(int[3] [4]));

	return 0;
}

int main()
{
	// 1. full init
	/*
	int arr1[3][4] = {{1, 2, 3, 4},
					{5, 6, 7, 8},
					{9, 10, 11, 12}};
	*/

	// 2. not init
	//int arr2[3][4];

	// 3. partially init
	//int arr3[3][4] = {{1, 2}, {5, 6}, {9, 10}};

	// 4. excess range
	//int arr4[3][4] = {{1, 2}, {5, 6}, {9, 10}, {111, 222}};  // warning

	// 5. not assign size init
	int arr5[][4] = {{1, 2}, {5, 6}, {9, 10}, {111, 222}};

	

	for (int i = 0; i < sizeof(arr5)/sizeof(arr5[0]); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", arr5[i][j]);
		}

		putchar('\n');
	}

	return 0;
}