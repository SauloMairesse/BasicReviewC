#include <stdio.h>

int main() {
    //array = a data structure that can store many alues of the same data type

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    // double prices[5]; 
    // prices[0] = 5.0;
    // prices[1] = 10.0;
    // prices[2] = 15.0;
    // prices[3] = 20.0;

    printf("$%.2lf\n", prices[3]);

    // sizeof returns size_t you need to use %zu for the format string instead of %d. The type of unsigned integer of size_t can vary (depending on platform) and may not be long unsigned int everywhere, which is covered in the draft C99 standard section 6.5.3.4 The sizeof operator paragraph 4:
    // The value of the result is implementation-defined, and its type (an unsigned integer type) is size_t, defined in (and other headers).
    // error => printf("%zu bytes \n", sizeof(prices));

    int lengthOfArray = sizeof(prices)/sizeof(prices[0]);

    printf("%zu bytes \n", sizeof(prices));

    for (int i = 0; i < lengthOfArray; i++)
    {
        printf("%.2lf \n", prices[i]);
    }

    //2D Array Dimension
    // Array[rows][collumns]
    int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2Dimension

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int collumns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    printf("\n%d\n", rows);
    printf("%d\n", collumns);

    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < collumns; j++){
            printf(" %d", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}