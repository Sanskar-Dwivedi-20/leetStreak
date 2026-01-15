#include <stdlib.h>

void build(int row, int numRows, int** triangle, int* colSizes) {
    if (row == numRows) {
        return;
    }

    colSizes[row] = row + 1;
    triangle[row] = (int*)malloc((row + 1) * sizeof(int));

    triangle[row][0] = 1;
    triangle[row][row] = 1;

    for (int j = 1; j < row; j++) {
        triangle[row][j] = triangle[row - 1][j - 1] + triangle[row - 1][j];
    }

    build(row + 1, numRows, triangle, colSizes);
}

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;

    int** triangle = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    build(0, numRows, triangle, *returnColumnSizes);

    return triangle;
}
