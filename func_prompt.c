#include"Shell.h"
/**
 * cmd_prompt - displays command prompt
 * @agv: argument vector
 * @enviro_var:environment variable
 * Return: 0
 */
void cmd_prompt(char **agv, char **enviro_var)
{
	char *text = NULL;
	char *arg[] = {NULL, NULL};
	ssize_t stream;
	size_t byt = 0;
	int proc_st, j;
	pid_t chil_proc;

while (1)
{
printf("SIMPLE_SHELL");
stream = getline(&text, &byt, stdin);
if (stream == -1)
{
free(text);
exit(EXIT_FAILURE);
}
j = 0;
while (text[j])
{
if (text[j] == '\n')
text[j] = 0;
j++;
}
arg[0] = text;
chil_proc = fork();
if (chil_proc == -1)
{
free(text);
exit(EXIT_FAILURE);
}
if (chil_proc == 0)
{
if (execve(arg[0], arg, enviro_var) == -1)
printf("%s: No such file  or directory\n", agv[0]);
}
else
wait(&proc_st);
}
}
