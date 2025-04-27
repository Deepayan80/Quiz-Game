#include <stdio.h>
#include <stdlib.h>

void startQuiz();
void displayQuestions();
void showResults();

int main(){
    int choice;

    printf("==================================\n");
    printf("     Welcome to the Quiz Game     \n");
    printf("==================================\n");
    printf("1. Start Quiz\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        startQuiz();
        break;

    case 2:
        printf("Thankyou for visiting...! Goodbye...!\n");
        break;

    default:
        printf("Invalid choice...! Please restart the programme...!\n");
        break;
    }

    return 0;
}

void startQuiz(){
    printf("Starting the quiz...!\n");
    displayQuestions();
    showResults();
}

void displayQuestions(){
    printf("Questions will be displayed here.\n");
}

void showResults(){
    printf("Result will be shown here.\n");
}