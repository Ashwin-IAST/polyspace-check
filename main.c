#include <stdio.h>

// Global variables (MISRA rule 8.3 violation: Avoid using global variables)
int global_variable = 10;

// Function declaration
void do_something(int value);

int main(void)
{
    int i; // Local variable declaration without initialization (MISRA rule 9.1 violation)
    printf("Hello, MISRA!\n");

    // Loop with potential infinite behavior (MISRA rule 14.2 violation)
    for (;;) {
        if (i > 0) {
            break; // Breaking from the infinite loop
        }
    }

    // Calling a function with potential side effects
    do_something(global_variable);
    return 0;
}

// Function implementation
void do_something(int value)
{
    printf("Processing value: %d\n", value);
    // Non-compliant: modifying the global variable (MISRA rule 8.7 violation)
    global_variable += value;
}
