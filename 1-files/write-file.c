#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int num;
    FILE *fp;
    fp = fopen("write-file.txt", "w");
    if (fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(fp, "%d", num);
    fclose(fp);
    return 0;
}