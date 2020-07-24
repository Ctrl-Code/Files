// ctrl-code: 2007250151

#include <iostream>

int main()
{
    int numberOfTerms, minTerm, lastTerm, terms = 0;
    bool isDecreasing = 1, isIncreasing = 0;
    bool ansFlag = true;
    int currentTerm;

    // input
    std::cin >> numberOfTerms;

    do
    {
        std::cin >> currentTerm;

        // initial setup of variable
        if (terms == 0)
            lastTerm = currentTerm;

        else
        {
            // if fallthrough
            if (isDecreasing)
            {

                // and is going to increase
                if (currentTerm > lastTerm)

                    // set to increasing
                    isDecreasing = 0, isIncreasing = 1;
            }
            else
            {
                if (currentTerm < lastTerm)
                {
                    ansFlag = false;
                    break;
                }
            }

            // update the lastTerm to currentTerm
            lastTerm = currentTerm;
        }

        // increment the terms as we have processed the current Term
        ++terms;
    }while(terms <= numberOfTerms);

    std::cout << ((ansFlag == true) ? "true" : "false" )<< std::endl;

    return 0;
}