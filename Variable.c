#include <stdio.h>

int main(){
    //Variable= Allocated space in memory to store a value.
    //          We refer to a variable's name to acccess the stored value.
    //          That variable now behaves as if it was the value it contains.
    //          BUT we need to declare what type of data we are storing
    
    int x; //declaration
    x = 123; //initialization 
    int y = 321; //declaration+inicialization

    int age = 22; //integer
    float gpa = 2.05; //floating point number
    char grade = 'C'; //single character  
    char name[] = "Saulo Davi"; //array of characters

    printf("Hello %s \n", name);    
    printf("You are %d years old \n", age);
    printf("Your averge grade is %c \n", grade);
    printf("Your gpa is %f \n", gpa);

    return 0;
}