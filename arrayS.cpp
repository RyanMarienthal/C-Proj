// arraySum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

float A[3] = {7.6, 8.2, 9.6};
int A_SIZE = 3;
#include <iostream>
float* ARRAY_SUM(float* ARRAY, int SIZE) 
{	
	float SUM = 0;
	for (int i = 0; i < SIZE; i++)
	{
		SUM += ARRAY[i];
	}
	*ARRAY = SUM;
	return ARRAY;
}

int main()
{
	float* P_A = (float *)malloc(sizeof(float) * A_SIZE);
	*P_A = *ARRAY_SUM(A, A_SIZE);
	printf("% f", *P_A);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
