#include <stdio.h>

int main(){
    char name[25]; //bytes
    int age; 
   
    printf("What's your name?");
    // scanf("%s", name); // include white spaces 
    fgets(name, 25, stdin); //fgets(var, sizeVar, standard in point)

    printf("\nHello old are you ?");
    scanf("%d", age);

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);

    return 0;
}