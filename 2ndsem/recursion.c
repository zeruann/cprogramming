#include <stdio.h>

void greet() { // Normal function (called from main)
    printf("Hello! This is a normal function call.\n");
}

int countdown(int n) { // Recursive function
    if (n == 0) {  // Base case to stop recursion
        printf("Blast off!\n");
        return;
    }
    printf("%d\n", n);
    return countdown(n - 1);  // Recursive call
}

int main() {

    greet();  // Normal function call

    // Recursive function call
    printf("Starting countdown using recursion:\n");
    countdown(5);

    return 0;
}
