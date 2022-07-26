#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **helper(int word, int len, char *str, char **s);
char **strtow(char *str);
#endif
