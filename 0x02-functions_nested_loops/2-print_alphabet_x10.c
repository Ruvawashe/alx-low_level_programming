#include <main.h>

/* print alphabet 10 times - lowercase
 * Return 0 success
 */

void print_alphabet_x10(void);
{
	char j;
	int i = 0;

	while (i < 10)
	{

		j = 'a'; 
		while (j <= 'z') 
	{i
		_putchar(j);
		j++;
	}
	_putchar('\n');
	i++;
	}
}
