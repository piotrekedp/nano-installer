#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "../include/installer.h"

int check_ncurses_header();

int main() {
    printf("Rozpoczynam instalację edytora nano\n");
    
    if(check_ncurses_header()==1){
      printf("mamy ncurses\n");
    }
    else {
      printf("brak ncurses\n");
    }
    return 0;
}

int check_ncurses_header() {
    struct stat buffer;
    return stat("/usr/include/ncurses.h", &buffer) == 0;
}
