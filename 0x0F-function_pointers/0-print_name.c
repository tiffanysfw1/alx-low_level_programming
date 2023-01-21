#include "function_pointers.h"

/**
*print_name - function that print a name
*@name: name 
*@f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
