#include"Shell.h"

/**
 * getoken - gets token for prog
 */
void getoken(void)
{
char *getok;
char **getoken;
int index = 0;

getoken = malloc(32 * sizeof(char *));
if (!getoken)
{
exit(1);
}
getok = stritok(command_lne, " ");
while (getok)
{
getoken[index++] = strdup(getok);
getok = stritok(NULL, " ");
}
getok = *getoken;
}
