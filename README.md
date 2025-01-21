# polyspace-check

Code Explanation
This code includes:

Global Variable: global_variable violates MISRA rules that discourage the use of global variables.
Infinite Loop: The for(;;) construct violates the MISRA rule that restricts infinite loops without a clear exit condition.
Uninitialized Variable: int i; is declared but not initialized, violating MISRA initialization rules.
Side Effects: The function do_something modifies the global variable, which is discouraged by MISRA.
Break Statement in Loop: Although permitted in some cases, Polyspace may flag this depending on your MISRA settings.
