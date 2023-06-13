#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void cf(int file_desc);
char *buffer(char *file);
int main(int argc, char *argv[]);
void check(unsigned char *e_arr);
void magic_num(unsigned char *e_arr);
void class_elf(unsigned char *e_arr);
void data_elf(unsigned char *e_arr);
void version_elf(unsigned char *e_arr);
void osabi_elf(unsigned char *e_arr);
void abi_elf(unsigned char *e_arr);
void type_elf(unsigned int elf_type, unsigned char *e_arr);
void entry_elf(unsigned long int elf_entry, unsigned char *e_arr);
void ce(int elf);
int main(int __attribute__((__unused__)) argc, char *argv[]);

#endif
