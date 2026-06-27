//I WANT TO PLAY WITH YOU
//        YOUR FRIEND, AI
#include <stdio.h>
#include <math.h>
//размер поля
const int width = 80;
const int height = 25;
//начальная позиция мяча
int ball_x = 40;
int ball_y = 12;
// 1 - направление вправо -1 влево 
//соответсвенно dy 1 - вверх -1 - вниз, 0 - прямо 
int ball_dx = 1;
int ball_dy = 1;

//начальная позиция ракетки
int paddle1_y = 12;
int paddle2_y = 12;

int main() {

    for (int y = 1; y <= height; y++) {
    for (int x = 1; x <= width; x++) {
        if (y == 1 || y == height) {
            printf("-");
        } 
        else if (x == 1 || x == width) {
            printf("|");
        } 
        else {
            printf(" ");
        }
    }
    printf("\n");
}
}