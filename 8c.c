#include <stdio.h>
#include <stdlib.h>

int* matrix_array_max(int** array, const int rows, const int column);
void print_max_matrix(int* array_max, int rows);


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
	matrix_array_max(array, rows, column);
	int* array_max;
	array_max =  matrix_array_max(array, rows, column);
	printf("\n");
	print_max_matrix(array_max, rows);
	
	for(int i = 0; i < rows; i++)
        {
                free(array[i]);
        }
        free(array);
	free(array_max);
	
	


	

	
}
	int* matrix_array_max(int** array, const int rows, const int column)
	{
		int* array_max = (int*)calloc(rows, sizeof(int));
	
		for(int i = 0; i < rows; i++)
		{
		int max = array[i][0];
			for(int j = 1; j < column; j++)
			{	
					
				if(array[i][j] > max)
				{

				    	max = array[i][j];
				}				
			}
			array_max[i] = max;
			
		}
		return array_max;
	       
	}
	
	void print_max_matrix(int* array_max, int rows)
	{
		for(int i = 0; i < rows; i++)
		{
			printf("max--> %i \n", array_max[i]);
		}
	}

