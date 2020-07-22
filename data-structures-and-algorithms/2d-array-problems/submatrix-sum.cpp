#include <iostream>

int const N = 10;

void displayMatrix(int array[][N], int lX, int lY, int bX, int bY)
{

    for (int i = lX; i <= bX; ++i)
    {
        for (int j = lY; j <= bY; ++j)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{

    int arr[N][N], m, n;
    int m1BruteForceMatrixSum(int[][N], int, int);
    int m2BruteForceOptimisation(int[][N], int, int);
    int m3FinalOptimisation(int [][N],int,int);

    // take input size of matrix
    std::cout << "Enter the matrix size...(M x N)...(max " << N << " x " << N << ")" << std::endl;
    std::cin >> m >> n;
    std::cout << std::endl;

    // INPUT MATRIX
    for (int i = 0; i != m; ++i)
    {
        std::cout << "Enter the elements of row " << i + 1 << std::endl;
        for (int j = 0; j != n; ++j)
        {
            std::cout << "Enter the element at column " << j + 1 << " " << std::endl;
            std::cin >> arr[i][j];
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    // displaying the matrix entered
    std::cout << "The matrix entered is" << std::endl;
    displayMatrix(arr, 0, 0, m - 1, n - 1);
    std::cout << std::endl;

    int bruteForceMatrixSum = m1BruteForceMatrixSum(arr, m, n);
    std::cout << "The sum of elements of the sub-matrices formed by BRUTE FORCE is " << bruteForceMatrixSum << std::endl;

    int bruteForceOptimisationSum = m2BruteForceOptimisation(arr, m, n);
    std::cout << "The sum of elements of the sub-matrices formed by OPTIMISATION over BRUTE FORCE is " << bruteForceOptimisationSum << std::endl;

    int finalOptimisationSum = m3FinalOptimisation(arr, m, n);
    std::cout << "The sum of elements of the sub-matrices formed by FINAL OPTIMISATION over ABOVE is " << finalOptimisationSum << std::endl;

    return 0;
}

// COMPLEXITY   O(n^6)
int m1BruteForceMatrixSum(int arr[][N], int setRow, int setCol)
{

    // Calculating the combined matrix sum => BRUTE FORCE ALGO
    int sum = 0;
    int matrixFormedSum;

    // ltX = left top X; ltY = left top Y; rbX = right bottom X; rbY = right bottom Y
    for (int ltX = 0; ltX != setRow; ++ltX)
    {
        for (int ltY = 0; ltY != setCol; ++ltY)
        {
            for (int rbX = ltX; rbX != setRow; ++rbX)
            {
                for (int rbY = ltY; rbY != setCol; ++rbY)
                {
                    // local matrix sum
                    matrixFormedSum = 0;

                    // std::cout<<"Elements are ";
                    for (int i = ltX; i != rbX + 1; ++i)
                        for (int j = ltY; j != rbY + 1; ++j)
                            matrixFormedSum += arr[i][j];

                    // add the local matrix sum to the combined sum
                    sum += matrixFormedSum;
                }
            }
        }
    }

    return sum;
}

// COMPLEXITY   O(n^4) AND EXTRA SPACE COMPLEXITY
int m2BruteForceOptimisation(int arr[][N], int setRow, int setCol)
{
    // we will create an equivalent 2d cumulative sum matrix
    int carr[N][N];

    // first we create row-wise cumulative sum array and then column-wise cumulative sum array
    int cumulativeSumInOneDirection;

    // row wise cumulative sum of the original array
    for (int i = 0; i != setRow; ++i)
    {
        cumulativeSumInOneDirection = 0;
        for (int j = 0; j != setCol; ++j)
        {
            cumulativeSumInOneDirection += arr[i][j];
            carr[i][j] = cumulativeSumInOneDirection;
        }
    }

    // displayMatrix(carr, 0, 0, setRow - 1, setCol - 1);
    // std::cout<<std::endl;

    // column wise work on the CUMULATIVE ARRAY
    for (int j = 0; j != setCol; ++j)
    {
        cumulativeSumInOneDirection = 0;
        for (int i = 0; i != setRow; ++i)
        {
            cumulativeSumInOneDirection += carr[i][j];
            carr[i][j] = cumulativeSumInOneDirection;
        }
    }

    // displayMatrix(carr, 0, 0, setRow - 1, setCol - 1);

    // so now we have cumulative sum ready. So we show the sum of all elements in all sub-matrices
    int sumOfAllTheSubmatricesElements = 0;
    for (int x1 = 0; x1 != setRow; ++x1)
    {
        for (int y1 = 0; y1 != setCol; ++y1)
        {
            for (int x2 = x1; x2 != setRow; ++x2)
            {
                for (int y2 = y1; y2 != setCol; ++y2)
                {
                    // std::cout<<"The local matrix formed is as"<<std::endl;
                    // displayMatrix(arr,x1,y1,x2,y2);

                    // sum of current matrix formed is as
                    int localMatrixFormedSum = carr[x2][y2] -
                                               (y1 - 1 < 0 ? 0 : carr[x2][y1 - 1]) -
                                               (x1 - 1 < 0 ? 0 : carr[x1 - 1][y2]) +
                                               ((x1 - 1 < 0 || y1 - 1 < 0) ? 0 : carr[x1 - 1][y1 - 1]);

                    // std::cout<<"The local matrix sum is as "<< localMatrixFormedSum<<std::endl;

                    sumOfAllTheSubmatricesElements += localMatrixFormedSum;
                }
            }
        }
    }

    return sumOfAllTheSubmatricesElements;
}

// COMPLEXITY   O(n^2) AND NO EXTRA SPACE COMPLEXITY
int m3FinalOptimisation(int arr[][N],int setRow,int setCol){
    
    int sum = 0, totalSubMatrices;
    // here we find the number of occurences of each element in the submatrix it can be a part of
    for(int i=0;i!=setRow;++i){
        for(int j=0;j!=setCol;++j){
            
            // total submatrices possible for which the coordinate can act as top left or bottom right are
            totalSubMatrices = (i+1)*(j+1)*(setRow - i)*(setCol -j); //top lefts possible * bottom rights possible
            sum += (totalSubMatrices * arr[i][j]); // contribution of it added to the sum
        }
    }

    return sum;
}