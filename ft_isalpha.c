#include "libft.h"

/* hey, you're finally awake */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}
