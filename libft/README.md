Projeto libft 42SP
Repositorio de Bibliotecas da Linguagem C

### Funções da biblioteca <string.h> 

* [`ft_memset`](ft_memset.c)	- preenche os primeiros n bytes da mem apontada por s com byte c

* [`ft_bzero`](ft_bzero.c)	- preenche os primeiros n bytes com zero

* [`ft_memcpy`](ft_memcpy.c)	- copia n bytes da memoria *src para *dst

* [`ft_memccpy`](ft_memccpy.c)	- copia n bytes da memoria *src para *dst, se o caracter c = src, para a copia,

* [`ft_memmove`](ft_memmove.c)	- igual ao memcpy, porem e permitido overlap (copia estrapola o vetor)

* [`ft_memchr`](ft_memchr.c)	- localiza caracter no primeiro n bytes de uma string *s,

* [`ft_memcmp`](ft_memcmp.c)	- compara bytes da S1 com S2, retorna 0 = igual, -1 <, 1 >

## Funcoes da biblioteca <strings.h> 

* [`ft_strlen`](ft_strlen.c)	- Retorna tamanho de uma string *s

* [`ft_strlcpy`](ft_strlcpy.c)	- copia string *src para *dst, e retorna o tamanho src

* [`ft_strcat`](ft_strcat.c)	- concatena duas strings

* [`ft_strchr`](ft_strchr.c)	- Localiza um caracter dentro de uma string *s

* [`ft_strrchr.c`](ft_strrchr.c)	- localiza o ultimo caracter dentro de uma string *s

* [`ft_strnstr.c`](ft_strnchr.c)	- localiza uma substrig dentro de uma string

* [`ft_strncmp.c`](ft_strncmp.c)	- compara duas strings ate o comprimento de n

## Funcoes da Biblioteca <stdlib.h>

* [`ft_atoi.c`](ft_atoi.c)			- converte string para inteiro

## Funcoes da Biblioteca <ctype.h>
 
* [`ft_isalpha.c`](ft_isalpha.c)		- verifica se char e alphanumerico (aA-zZ, 0-9)
* [`ft_isdigit.c`](ft_isdigit.c)		- verifica se char e digito (0-9)
* [`ft_isalnum.c`](ft_isalnum.c)		- verifica se char e numero
* [`ft_isascii.c`](ft_isascii.c)		- verifica se char esta na tabela ascii
* [`ft_isprint.c`](ft_isprint.c)		- verifica se char e um printável 
* [`ft_toupper.c`](ft_toupper.c)		- Converte para maíusculo
* [`ft_tolower.c`](ft_tolower.c)		- Converte para minusculo

## Outras Funcoes Adicionais <libft.h>

* [`ft_substr.c`](ft_substr.c)		- retornar uma substring de uma string
* [`ft_strjoin.c`](ft_strjoin.c)		- concatena duas strings
* [`ft_strtrim.c`](ft_strtrim.c) 	- remove os caracteres do inicio e do fim, da string
* [`ft_split.c`](ft_split.c)			- separa a string, dos delimitadores
* [`ft_itoa.c`](ft_itoa.c)			- converte inteiro para string
* [`ft_strmap.c`](ft_strmap.c)		- applica a funcao passada como paramentro, para cada caracter da string
* [`ft_putchar_fd.c`](ft_putchar_fd.c)		- imprimi caracteres na saida padrao
* [`ft_putstr_fd.c`](ft_putstr_fd.c)		- imprimi string na saida padrao
* [`ft_putendl_fd.c`](ft_putendl_fd.c)	- imprimi string, seguida de quebra linha  na saidapadrao
* [`ft_putnbr_fd.c`](ft_putnbr_fd.c)		- 

# Funcoes listas encadeadas - Bonus Part

* [`ft_lstnew.c`](ft_lstnew.c)				- criar nova lista
* [`ft_lstadd_front.c`](ft_lstadd_front.c)	- Adiciona novo elemento no inicio da lista
* [`ft_lstadd_back.c`](ft_lstadd_back.c)		- Adiciona novo elemnte no fim da lista
* [`ft_lstsize.c`](ft_lstsize.c)				- conta elementos da lista
* [`ft_lstlast.c`](ft_lstlast.c)				- procura o último elemnto da lista
* [`ft_lstdelone.c`](ft_lstdelone.c)			- delete um elemento da lista
* [`ft_lstclear.c`](ft_lstclear.c)			- delete a sequencia de elemento da lista, (toda a lista)
* [`ft_lstiter.c`](ft_lstiter.c)				- aplica a funcao para o conteudo de todos elementos da lista
* [`ft_lstmap.c`](ft_lstmap.c)				- aplica a funcao para o conteudo de todos elem para uma nova lista
