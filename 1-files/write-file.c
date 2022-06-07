#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int num;
    int num2;
    int sum;
    FILE *fp;
    fp = fopen("write-file.txt", "w");
    if (fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a number :");
    scanf("%d",&num2);

    sum = num + num2;

    fprintf(fp, "The sum of %d and %d is %d", num, num2, sum);
    fclose(fp);
    return 0;
}
