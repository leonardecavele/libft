`libft` is a custom C library developed as the first project of the 42 curriculum. It recreates common functions from the C standard library and provides additional utilities for strings, memory and linked lists.

The project is compiled as a static library named `libft.a`, which can be reused in other C programs.

### Contents

The mandatory part includes character checks, memory operations, string manipulation, numeric conversion, allocation helpers and functions that write to a file descriptor.

It also provides additional utilities such as `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, `ft_strmapi` and `ft_striteri`.

The bonus part introduces the `t_list` singly linked-list structure and functions for creating, traversing, modifying and deleting lists.

### Compilation

Run `make` to build the mandatory library or `make bonus` to include the linked-list functions.

The targets `clean`, `fclean` and `re` are also available.

### Usage

Include `libft.h` and link your program against `libft.a`:

```c
#include "libft.h"

int	main(void)
{
	char	*message;

	message = ft_strjoin("Hello, ", "Libft!");
	if (!message)
		return (1);
	ft_putendl_fd(message, 1);
	free(message);
	return (0);
}
```

```bash
cc main.c -I. -L. -lft -o example
./example
```

### Memory management

Functions such as `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split` and `ft_itoa` allocate memory dynamically.

The caller is responsible for checking their return values and releasing the allocated memory when it is no longer needed.
