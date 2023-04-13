#include <iostream>

void changer(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}


int main()
{
    // Greetings
    std::cout << " Link changer\n\n\n";

    int a = 10, b = 20;
    changer(&a, &b);
    std::cout << a << " " << b;
}