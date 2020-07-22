#include <iostream>

int main()
{
    int rows, cols;
    int m1BruteForceTotalSubmatrices(int, int);
    int m2BruteForceOptimisationTotalSubmatrices(int, int);

    std::cout << "Enter the number of rows and columns of the 2d array for which the number of sub-matrices possible needs to be found" << std::endl;
    std::cin >> rows >> cols;

    // BRUTE FORCE
    std::cout << "The total number of sub-matrices possible by BRUTE FORCE is " << m1BruteForceTotalSubmatrices(rows, cols) << std::endl;

    // OPTIMISATION OVER BRUTE
    std::cout<<"The total number of sub-matrices possible by OPTIMISATION OVER BRUTE FORCE is " <<m2BruteForceOptimisationTotalSubmatrices(rows,cols)<<std::endl;

    return 0;
}

int m1BruteForceTotalSubmatrices(int row, int col)
{

    int totalSubmatricesPossible = 0;

    for (int i = 0; i != row; ++i)
    {
        for (int j = 0; j != col; ++j)
        {

            // presentRow = pr; presentColumn = pc
            auto bruteForce = [](int currentRow, int currentCol, int maxRows, int maxCols) {
                int localSum = 0;

                for (int pr = currentRow; pr != maxRows; ++pr)
                {
                    for (int pc = currentCol; pc != maxCols; ++pc)
                    {
                        ++localSum;
                    }
                }

                return localSum;
            };

            totalSubmatricesPossible += bruteForce(i, j, row, col);
        }
    }

    return totalSubmatricesPossible;
}

// OPTMISATION OVER BRUTE FORCE
int m2BruteForceOptimisationTotalSubmatrices(int row, int col){
    int totalSubmatrices = 0;
    
    for(int i=0; i!=row;++i){
        for(int j=0;j!=col;++j){
            int currentRow = i+1;
            int currentCol = j+1;
            
            totalSubmatrices += (row-i)*(col-j);
        }
    }

    return totalSubmatrices;
}