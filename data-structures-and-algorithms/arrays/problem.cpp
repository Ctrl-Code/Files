// ctrl-code: 2005311315

#include <iostream>
#include <climits>

int main()
{
    // std::cout << std::max(3, 5) << std::endl;

    int arr[5] = {0};
    // std::cout << INT_MAX;

    for (int i = 0; i != 5; ++i)
    {
        // std::cout << arr[i] << std::endl;
    }

    void printAddr(int *);
    int a = 5;
    std::cout << "address original variable " << &a << std::endl;
    printAddr(&a);
    return 0;
}

void printAddr(int *newArray)
{
    std::cout << std::endl << "address passed variable " << newArray<<std::endl;
    return;
}