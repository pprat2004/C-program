#include <stdio.h>

// Define a structure for Student
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

// Function to display a student's marks
void displayMarks(char name[50]) {
    printf("Student's Marks: %s\n", name);
}

int main() {
    // Declare and initialize a structure variable
    struct Student student1 = {"Alice", 101, 95.75};

    // Passing a specific member (marks) to the function
    displayMarks(student1.name);

    return 0;
}

