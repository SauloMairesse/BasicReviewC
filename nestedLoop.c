#include <stdio.h>

int main(){
    //nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    //clear the buf

    printf("\nEnter a symbol to use: \n");
    scanf(" %c", &symbol);
    

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf(" %d ", j);
        }

        printf("\n");
    }

    return 0;
}