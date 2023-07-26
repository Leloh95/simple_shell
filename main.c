#include"Shell.h"

/**
 * main - displays prompt
 * @argc: argument count
 * @agv: argument vector
 * @enviro_var: environment vector
 * Return: 0
 */
int main(int argc, char **agv, char ** enviro_var)
{
if (argc == 1)

cmd_prompt(agv, enviro_var);

return(0);
}
