#include <stdio.h>
#include <string.h>
struct SNAKE {
    char HEAD[15];
    char BODY[15];
};

void GET_HEAD_SNAKE(struct SNAKE PARTS_SNAKE) {
    printf("%s",PARTS_SNAKE.HEAD);
}
void SET_HEAD_SNAKE(struct SNAKE PARTS_SNAKE) {
    scanf("%s",PARTS_SNAKE.HEAD);
}
int main() {
    struct SNAKE Budi;
    // scanf("%s",&Budi.HEAD);
    SET_HEAD_SNAKE(Budi);
    GET_HEAD_SNAKE(Budi);
    return 0;
}