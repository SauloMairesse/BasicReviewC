#include <stdio.h>

void birthday(char name[], int age){
    printf("\n Happy Birthday to you %s !", name);
    printf("\n Congratulations for your %d years old !", age);
    printf("\n Go to work now !\n");
};

char square(double x){
    double result = x * x;
    
    return result;
};

int main() {
    char name[] = "Saulo";
    int age = 21;

    birthday(name, age);

    //test square function
    double x = square(3.14);
    printf("%lf", x);
    
    return 0;
}