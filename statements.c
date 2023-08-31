#include <stdio.h>
int main()
{
    //IF STATEMENTS 
    int age;
    char grade;

    printf("Enter your age:\n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!\n");
    }
    else if(age == 0){
        printf("You cant signUp, you just born !\n");
    }
    else if(age < 0){
        printf("You havent been born yet!\n");
    }
    else{
        printf("You are too young to signUp\n");
    }

    //SWITCH STATEMENTS

    printf("Enter a letter grade: \n");
    scanf(" %c", &grade);

    switch (grade) {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    default:
    printf("Pls enter a valid value! \n");
        break;
    }

    return 0; 
}