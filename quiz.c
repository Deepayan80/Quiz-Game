#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

int main(){
    int choice;
    char playAgain;
    int totalQuestions = sizeof(questions) / sizeof(questions[0]);
    
    printf("==================================\n");
    printf("     Welcome to the Quiz Game     \n");
    printf("==================================\n");

    do{

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

        if (choice == 1)
        {
            printf("Do you want to play again...! Enter Your Choice (Y/N): ");
            scanf(" %c", &playAgain);
            playAgain = toupper(playAgain);
        }
        

    }while(playAgain == 'Y');

    printf("Thankyou for playing goodbye...!\n");

    return 0;
    
}

void startQuiz(){
    // printf("Starting the quiz...!\n");
    // displayQuestions();
    
    int score = 0;
    char userAnswer;
    int totalQuestions = sizeof(questions) / sizeof(questions[0]);

    printf("\nStarting the Quiz\n\n");

    for (int i = 0; i < totalQuestions; i++)
    {
        printf("Q%d: %s\n", i+1, questions[i].question);
        printf("%s\n", questions[i].optionA);
        printf("%s\n", questions[i].optionB);
        printf("%s\n", questions[i].optionC);
        printf("%s\n", questions[i].optionD);

        do{
            printf("Your answer(A/B/C/D): ");
            scanf(" %c", &userAnswer);
            userAnswer = toupper(userAnswer);

            if (userAnswer < 'A' || userAnswer > 'D')
            {
                printf("Invalid option...! Please enter A,B,C or D.\n");
            }
        }while(userAnswer < 'A' || userAnswer > 'D');

        if (userAnswer == questions[i].correctOption || userAnswer == questions[i].correctOption + 32)
        {
            printf("✅ Correct!\n\n");
            score++;
        }
        else{
            printf("❌ Wrong! Correct Answer: %c\n\n", questions[i].correctOption);
        }
        
    }
    
    showResults(score, totalQuestions);
}

void displayQuestions(){
    printf("Questions will be displayed here.\n");
}

void showResults(int score, int total){
    printf("=====================================\n");
    printf("             Quiz Result             \n");
    printf("=====================================\n");
    printf("You scored %d out of %d\n", score, total);
    printf("=====================================\n");
}