#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start;
    clock_t end;
    start = clock();
    char * ptr1 = ( char * ) malloc ( 1200 );
    char * ptr2 = ( char * ) malloc ( 1200 );
    free(ptr1);
    ptr1 = ( char * ) malloc ( 600 );
    free(ptr2);
    ptr2 = ( char * ) malloc ( 400 );
    char * ptr_array[1024];
    for(int i = 0; i < 1024; i++)
    {
        ptr_array[i] = ( char * ) malloc ( 1024 ); 
        ptr_array[i] = ptr_array[i];
    }
    for(int i = 0; i < 1024; i += 2)
    {
        free(ptr_array[i]);
    }
    end = clock();
    printf("Time Elapsed: %ld\n", end - start);
}