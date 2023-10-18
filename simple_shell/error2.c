#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* *error_env - error message for env in get_env.
* @incrementer: data relevant (incrementer, argumentuments)
* @software_name: program name
* @argument: argument
* Return: error message.
*/

char *error_env(int incrementer, char *software_name, char *argument)
{
char *msg = "Unable to add/remove from environment\n";
char *error = malloc(strlen(software_name) + strlen(argument) + strlen(msg) + 20);
if (error == NULL)
{
return (NULL);
}
sprintf(error, "%s: %d: %s: %s", software_name, incrementer, argument, msg);
return (error);
}

/**
 * error_path_126 - error message for path and failure denied permission.
 * @incrementer: incrementer
 * @software_name: program name
 * @argument: argument
 *
 * Return: The error string.
 */

char *error_path_126(int incrementer, char *software_name, char *argument)
{
char *msg = "Permission denied\n";
char *error = malloc(strlen(software_name) + strlen(argument) + strlen(msg) + 20);
if (error == NULL)
{
return (NULL);
}
sprintf(error, "%s: %d: %s: %s", software_name, incrementer, argument, msg);
return (error);
}

