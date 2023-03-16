#include "dynarray.h"

void dynarray_init(dynarray_t *const dynarr, int size, int growth)
{
    dynarr->size = size;
    dynarr->buffer = malloc(dynarr->size * sizeof(int));
    dynarr->fillLevel = 0;
    dynarr->growth = growth;
}

void dynarray_deinit(dynarray_t *const dynarr)
{
    free(dynarr->buffer);
}

void dynarray_write(dynarray_t *const dynarr, int data) //write 
{
    //TODO implement error handling and growth
    dynarr->buffer[dynarr->fillLevel] = data;

}

int dynarray_read(dynarray_t *const dynarr, int index) //read array element at a certain index
{
    if(index > dynarr->size-1)
    {
        //TODO error handling
    }
    else
    {
        return dynarr->buffer[index];   
    }
    
}
