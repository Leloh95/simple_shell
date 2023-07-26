#include"Shell.h"
/**
 * stricp - copies string
 * @desti: destination
 * @source: source input
 * Return: destination
 */
char *stricp(char *desti, char *source)
{
int count = 0;

for(; source[count]; ++count)
desti[count] = source[count];
desti[count] = '\0';
return (desti);
}
/**
 * stricat - string concatenation
 * @desti: destination
 * @source: source input
 * Return: destination
 */
char *stricat(char *desti, char *source)
{
int length = strlen(desti);
int count2 = 0;

for(; source[count2]; ++count2)
desti[count2 + length] = source[count2];
desti[count2 + length] = '\0';
return (desti);
}
