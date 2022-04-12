#include<stdio.h>
#include<stdlib.h>

struct Numbers 
{
    int num1, num2, num3;
};

int main() 
{
    int num;
    struct Numbers number;
    FILE *fp;
    
    if((fp = fopen("data.bin", "rb")) == NULL)
    {
        printf("Error!");
        exit(1);
    }
    
    for(num = 1; num < 5; ++num)
    {
        fread(&num, sizeof(struct Numbers), 1, fp);
        printf("%d %d %d\n", number.num1, number.num2, number.num3);
    }

    fclose(fp);
    return 0;
}