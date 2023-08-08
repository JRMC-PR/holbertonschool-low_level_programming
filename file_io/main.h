#ifndef main_h
#define main_h
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/*Functionsignatures*/
ssize_t read_textfile(const char *filename, size_t letters);
#endif
