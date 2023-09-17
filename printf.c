#include "main.h"

/**
 * _printf - Custom implementation of printf function.
 * @str: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *str, ...)
{
	int count_char = 0;
	va_list arg_list;
	int i;

	va_start(arg_list, str);

	while (*str)
	{
		if (*str == '%')
		{
			str++;

			for (i = 0; i < placeholder_map_size; i++)
			{
				if (*str == placeholder_map[i].placeholder_id)
				{
					count_char += placeholder_map[i].
						print_type(arg_list);
						break;
				}
			}
		}
		else
		{
			_putchar(*str);
			count_char++;
		}

		str++;
	}

	return (count_char);
}
