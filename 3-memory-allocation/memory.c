#include<stdio.h>
#include<stdlib.h>

int main() {

    int* ptr;
    int num, sum = 0;

    num = 8;
    printf("We have %d elements to allocate memory to \n", num);

    ptr = (int*)malloc(num*sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed");
    }
    else {
        printf("Memory Allocation successful.");
    }

    // free(ptr)

    for(int i=0; i<num; i++) {
        ptr[i] = i+1;
    }

    printf("Now we will extract 8 elements from the pointer");
    for(int i=0; i < num; i++) {
        printf("%d\n", ptr[i]);
    }
}