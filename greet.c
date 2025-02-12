#include <stdio.h>
#include <stdlib.h>
int main(){
    char name[100];    
    printf("Enter Name: ");
    scanf("%99s", name);
    printf("Hello Good Morning %s!\n", name);
    return 0;
}