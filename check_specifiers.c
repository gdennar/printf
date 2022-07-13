/**
 * chech_specifier - check that char is a format specifier
 * @format: specifier type
 * Return: pointer to a function
 */
int (*check_specifier(char*))(va_list)
{
	int i;

	func_t my_array[3] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_cent},
		{NULL, NULL}
	};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (my_array[i] == *format)
		{
			return (my_array[i].f)
		}

	}
	return (NULL);
}
