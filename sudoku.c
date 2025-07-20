#include <stdio.h>

#define N 9

// Function to print the Sudoku board
void printBoard(int board[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

// Check if it's safe to put num in board[row][col]
int isSafe(int board[N][N], int row, int col, int num) {
    int x, y;

    // Check row
    for (x = 0; x < N; x++) {
        if (board[row][x] == num)
            return 0;
    }

    // Check column
    for (x = 0; x < N; x++) {
        if (board[x][col] == num)
            return 0;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            if (board[startRow + x][startCol + y] == num)
                return 0;
        }
    }

    return 1; // safe to place
}

// Solve Sudoku using backtracking
int solveSudoku(int board[N][N]) {
    int row, col, found = 0;

    // Find empty location
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (board[row][col] == 0) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    // No empty cell left
    if (!found)
        return 1;

    int num;
    for (num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board))
                return 1;

            board[row][col] = 0; // backtrack
        }
    }

    return 0; // trigger backtracking
}

int main() {
    int board[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board)) {
        printf("Solved Sudoku:\n");
        printBoard(board);
    } else {
        printf("No solution exists.\n");
    }

    return 0;
}

