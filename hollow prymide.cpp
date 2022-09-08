#include<iostream>
void printPattern(int);
int main()
{
    int n = 6;
 
    printPattern(n);
}
void printPattern(int n)
{
    int i, j, k = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++) {
            std::cout << " ";
        }
        while (k != (2 * i - 1)) {
            if (k == 0 || k == 2 * i - 2)
                std::cout << "*";
            else
                std::cout << " ";
            k++;
        }
        k = 0;
        std::cout <<"\n";
    }
    for (i = 0; i < 2 * n - 1; i++) {
        std::cout << "*";
    }
}