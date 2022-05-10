#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int num;
    FILE *fp;

    if((fp = fopen("write-file.txt", "r")) == NULL)
    {
        printf("Error!");
        exit(1);
    }

    fscanf(fp, "%d", &num);
    printf("%d", num);
    return 0;
}