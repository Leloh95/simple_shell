#include"Shell.h"

/**
 * getoken - gets token for prog
 */
void getoken(void)
{
	char *getok;
	char **getoken;
	int index = 0;
getoken = malloc(sizeof(char *) * 32);
if (!getoken)
{
	exit(1);
}
getok = stritok(cmd_line, " ");
while (getok)
{
	getoken[index++] = strdup(getok);
	getok = stritok(NULL, " ");
}
getok = getoken;
}
