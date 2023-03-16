#ifndef DYNARRAY_H
#define DYNARRAY_H


typedef struct
{
    int *buffer;
    int size;
    int fillLevel;
    int growth;

} dynarray_t;

void dynarray_init(dynarray_t *const dynarr, int size, int growth);
void dynarray_deinit(dynarray_t *const dynarr);
void dynarray_write(dynarray_t *const dynarr, int data);
int dynarray_read(dynarray_t *const dynarr, int index);


#endif /* DYNARRAY_H */