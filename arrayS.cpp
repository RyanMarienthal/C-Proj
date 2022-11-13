float A[3] = {7.6, 8.2, 9.6};
int A_SIZE = 3;
#include <iostream>
float ARRAY_SUM(float* ARRAY, int SIZE) 
{	
	float SUM = 0;
	for (int i = 0; i < SIZE; i++)
	{
		SUM += ARRAY[i];
	}
	return SUM;
}

int main()
{
	float* P_A = (float *)malloc(sizeof(float) * A_SIZE);
	*P_A = ARRAY_SUM(A, A_SIZE);
	printf("% f", *P_A);

}
