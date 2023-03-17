#include <iostream>
#include <vector>

std::vector<std::vector<int>> buildMatrix(int rows, int cols) {
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));

    // Initialize first two columns with 1's
    for (int i = 0; i < rows; i++) {
        matrix[i][0] = 1;
        matrix[i][1] = 1;
    }

    // Fill the rest of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 2; j < cols; j++) {
            matrix[i][j] = matrix[i][j - 1] + matrix[i][j - 2];
        }
    }

    return matrix;
}

int main() {
    // Example usage:
    int rows = 5;
    int cols = 7;
    auto matrix = buildMatrix(rows, cols);

    // Display the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
