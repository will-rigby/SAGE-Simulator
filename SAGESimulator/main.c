#include <stdio.h>
#include <stdlib.h>
#include "colour.h"

void display_terminal_header(void){
    set_terminal_color_magenta();
    printf("       _____         _____ ______\r\n");
    printf("  / ____|  /\   / ____|  ____|\r\n");
    printf(" | (___   /  \\ | |  __| |__   \r\n");
    printf("  \\___ \\ / /\\ \\| | |_ |  __|  \r\n");
    printf("  ____) / ____ \\ |__| | |____ \r\n");
    printf(" |_____/_/    \\_\\_____|______|\r\n");
    printf("*******************************\r\n\r\n");

}

int main(int argc, char** argv){
    display_terminal_header();
}