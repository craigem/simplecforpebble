#include <../pebble-dev/PebbleSDK-3.4/Pebble/aplite/include/pebble.h>

// Define the number of values as 10
#define NUM_VALUES 10

void print_array(void) {
    //Print all the array values
    for(int i = 0; i < NUM_VALUES; i++) {
        printf("Element %d = %d", i, input_array[i]);
    }

    // Print a  blank line for readability
    printf(" ");
}

// Array of values to be sorted
int input_array[] = { 5, 7, 2, 6, 4, 1, 9, 0, 3, 8 };

int main(void) {
    // Print the input array
    print_array();
    // Run the  algorithm
    selection_sort();
    // Print the new state of the sorted array
    print_array();
    // Wait for the user to press Back
    app_event_loop();
    // Program ran without error
    return 0;
}
