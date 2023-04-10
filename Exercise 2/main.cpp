#include <iostream>

void backwardsArray(int ar[]) {
    for (int i = 0; i < 5; i++) {
        int temp = ar[i];
        ar[i] = ar[9 - i];
        ar[9-i] = temp;
    }
}

int main() {
    // Greetings
    std::cout << " Backwards array\n\n\n";


    // Creating var
    int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    backwardsArray(ar);

    for (int i = 0; i < 10; i++) {
        std::cout << ar[i] << " ";
    }
}
