#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * hello(char* name){
    char*value=(char *)malloc(9+strlen(name));
    sprintf(value,"hello, %s.",name);
    return value;
}
void main()
{ 
    printf("%s\n",hello("world"));
    printf("\n");
}
