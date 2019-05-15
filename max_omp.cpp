#include "pch.h"
#include <iostream>
#include <string>
#include <omp.h>
#include <time.h>

using namespace std;


int main()
{
    double arr[10];
    omp_set_num_threads(4);
    double max_val=0.0;
    int i;
    for( i=0; i<10; i++)
        arr[i] = 2.0 + i;

    #pragma omp parallel for reduction(max : max_val)
    for( i=0;i<10; i++)
    {
        printf("thread id = %d and i = %d", omp_get_thread_num(), i);
        if(arr[i] > max_val)
        {
            max_val = arr[i];   
        }
    }
   
    printf("\nmax_val = %f", max_val);
}