#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
int numberOfArguments=argc;
char *argument1=argv[0];
char *argument2=argv[1];
char *argument3=argv[2];

printf("Number of Arguments :%d\n",numberOfArguments);
printf("Argument 1 is the program name : %s\n",argument1);
printf("Argument 2 is the command line  argument : %s\n",argument2);
printf("Argument 3 is the command line  argument : %s",argument3);
    return 0;
}
