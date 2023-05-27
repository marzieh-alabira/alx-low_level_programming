#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filenames, size_t letters);
int create_file(const char *filenames, char *text_content);
int append_text_to_file(const char *filenames, char *text_content);

#endif
