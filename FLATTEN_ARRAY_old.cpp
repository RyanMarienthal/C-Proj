#include <iostream>
	int A_SIZE = 5;
	int B_SIZE = 3;
	int C_SIZE = 2;
	int D_SIZE = 3;
	int NESTED_ARRAY[4][5] = { { 1, 2, 3, 4, 5 }, { 4, 7, 9 }, { 2, 5 }, { 11, 19, 22 } };
	int NESTED_SIZES[4] = { A_SIZE, B_SIZE, C_SIZE, D_SIZE };
	int NUM_OF_ARRAYS = 4;
	const int ARRAY_MAX_SIZE = 5;
int* FLATTENED_SIZE = (int*)malloc(sizeof(int) * 1);
int* FLATTEN_DATA(int NESTED_A[][ARRAY_MAX_SIZE], int* NESTED_SIZES, int NUM_ARRAYS)
{
	int INT_TOTAL = 0;
	int POS = 0;
	for (int i = 0; i < NUM_ARRAYS; i++)
	{
		INT_TOTAL += NESTED_SIZES[i];
	}
	*FLATTENED_SIZE = INT_TOTAL;
	int* FLATTENED_BLOCK = (int*)malloc(sizeof(int) * INT_TOTAL);
	for (int i = 0; i < NUM_OF_ARRAYS; i++)
	{
		for (int j = 0; j < NESTED_SIZES[i]; j++)
		{
			FLATTENED_BLOCK[POS] = NESTED_A[i][j];
			POS += 1;
		}
	}
	return FLATTENED_BLOCK;
}

int main()
{
	int* C = FLATTEN_DATA(NESTED_ARRAY, NESTED_SIZES, NUM_OF_ARRAYS);
	for (int i = 0; i < *FLATTENED_SIZE; i++)
	{
		printf("%i", C[i]);
	}
	printf("\n");
	printf("%i", *FLATTENED_SIZE);

}