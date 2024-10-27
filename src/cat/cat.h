#ifndef CAT_H
#define CAT_H

#include <ctype.h>
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

typedef struct {
  int bflag;
  int eflag;
  int nflag;
  int sflag;
  int tflag;
  int vflag;
  int errorflag;
} flags;

int parser(int argc, char *argv[], flags *flag);
void cat(char *path, flags flag);

#endif
