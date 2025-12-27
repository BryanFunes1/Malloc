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
    char * ptr3 = ( char * ) malloc ( 1200 );
    char * ptr4 = ( char * ) malloc ( 1200 );
    char * ptr5 = ( char * ) malloc ( 1200 );
    char * ptr6 = ( char * ) malloc ( 1200 );
    free(ptr2);
    free(ptr4);
    free(ptr6);
    ptr2 = ( char * ) malloc ( 1000 );
    ptr4 = ( char * ) malloc ( 800 );
    ptr6 = ( char * ) malloc ( 200 );
    char * ptr7 = ( char * ) malloc ( 3600 );
    char * New = ( char * ) realloc ( ptr7, 1200 );
    char * ptr8 = ( char * ) malloc ( 2400 );
    free(New);
    free(ptr8);
    free(ptr1);
    char * ptr_array[2024];
    for(int i = 0; i < 2024; i++)
    {
        ptr_array[i] = ( char * ) malloc ( 100 ); 
        ptr_array[i] = ptr_array[i];
    }
    for(int i = 0; i < 2024; i++)
    {
        free(ptr_array[i]);
    }
    end = clock();
    printf("Time Elapsed: %ld\n", end - start);
}