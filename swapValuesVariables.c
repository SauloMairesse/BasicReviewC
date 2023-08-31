#include <stdio.h>
#include <string.h>

int main(){
    char x[15]= "whater";
    char y[15] = "lemonade";
    char temp[15];

    // For string we can't do this:    
    // temp = x;
    // x = y;
    // y = temp;
    // Obs: there are some problens when you try use strcpy whith strings of diferent sizes 

    printf("before temp = %s\n", temp);
    printf("before x = %s\n", x);
    printf("before y = %s\n\n", y);

    strcpy(temp, x);
    printf("changing temp = %s\n", temp);

    strcpy(x, y);
    printf("changing x = %s\n", x);

    strcpy(y, temp);
    printf("changing y = %s\n\n", y);

    printf("just changed x = %s\n\n", x);

    printf("final values y = %s\n", y);
    printf("final values x = %s\n", x);

    return 0; 
}