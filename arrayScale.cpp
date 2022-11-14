#include <iostream>
float A[6] = { 5.6, 0.11, 00, 00, 9.0000001, 15.1000};
int A_SIZE = 6;
float* SCALE(float* ARRAY_IN, int ARRAY_IN_SIZE, int SCALAR)
{
	float* S_ARRAY = (float*)malloc(sizeof(float)*ARRAY_IN_SIZE);
	
	for (int i = 0; i < ARRAY_IN_SIZE; i++)
	{	
		S_ARRAY[i] = ARRAY_IN[i] * SCALAR;
	}
	return S_ARRAY;
}
float* FILTER(float* ARRAY_IN, int ARRAY_IN_SIZE) {
	float* FILTER_OUT = (float*)malloc(sizeof(float) * ARRAY_IN_SIZE);
	float SUM = 0;
	int ABV_AVG = 0;
		for (int i = 0; i<2*ARRAY_IN_SIZE; i++)
		{
			if (i < ARRAY_IN_SIZE) {
				SUM += ARRAY_IN[i];
			}
			else if(ARRAY_IN[i-ARRAY_IN_SIZE]>(SUM/ARRAY_IN_SIZE))
			{
				ABV_AVG = ABV_AVG+1;
				FILTER_OUT[ABV_AVG - 1] = ARRAY_IN[i - ARRAY_IN_SIZE];
			}
		
			
		}
		float* FINAL_OUT = (float*)malloc(sizeof(float) * ABV_AVG);
		for(int i =0;i<ABV_AVG; i++)
			FINAL_OUT[i] = FILTER_OUT[i];
		free(FILTER_OUT);
		
	return FINAL_OUT;
}
int main()
{
	float* C = FILTER(A, A_SIZE);
	for (int i = 0; i < A_SIZE; i++) 
	{
		//printf("%f", A[i]);
		//printf("\n");
		printf("%f", C[i]);
		printf("\n");
	}
	//for (int i = 0; i < A_SIZE; i++)
	//	{
	//		//printf("%f", A[i]);
	//		//printf("\n");
	//		printf("%f", FILTER_OUT[i]);
	//		printf("\n");
	//		printf("%f", FINAL_OUT[i]);
	//		printf("\n");
	//	}
}
