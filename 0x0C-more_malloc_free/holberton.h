#ifndef HOLBERTON_H
#define HOLBERTON_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int check_digit(char *s);
int _strlen(char *s);
int *_mul(char *s1, int len1, char *s2, int len2, int len_mul);
void array_sum(int *res, int len1, int *_mul, int len_mul);
void _initialize(int *s, int len);
void print_mul(int *s, int len);

#endif
