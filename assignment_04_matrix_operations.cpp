
}
void readMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

void transpose(int matrix[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void addMatrices(int a[10][10], int b[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[10][10], int b[10][10], int m, int n, int p, int result[10][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    // ----- PART A: Transpose -----
    int rowsA, colsA;
    int matrixA[10][10], transposedA[10][10];

    cout << "PART A - Transpose a Matrix" << endl;
    cout << "Enter number of rows: ";
    cin >> rowsA;
    cout << "Enter number of columns: ";
    cin >> colsA;
    readMatrix(matrixA, rowsA, colsA);

    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrixA, rowsA, colsA);

    transpose(matrixA, rowsA, colsA, transposedA);
    cout << "Transposed Matrix:" << endl;
    displayMatrix(transposedA, colsA, rowsA);

    // ----- PART B: Add Two Matrices -----
    int rowsB, colsB;
    int matrixB1[10][10], matrixB2[10][10], sumResult[10][10];

    cout << "\nPART B - Add Two Matrices" << endl;
    cout << "Enter number of rows: ";
    cin >> rowsB;
    cout << "Enter number of columns: ";
    cin >> colsB;

    cout << "Enter first matrix:" << endl;
    readMatrix(matrixB1, rowsB, colsB);
    cout << "Enter second matrix:" << endl;
    readMatrix(matrixB2, rowsB, colsB);

    addMatrices(matrixB1, matrixB2, rowsB, colsB, sumResult);
    cout << "\nSum Matrix:" << endl;
    displayMatrix(sumResult, rowsB, colsB);

    // ----- PART C: Multiply Two Matrices -----
    int m, n, p;
    int matrixC1[10][10], matrixC2[10][10], productResult[10][10];

    cout << "\nPART C - Multiply Two Matrices" << endl;
    cout << "Enter rows of Matrix A: ";
    cin >> m;
    cout << "Enter columns of Matrix A (rows of Matrix B): ";
    cin >> n;
    cout << "Enter columns of Matrix B: ";
    cin >> p;

    cout << "Enter Matrix A:" << endl;
    readMatrix(matrixC1, m, n);
    cout << "Enter Matrix B:" << endl;
    readMatrix(matrixC2, n, p);

    multiplyMatrices(matrixC1, matrixC2, m, n, p, productResult);
    cout << "\nProduct Matrix:" << endl;
    displayMatrix(productResult, m, p);

    return 0;
}