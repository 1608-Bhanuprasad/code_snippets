#include <stdio.h>

// Function to print the Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");
    
    for (int i = 0; i < n; i++) {
        if (i == 0)
            next = first;
        else if (i == 1)
            next = second;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Function call to print the Fibonacci series
    fibonacci(n);

    return 0;
}
