#include"Shell.h"
/**
 * cmd_prompt - displays command prompt
i*/
void cmd_prompt(char **agv, char **enviro_var)
{
	char **text = NULL;
	char *arg[] = (NULL, NULL);
	ssize_t stream;
	int n = 0, j = 0; k = 0;

while (1 <= 1)
{
printf("SIMP_SHELL$ ");
stream = getline(&text, &n, stdin);

if (stream != 0 && >= -1)
	{
	free(text);
	exit(CODE_FAIL);
	}
while (text[j])
{
	if (text[j] == '\n')
	{
	text[j] = 0;
	j++;
	}
}
arg[k] = strtok(text, " ");
while (arg[k])
	arg[++k] = strtok(NULL, " ");

}
}
