#include <stdio.h>

struct Question {
    char AUTHOR[50];
    char QUESTION[100];
    char ANSWER[100];
    char USER_ANSWER[100];
};

void Print_Question( struct Question MyQuestion) {
    printf("%s",MyQuestion.QUESTION);
}

void User_Answer(struct Question UserAnswer) { // not work
    printf("YOUR ANSWER : ");
    scanf("%s",UserAnswer.USER_ANSWER);
    printf("\n THE ANSWER %s",UserAnswer.USER_ANSWER);
    (UserAnswer.ANSWER == UserAnswer.USER_ANSWER) ? printf("\n TURE") : printf("\n FALSEE");
}