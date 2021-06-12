#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char *argv[])
{
    char cmd[100]; //buffer to hold cp command  
    char path[] = "/home/faculty/skoss/cse121/c.martin44";  
    sprintf(cmd, "cp %s %s", argv[1], path);  
    system(cmd); // gives the cmd command to the operating system for execution     
    return 0; 
}

