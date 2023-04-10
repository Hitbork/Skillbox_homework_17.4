#include <iostream>

bool substring(char* a, char* b) {
    bool isMatched = false;
    int i = 0;

    while ((*(a+i) != '\0') && !(isMatched)) {
        int j = 0;
        bool isCurrentMatched = true;
        while (*(b+j) != '\0') {
            if (*(a+i+j) != *(b+j)) {
                isCurrentMatched = false;
                break;
            }
            j++;
.        }
        isMatched = isCurrentMatched;
        i++;
    }

    return isMatched;
}

int main() {
    // Greetings
    std::cout<< " Point toi chars\n\n\n";

    // Creating vars
    char* a = "Hello world";

    char* b = "wor";

    char* c = "banana";

    std::cout << substring(a, b) << " " << substring(a, c);

}
