#include <stdio.h>

#include "dynarray.h"

int main()
{

    /*
    test case for dynamic array object of size 10 and growth of 1
    number 5 is written to the object
    it is then read from the object
    object is deinitalized
    */
    dynarray_t arr;

    dynarray_init(&arr,10,1);
    dynarray_write(&arr, 5);
    printf("%d",dynarray_read(&arr,0));
    dynarray_deinit(&arr);
    return 0;
}