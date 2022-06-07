#include<stdio.h>
#include<stdlib.h>

struct Numbers 
{
    long num1, num2, num3;
};

int main() 
{
    long num;
    struct Numbers number;
    FILE *fp;
    
    if((fp = fopen("data.bin", "wb")) == NULL)
    {
        printf("Error!");
        exit(1);
    }
    
    for(num=1;num<5;++num)
    {
        number.num1 = num;
        number.num2 = num*2;
        number.num3 = num*3;
        fwrite(&num, sizeof(num), 1, fp);
    }

    fclose(fp);
    return 0;
}
