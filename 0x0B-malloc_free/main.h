#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _strlen(char *s);
void print_tab(char **tab);
int findword(char *s);
int wordlen(char *s);
int word_count(char *s, int word);

#endif
