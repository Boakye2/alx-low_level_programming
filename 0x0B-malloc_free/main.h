#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
#endif /*MAIN_H*/