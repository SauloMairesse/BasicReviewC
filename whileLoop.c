#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = repeats a section of code possibly unlimited times.
    // While some condition remains true 
    // a while loop might not execute at all

    char name[25];
    printf("\nWhat's your name ?\n");
    fgets(name, 25, stdin);
    name[strlen(name) -1] = '\0';

    while (strlen(name) == 0)
    {
        printf("You did not enter your name");
        printf("\nWhat's your name ?\n");
        fgets(name, 25, stdin);
        name[strlen(name) -1] = '\0';
    }
    
    printf("Hello %s\n", name);

    // DO WHILE  = checks a condition, THEN executes a block of code if condition is ture
    // do while loop = always executes a block of code once, Then checks a condition

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number > 0) {
            sum += number;
        }
    } while (number > 0);
    
    printf("%d\n", sum);

    return 0;
}
