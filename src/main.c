#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "../include/installer.h"
#include "../include/check_ncurses.h"
#include "../include/install.h"


int main() {
State state=INIT;


while(state!=EXIT){
switch(state){
case INIT:

    printf("v.3 Rozpoczynam instalację edytora nano\n");
    state=DEPCHECK;
    break;

case DEPCHECK:
       
    if(check_ncurses_header()){
      printf("mamy ncurses\n");
      state=ARCHCHECK;       
    }
    else {
      printf("brak ncurses\n");
      state=EXIT;
    }
    break;

case ARCHCHECK:

     if(!check_if_exists()){ 
      printf("mamy plik\n");
      state=DOWNLOAD;
     } 
     else state=EXIT;
     break;

case DOWNLOAD:
     if(download()) state=CONFIGURE;
     else state=EXIT;
     break;

//zamienic na sprawdzanie czy archiwum zostało utworzone
case EXTRACT:
     if(extract()) state=CONFIGURE;
     else state=EXIT;
     break;

case CONFIGURE:
     if(configure()) state=MAKE;
     else state=EXIT;
     break;

case MAKE:
    if(make()) state=MAKEINSTALL;
    else state=EXIT;
    break;

case MAKEINSTALL:
     make_install();
     state=EXIT;
     break;

case EXIT:      
     break;
}
}

return 0;
}

