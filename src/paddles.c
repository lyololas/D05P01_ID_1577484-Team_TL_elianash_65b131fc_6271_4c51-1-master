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
int main() {
    char input;     
    int valid = 0;  

    
    while (1) {
        
        printf("\033[H\033[J");

        map();

        
        for (int i = 0; i < paddle_height; i++) {
            printf("\033[%d;%dH|", paddle_left_y + i, width - 77);
        }
        
        for (int i = 0; i < paddle_height; i++) {
            printf("\033[%d;%dH|", paddle_right_y + i, width - 2);
        }

        
        printf("\033[%d;1H", height + 1);
        printf("Your move! \n");

        
        if (valid == 1) {
            printf("Use the controls dumbass! \n");
            valid = 0; 
        } else {
            printf("\n");
        }

        printf("Enter command: ");
        
        scanf(" %c", &input);

        
        if (input == 'a' || input == 'A') {
            if (paddle_left_y > 2) paddle_left_y--;
        }
        else if (input == 'z' || input == 'Z') {
            if (paddle_left_y + paddle_height < height) paddle_left_y++;
        }
        else if (input == 'k' || input == 'K') {
            if (paddle_right_y > 2) paddle_right_y--;
        }
        
        else if (input == 'm' || input == 'M') {
            if (paddle_right_y + paddle_height < height) paddle_right_y++;
        }
        
        else if (input == 'q' || input == 'Q') {
            break;
        }
        else {
            valid = 1; 
        }
    }

    // Clean exit prompt below the game window
    printf("\033[%d;1HGame closed safely.\n", height + 4);
    return 0;
}