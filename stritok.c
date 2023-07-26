#include "Shell.h"
/**
 * stritok - tokenize string
 * @txt: a string
 * @delimit:delimiter
 * Return: 0
 */

char *stritok(char *txt, char *delimit)
{
static char *text;
int buffer = 0;
char *count = 0;

if (txt != NULL)
text = txt;

for (; *text != '\0'; text++)
{
for (; delimit[buffer] != '\0'; buffer++)
{
if (*text == delimit[buffer])
break;
}
if (delimit[buffer] == '\0')
	break;
}
count = text;
if (*count == '\0')
return (NULL);
for (; *text != '\0'; text++)
{
for (buffer = 0; delimit[buffer] != '\0'; buffer++)
{
if (*text == delimit[buffer])
{
*text = '\0';
text++;
return (count);
}
}
}
return (count);
}

