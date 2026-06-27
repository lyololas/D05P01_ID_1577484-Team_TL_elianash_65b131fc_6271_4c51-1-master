#include <stdio.h>

const int width = 80;
const int height = 25;
int paddle_left_y = 13;
int paddle_right_y = 13;
const int paddle_height = 3;
int map() {

    for (int y = 1; y <= height; y++) {
    for (int x = 1; x <= width; x++) {
        if (y == 1 || y == height) {
            printf("-");
        } 
        else if (x == 1 || x == width) {
            printf("#");
        } 
        else {
            printf(" ");
        }
    }
    printf("\n");
}
}
int paddles_placement(){
    map();
    for (int i = 0; i < paddle_height; i++) {
        printf("\033[%d;%dH|", paddle_left_y + i, width - 77 );
    }
    for (int i = 0; i < paddle_height; i++) {
        printf("\033[%d;%dH|", paddle_right_y + i, width - 2);
    }
    printf("\033[%d;1H", height + 3);
    return 0;
}
int main (){
    paddles_placement();
    return 0;
}