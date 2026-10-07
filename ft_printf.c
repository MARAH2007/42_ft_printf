#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;

	i = 0;
	va_start(args , format);
	while (format[i] != '\0')
	{
		if ( format[i] == '%')
		{
			if ( format[i + 1] == 'c')
				ft_printchar(args);
			else if (format[i + 1] == 'd')
				ft_printdigit(args);	
			else if (format[i + 1] == 's')
				ft_prints(s);
			i++;
		}
		else
		{
			write( 1, &format[i] , 1);
			i ++;
		}
	}
	return 0;
}
