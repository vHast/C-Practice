#include <iostream>

using namespace std;

    int mainland() { // We declare the function in order to provide the conditional
        int x = 0; // Initialization of x value
        if (x > 0) printf("Positive."); // First conditional, if true, then "Positive
        else if (x < 0) printf("Negative."); // If false, then it will be Negative
        else printf("Zero"); // If all these options are false, then it will print Zero
    }
