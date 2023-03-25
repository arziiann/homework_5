#include <stdio.h>
#include <stdlib.h>
void change(int** array, int column);

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
	
	change(array, column);
	for(int i = 0; i < rows; i++)
        {
                free(array[i]);
        }
        free(array);


	
}

void change(int** array, int column)
{	
	int kexc_i = 0;
	printf("\n");
	for(int j1 = 0; j1 < column; j1++)
	{
		for(int j2 = 0; j2 < column; j2++)
		{
			if(j1 + j2 == column - 1)
			{
				int tmp = array[kexc_i][j1];
				array[kexc_i][j1] = array[kexc_i][j2];
				array[kexc_i][j2] = tmp;
			}
		}
		kexc_i++;
	}
	for(int i = 0; i < column; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("%i ", array[i][j]);
		}

		printf("\n");
	}
	
}


