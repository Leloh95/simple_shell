#ifndef SHELL_H
#define SHELL_H
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/stat.h>
int main(int argc, char **agv, char **enviro_var);
void cmd_prompt(char **agv, char **enviro_var);
void getoken(void);
void init_prog(void);
void free_memory(char **p);
char *stritok(char *txt, char *delimit);
char *stricp(char *desti, char *source);
char *stricat(char *desti, char *source);
int shell_built(void);
int main();

extern char *command_lne;
extern char **initok;
#endif
