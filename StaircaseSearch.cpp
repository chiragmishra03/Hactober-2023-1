#include <iostream>
#include <vector>

// Function to perform staircase search
bool staircaseSearch(std::vector<std::vector<int>>& matrix, int target) {
    int rows = matrix.size();
    if (rows == 0) return false;
    int cols = matrix[0].size();

    int row = 0;
    int col = cols - 1;  // Start from the top-right corner

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            std::cout << "Element " << target << " found at position (" << row << ", " << col << ").\n";
            return true;
        } else if (matrix[row][col] > target) {
            col--;  // Move left
        } else {
            row++;  // Move down
        }
    }

    std::cout << "Element " << target << " not found in the matrix.\n";
    return false;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target = 8;

    if (staircaseSearch(matrix, target)) {
        std::cout << "Element " << target << " is present in the matrix.\n";
    } else {
        std::cout << "Element " << target << " is not present in the matrix.\n";
    }

    return 0;
}
