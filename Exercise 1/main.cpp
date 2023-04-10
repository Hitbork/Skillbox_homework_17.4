#include <iostream>

// Function to change pointers
void changer(int **a, int **b) {
    int *c = *a;
    *a = *b;
    *b = c;
}


int main() {
    // Greetings
    std::cout << " Changing pointers\n\n\n";


    // Creating vars
    int a = 10, b = 20;

    int *pa = &a, *pb = &b;

    changer(&pa, &pb);

    std::cout << *pa << " " << *pb;
}
