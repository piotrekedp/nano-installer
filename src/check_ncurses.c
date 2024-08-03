#include <sys/stat.h>
#include "../include/check_ncurses.h"

int check_ncurses_header() {
    struct stat buffer;
    return stat("/usr/include/ncurses.h", &buffer) == 0;
}
