#include <stdio.h>
#include "vendor.h"

int main(void){
    int z = vendor_fibonacci(10);
    printf("answer: %d\n", z);
    return 0;
}