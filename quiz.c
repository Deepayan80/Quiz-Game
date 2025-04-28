#include <stdio.h>
#include <stdlib.h>

void startQuiz();
void displayQuestions();
void showResults();

typedef struct{
    char question[256];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char correctOption;
} QuizQuestion;

int main(){
    int choice;

    QuizQuestion questions[] = {

        {
            "What is the capital of France?",
            "A. Berlin",
            "B. Madrid",
            "C. Paris",
            "D. Rome",
            'C'
        },
        {
            "Which plannet is known as the red planet?",
            "A. Earth",
            "B. Mars",
            "C. Jupiter",
            "D. Venus",
            'B'
        },
        {
            "Who wrote the play 'Romeo and Juliet'?",
            "A. William Shakespear",
            "B. Charles Dicken",
            "C. Mark Twain",
            "D. Jain Austien",
            'A'
        }

    };

    int totalQuestions = sizeof(questions) / sizeof(questions[0]);
    
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