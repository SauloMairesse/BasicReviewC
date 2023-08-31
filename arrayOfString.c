#include <stdio.h>
#include <string.h>

int main(){
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    
    //we cant directly change the values like thhis: 
    // cars[0] = "Tesla";
    // one way we could change to update is:
    strcpy(cars[0], "Tesla");

    int loopIteration = sizeof(cars)/sizeof(cars[0]);

    for (int i = 0; i < loopIteration; i++){
        printf("%s\n", cars[i]);
    }
    
    return 0; 
}