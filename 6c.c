#include <stdio.h>
#include <stdlib.h>
int matrix_max_element(int** array, const int rows, const int column);

int main()
{  
	int rows = 0;
	puts("rows = ");
	scanf("%i", &rows);

	int column = 0;
	puts("column = ");
	scanf("%i", &column);
  
	
	int** array = (int**)calloc(rows, sizeof(int*));

	for(int i = 0; i < rows; i++)
	{
		array[i] = (int*)calloc(column, sizeof(int));
	}  
	
	printf("\n");
       // input element	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < column; j++)
		{
			 scanf("%i", &array[i][j]);
    		}
	
 	 	printf("\n");
    	}
       //print 2D arr
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("%i ", array[i][j]);
		}

		printf("\n");
	}
	
	printf("The max matrix element %i", matrix_max_element(array, rows, column));
	
	for(int i = 0; i < rows; i++)
	{	
		free(array[i]);
	}
	free(array);
	return 0;
}
	int matrix_max_element(int** array, const int rows, const int column)
	{
		int max = 0;
		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < column; j++)
			{
				if(array[i][j] > max)
				{
					max = array[i][j];
				}
			}
		}
	
		return max;
	}


