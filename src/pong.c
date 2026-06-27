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

int score1 = 0;
int score2 = 0;
void update_ball();
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


void update_ball() {
    ball_x += ball_dx;
    ball_y += ball_dy;  
    if (ball_y <= 2) {
        ball_y = 2;         
        ball_dy = -ball_dy; 
    } else if (ball_y >= height - 1) {
        ball_y = 24;
        ball_dy = -ball_dy;
    }
    if  (ball_x <= 2) {
        if (ball_y >= paddle1_y - 1 && ball_y <= paddle1_y + 1) {
            ball_x = 3;
            ball_dx = -ball_dx;
        } else {
            score2 += 1;
            ball_x = 40;
            ball_y = 12;
            ball_dx = 1;
            ball_dy = 1;
        }   
    }
    if (ball_x >= width - 1) {
        if (ball_y >= paddle2_y - 1 && ball_y <= paddle2_y + 1) {
            ball_x = width -2;
            ball_dx = -ball_dx;
        } else {
            score1 += 1;
            ball_x = 40;
            ball_y = 12;
            ball_dx = -1;
            ball_dy = -1;
            
        }
    }
   

}