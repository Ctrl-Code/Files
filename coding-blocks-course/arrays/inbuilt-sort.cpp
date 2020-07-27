#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    // int arr[7] = {1, 4, 2, 5, 8, 2, 3};
    // sort(arr,arr+7);

    std::array<int, 7> arr = {1, 4, 2, 5, 8, 2, 3};
    sort(arr.begin(), arr.end(), compare);

    // std::cout<<arr.size();

    for (int i = 0; i != 7; ++i)
        std::cout << arr[i] << " ";
    return 0;
}