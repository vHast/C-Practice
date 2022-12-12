#include <iostream>

using namespace std;

int main ()
{
    // The C++ Type system
    // Notations on the translation of use with Javascript

    // Declaring variables

    /*

    When declaring variables in C++ you initialize them, object initialization
    establishes an object's initial state, such as setting its value
    */

    int the_answer = 42;

    int lucky_number = the_answer / 6;

    // This line evaluates the expression the_answer /6 dand assigns the result
    // to lucky_number

    // Conditionals

    int mainland() { // We declare the function in order to provide the conditional
        int x = 0; // Initialization of x value
        if (x > 0) printf("Positive."); // First conditional, if true, then "Positive
        else if (x < 0) printf("Negative."); // If false, then it will be Negative
        else printf("Zero"); // If all these options are false, then it will print Zero
    }

    // Functions

    int step_function(int x) { // The step_function takes a single argument (x)
        int result = 0; // The result variable is declared and initialized to 0
        if (x < 0) { // Comparison with our argument with 0
            result = -1; // If true, result will be -1
        } else if (x > 0) { // If false we execute the next segment
            result = 1; // Result will be one
        }
        return result;
    }

    // Calling Functions

    int value1 = step_function(100); // value1 is 1
    int value2 = step_function(0); // value2 is 0
    int value3 = step_function(-10); // value3 is -1

    /* The current syntax for calling functions is

    int value = function(argument);

    The

    */
}
