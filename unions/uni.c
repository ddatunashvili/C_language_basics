#include <stdio.h>
#include <string.h>

// Define a union
union Data {
    int intValue;
    float floatValue;
    char charValue[20];
};

int main() {
    union Data data;

    // Assign and print an integer value
    data.intValue = 10;
    printf("Integer Value: %d\n", data.intValue);

    // Assign and print a float value
    data.floatValue = 15.5;
    printf("Float Value: %f\n", data.floatValue); // Overwrites intValue

    // Assign and print a string value
    strcpy(data.charValue, "Hello");
    printf("String Value: %s\n", data.charValue); // Overwrites floatValue

    return 0;
}
