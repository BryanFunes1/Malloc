#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start;
    clock_t end;
    start = clock();
    int* array1 = (int*) calloc(5, sizeof(int));
    int* array2 = (int*) calloc(5, sizeof(int));
    int* array3 = (int*) calloc(5, sizeof(int));
    int* array4 = (int*) calloc(5, sizeof(int));
    free(array1);
    free(array3);
    int * ptr1 = ( int * ) malloc ( 1200 );
    int * ptr2 = ( int * ) malloc ( sizeof(int) );
    int * New = ( int * ) realloc ( ptr1, sizeof(int) );
    int * New2 = ( int * ) realloc ( ptr2, 1200 );
    free(array2);
    free(array4);
    char *ptr3 = ( char* ) malloc ( 100000 );
    free(ptr3);
    char *ptr_array[2048];
    for(int i = 0; i < 2048; i++)
    {
        ptr_array[i] = ( char * ) malloc ( 1024 ); 
        ptr_array[i] = ptr_array[i];
    }
    end = clock();
    printf("Time Elapsed: %ld\n", end - start);
}