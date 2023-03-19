#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef enum a_bool
{
	false = 0,
	true = 1,
}	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)
# define TRUE true
# define FALSE false
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
#endif
