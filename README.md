# 42_Libft
The first project from the Common Core Curriculum. It's about creating your personal library with useful functions to be used in the future.

---

I'm still in the early phases of corrections, I'm marking the ones I did, the green check doesn't guarantee they are corrected.

| Mandatory (I) | Status     |
| :-------- | :------- |
| isalpha | <p align="center">✅</p> |
| isdigit | <p align="center">✅</p> |
| isalnum | <p align="center">✅</p> |
| isascii | <p align="center">✅</p> |
| isprint | <p align="center">✅</p> |
| strlen | <p align="center">✅</p> |
| memset | <p align="center">✅</p> |
| bzero | <p align="center">✅</p> |
| memcpy | <p align="center">✅</p> |
| memmove | <p align="center">✅</p> |
| strlcpy | <p align="center">✅</p> |
| strlcat | <p align="center">✅</p> |
| toupper | <p align="center">✅</p> |
| tolower | <p align="center">✅</p> |
| strchr | <p align="center">✅</p> |
| strrchr | <p align="center">✅</p> |
| strncmp | <p align="center">✅</p> |
| mrmchr | <p align="center">✅</p> |
| mrmcmp | <p align="center">✅</p> |
| strnstr | <p align="center">✅</p> |
| atoi | <p align="center">✅</p> |
| calloc | <p align="center">✅</p> |
| strdup | <p align="center">✅</p> |

| Mandatory (II) | Status     |
| :-------- | :------- |
| ft_substr | <p align="center">✅</p> |
| ft_strjoin | <p align="center">✅</p> |
| ft_strtrim | <p align="center">✅</p> |
| ft_split | <p align="center">✅</p> |
| ft_itoa | <p align="center">✅</p> |
| ft_strmapi | <p align="center">✅</p> |
| ft_striteri | <p align="center">✅</p> |
| ft_putchar_fd | <p align="center">✅</p> |
| ft_putstr_fd | <p align="center">✅</p> |
| ft_putendl_fd | <p align="center">✅</p> |
| ft_putnbr_fd | <p align="center">✅</p> |

| Bonus | Status     |
| :-------- | :------- |
| ft_lstnew | <p align="center">✅</p> |
| ft_lstadd_front | <p align="center">✅</p> |
| ft_lstsize | <p align="center">✅</p> |
| ft_lstlast | <p align="center">✅</p> |
| ft_lstadd_back | <p align="center">✅</p> |
| ft_lstdelone |  |
| ft_lstclear |  |
| ft_lstiter |  |
| ft_lstmap |  |

---

## Necessary Corrections
| Function | Error     |
| :-------- | :------- |
| ft_memset | Fail if memory overlap, how to solve it without VLA? |
| ft_strnstr | Norm (25 lines) and Segfault if can't find match |
| ft_substr | SIGSEGV! Where am I touching forbidden memory? |
| ft_strtrim | SIGSEGV! Where am I touching forbidden memory? |

## Testing
Currently, I'm using personal tests and [libftTester](https://github.com/Tripouille/libftTester) to test my library and check my progress.
