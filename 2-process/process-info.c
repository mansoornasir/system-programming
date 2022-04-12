#include<stdio.h>
#include<unistd.h>

int main() 
{
    int proc_id, par_proc_id;
    proc_id = getpid();
    par_proc_id = getppid();

    printf("Process ID: %d\n", proc_id);
    printf("Parent Process ID: %d\n", par_proc_id);
}