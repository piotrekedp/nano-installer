#ifndef INSTALLER_H
#define INSTALLER_H

enum State{
  INIT,
  DEPCHECK,
  ARCHCHECK,
  DOWNLOAD,
  EXTRACT,
  CONFIGURE,
  MAKE,
  MAKEINSTALL,
  EXIT
};

typedef enum State State;

#endif
