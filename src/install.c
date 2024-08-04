#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/install.h"

//zwraca true gdy plik istenieje
int check_if_exists(void){

    return access("nano-8.1.tar.xz", F_OK) == 0;
}

//true gdy pobrano
//dodać sprawdzanie czy wget jest zainstalowany
int download(void){
  return system("wget https://www.nano-editor.org/dist/v8/nano-8.1.tar.xz") == 0;
}

int extract(void){
  return 0;
}

int configure(void){
  return 0;
}

int make(void){
  return 0;
}

int make_install(void){
  return 0;
}

