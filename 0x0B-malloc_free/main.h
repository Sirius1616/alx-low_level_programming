#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char *_strdup(char *str);

#endif
