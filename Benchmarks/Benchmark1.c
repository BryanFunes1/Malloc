#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start;
    clock_t end;
    start = clock();
    char *ptr1 = ( char* ) malloc ( 100000 );
    free(ptr1);
    char *ptr_array[2048];
    for(int i = 0; i < 2048; i++)
    {
        ptr_array[i] = ( char * ) malloc ( 1024 ); 
        ptr_array[i] = ptr_array[i];
    }
    for(int i = 0; i < 2048; i += 3)
    {
        free(ptr_array[i]);
    }
    char *ptr2 = ( char* ) malloc ( 100000 );
    free(ptr2);
    for(int i = 0; i < 2048; i++)
    {
        ptr_array[i] = ( char * ) malloc ( 1024 ); 
        ptr_array[i] = ptr_array[i];
    }
    for(int i = 0; i < 2048; i += 3)
    {
        free(ptr_array[i]);
    }
    end = clock();
    printf("Time Elapsed: %ld\n", end - start);
}