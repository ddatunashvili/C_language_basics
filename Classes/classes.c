#include <stdio.h>
#include <string.h>

// Define a structure to represent a Person
typedef struct {
    char name[50];
    int age;
} Person;

// Function to set the person's information
void setPersonInfo(Person* person, const char* name, int age) {
    strcpy(person->name, name); // Set name
    person->age = age;           // Set age
}

// Function to display the person's information
void displayPerson(const Person* person) {
    printf("Name: %s, Age: %d\n", person->name, person->age);
}

// Main function
int main() {
    // Create a Person object
    Person person;

    // Set the person's information
    setPersonInfo(&person, "Alice", 30);

    // Display the person's information
    displayPerson(&person);

    return 0;
}
