#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 5
int main() {
int array[ ARRAY_SIZE ];
array[0] = 1;
array[1] = 2;
array[2] = 4;
array[3] = 8;
array[4] = 16;
int i;
for(i=0; i<ARRAY_SIZE; i++ ) {
printf( "array[%d] == %d\n", i, array[i] );
}
return EXIT_SUCCESS;
}