#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("Welcome to the Quiz!\n\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("   1) Berlin\n");
    printf("   2) Madrid\n");
    printf("   3) Paris\n");
    printf("   4) Rome\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 3) Paris.\n\n");
    }

    // Question 2
    printf("2. Which planet is known as the Red Planet?\n");
    printf("   1) Earth\n");
    printf("   2) Mars\n");
    printf("   3) Jupiter\n");
    printf("   4) Venus\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 2) Mars.\n\n");
    }

    // Question 3
    printf("3. What is the largest ocean on Earth?\n");
    printf("   1) Atlantic Ocean\n");
    printf("   2) Indian Ocean\n");
    printf("   3) Arctic Ocean\n");
    printf("   4) Pacific Ocean\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 4) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 4) Pacific Ocean.\n\n");
    }

    // Final Score
    printf("Quiz Finished! Your final score is: %d/3\n", score);

    if (score == 3) {
        printf("Excellent! You're a quiz master!\n");
    } else if (score == 2) {
        printf("Good job! You did well.\n");
    } else {
        printf("Better luck next time!\n");
    }
    printf("this is line is for observing branches");

    return 0;
}
