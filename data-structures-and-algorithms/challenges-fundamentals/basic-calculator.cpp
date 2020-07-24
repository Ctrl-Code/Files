// ctrl-code: 2007250050

#include <iostream>

int main()
{
    char ch;
    int n1, n2;
    int performOperation(int, int, char);
    while (true)
    {
        std::cin >> ch;
        if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%')
        {
            std::cin >> n1 >> n2;
            int result = performOperation(n1, n2, ch);
            std::cout<<result<<std::endl;
        }
        else if (ch == 'X' || ch == 'x')
            break;
        else
            std::cout << "Invalid operation. Try again." << std::endl;
    }
    return 0;
}

int performOperation(int n1, int n2, char ch)
{
    switch (ch)
    {
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    case '/':
        return n1 / n2;
    case '%':
        return n1 % n2;
    }
    return 0;
}