#ifndef SHELL_H
#define SHELL_H
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main(int argc, char **agv, char **enviro_var);
void cmd_prompt(char **agv, char **enviro_var);




#endif
