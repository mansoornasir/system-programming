#include<stdio.h>
#include<time.h>

void func_name() {
    printf("Function started\n");
    printf("Press any key to stop the function\n");
    for(;;)
    {
        if(getchar()) {
            break;
        }
    }
    printf("Functions stopped\n");
}

int main() {
    clock_t t;
    t = clock();
    func_name();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}