#include <stdio.h>
#define ROWS 5
#define COLS 5

// Function to display the grid
void displayGrid(int grid[ROWS][COLS]) {
	int i,j;
    for ( i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Declare and initialize 2D grid to 0
    int grid[ROWS][COLS] = {0};
    
    // Set some example values
    grid[1][1] = 1;
    grid[3][2] = 5;
    grid[4][4] = 9;
    
    // Display the grid
    printf("2D Grid:\n");
    displayGrid(grid);
    
    return 0;
}
