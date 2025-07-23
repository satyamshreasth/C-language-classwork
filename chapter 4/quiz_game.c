#include <stdio.h>
#include <stdlib.h>

struct Question {
    char question[200];
    char optionA[100], optionB[100], optionC[100], optionD[100];
    char correctOption;
};

void askQuestion(struct Question q, int *score) {
    char answer;
    printf("\n%s\n", q.question);
    printf("A. %s\n", q.optionA);
    printf("B. %s\n", q.optionB);
    printf("C. %s\n", q.optionC);
    printf("D. %s\n", q.optionD);
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer);

    if (answer == q.correctOption || answer == q.correctOption + 32) {  // Case insensitive
        printf("Correct!\n");
        (*score)++;
    } else {
        printf("Wrong! Correct answer is %c\n", q.correctOption);
    }
}

int main() {
    int score = 0;

    struct Question quiz[] = {
        {"What is the capital of India?",
         "Mumbai", "New Delhi", "Kolkata", "Chennai", 'B'},

        {"Which language is used for system programming?",
         "Python", "C", "HTML", "JavaScript", 'B'},

        {"Who invented the light bulb?",
         "Edison", "Newton", "Einstein", "Tesla", 'A'},

        {"Which planet is known as the Red Planet?",
         "Earth", "Venus", "Mars", "Jupiter", 'C'},

        {"What is 5 + 7?",
         "10", "11", "12", "13", 'C'}
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);

    printf("🔷 Welcome to the Quiz Game! 🔷\n");
    printf("You will be asked %d questions.\n", totalQuestions);
    printf("Each correct answer gives you 1 point.\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("Question %d:\n", i + 1);
        askQuestion(quiz[i], &score);
    }

    printf("\n✅ Quiz Finished!\n");
    printf("Your score: %d out of %d\n", score, totalQuestions);

    if (score == totalQuestions)
        printf("🎉 Excellent!\n");
    else if (score >= totalQuestions / 2)
        printf("🙂 Good job!\n");
    else
        printf("😐 Better luck next time.\n");

    return 0;
}
