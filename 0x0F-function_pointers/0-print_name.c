#include <stdlib.h>

/**
 *print_name - execute a function given as a paramet
 *  @name: parameter that function ptr
 *   @f:function to execute
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
