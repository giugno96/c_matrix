#include <malloc.h>

//This function returns a pointer to a matrix[rows][cols]
char **matAlloc(int rows, int cols, int dim)
{
	char **m = (char **)calloc(cols, sizeof(char *));
	int i;
	for(i = 0; i < rows; i++)
		m[i] = (char *)calloc(rows, dim);
	return m;
}
