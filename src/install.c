#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/install.h"

//zwraca true gdy plik istenieje
int check_if_exists(void){

    return access("nano-8.1.tar.xz", F_OK) == 0;
}

int download(void){
  return system("wget https://www.nano-editor.org/dist/v8/nano-8.1.tar.xz") == 0;
}
