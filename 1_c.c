#include <stdio.h>
#include <stdlib.h>
int sum_matrix_main_diagonal(int** array, const int rows, const int column);


int main()
{  
	int rows = 0;
 	puts("To describe rows");
 	scanf("%i", &rows);

 	int column = 0;
	puts("To describe column");
	scanf("%i", &column);
  
	int** array = (int**)calloc(rows, sizeof(int*));
	for(int i = 0; i < rows; i++)
	{
		array[i] = (int*)calloc(column, sizeof(int));
 	}  

	
	printf("\n");
 	for(int i = 0; i < rows; i++)
	{
 		for(int j = 0; j < column; j++)
		{
			array[i][j] = 1;
			scanf("%i", &array[i][j]);
		 }
	
	printf("\n");
 	}

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("%i ", array[i][j]);
		}
	printf("\n");
	}
	printf("the sum of the elements of the main diagonal %i", sum_matrix_main_diagonal(array, rows, column));
}


	


int sum_matrix_main_diagonal(int** array, const int rows, const int column)
{
		int sum = 0;
		printf("\n");
		for(int i = 0; i < rows; i++)
		{	
			
			for(int j = 0; j < column; j++)
			{
				if(i == j)
				{	
						
					printf("%i ", array[i][j]);
					sum += array[i][j];
				}
				
				else
				{
					printf("  ");
				}
			}
			printf("\n");
    		
 		}
		return sum;
	}

 

