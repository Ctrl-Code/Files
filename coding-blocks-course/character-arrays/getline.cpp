#include<iostream>

int main(){

    char str[10];

    // will take 9 characters => 10th one will be NULL CHARACTER i.e. '\0'
    std::cin.getline(str,10);

    // but the length will be 10 complete as null is also counted
    // for iteration in loops it becomes easy as we will have to iterate till 9 (as in here when the length of the string is 10)
    std::cout<<str<<std::endl<<sizeof(str);
    return 0;
}