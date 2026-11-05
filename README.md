# Libft

Bibliothèque C réalisée dans le cadre du tronc commun de 42. Le projet réimplémente des fonctions usuelles de la libc et ajoute des utilitaires réutilisables dans les projets suivants.

Cette version contient aussi deux extensions personnelles : `ft_printf` et `get_next_line`.

## Compilation

Le Makefile est prévu pour créer l’archive statique `libft.a` avec `gcc -Wall -Wextra -Werror`.

**Prérequis à corriger dans cette copie :** `get_next_line.c` inclut `get_next_line.h`, qui manque dans le dossier fourni. Le Makefile compile ce fichier ; il faut donc restaurer le header avant de construire la bibliothèque. `BUFFER_SIZE` doit également être défini.

Une fois le header restauré, par exemple avec une taille de lecture de 42 octets :

```sh
make FLAGS="-Wall -Wextra -Werror -DBUFFER_SIZE=42"
```

Commandes disponibles :

| Commande | Action |
| --- | --- |
| `make` ou `make all` | Compile les sources et crée `libft.a` après résolution des prérequis ci-dessus |
| `make clean` | Supprime les fichiers objets (`.o`) |
| `make fclean` | Supprime les fichiers objets et `libft.a` |
| `make re` | Nettoie puis recompile la bibliothèque |

## Utilisation

```c
#include "libft.h"
```

Puis, depuis le dossier du projet et après compilation :

```sh
gcc -Wall -Wextra -Werror -I. main.c -L. -lft -o program
```

## Contenu

- **Caractères :** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`.
- **Mémoire :** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **Chaînes :** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- **Conversions et sorties :** `ft_atoi`, `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Listes chaînées :** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.
- **Extensions personnelles :** `ft_printf` (conversions usuelles) et `get_next_line` (lecture ligne par ligne).

## Sujet officiel

Le sujet est fourni par 42 sur son CDN : [Libft — sujet officiel](https://cdn.intra.42.fr/pdf/pdf/100796/en.subject.pdf). Il n’est pas recopié dans ce dépôt.
