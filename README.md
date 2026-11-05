# Libft

Bibliothèque C réalisée dans le cadre du tronc commun de 42. Le projet réimplémente des fonctions usuelles de la libc et ajoute des utilitaires réutilisables dans les projets suivants.

Cette version ajoute aussi deux extensions personnelles à la bibliothèque : `ft_printf` et `get_next_line`.

## Compilation

Le Makefile est prévu pour créer l’archive statique `libft.a` avec `gcc -Wall -Wextra -Werror`.

**État de cette archive :** `get_next_line.c` inclut `get_next_line.h`, qui manque dans le dossier Libft fourni. Le Makefile compile ce fichier, donc il faut restaurer le header avant de pouvoir construire la bibliothèque. Il faut également définir `BUFFER_SIZE`, utilisé par `get_next_line.c`.

Une fois le header restauré, par exemple avec une taille de lecture de 42 octets :

```sh
make FLAGS="-Wall -Wextra -Werror -DBUFFER_SIZE=42"
```

Commandes disponibles :

| Commande | Action |
| --- | --- |
| `make` ou `make all` | Compile les sources et crée `libft.a` après résolution des prérequis signalés ci-dessus |
| `make clean` | Supprime les fichiers objets (`.o`) |
| `make fclean` | Supprime les fichiers objets et `libft.a` |
| `make re` | Nettoie puis recompile la bibliothèque |

## Utilisation

Inclure l’en-tête puis lier l’archive à votre programme :

```c
#include "libft.h"
```

Depuis le dossier du projet, après `make` :

```sh
gcc -Wall -Wextra -Werror -I. main.c -L. -lft -o program
```

## Contenu

### Fonctions de la Libft

- **Caractères :** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`.
- **Mémoire :** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **Chaînes :** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- **Conversions et sorties :** `ft_atoi`, `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Listes chaînées :** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

Les fonctions de listes sont incluses dans `libft.a` par le Makefile.

### Extensions personnelles

- **`ft_printf` :** affichage formaté avec les conversions `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` et `%%`.
- **`get_next_line` :** lecture d’un fichier descripteur ligne par ligne. `BUFFER_SIZE` peut être défini à la compilation.

## Sujet 42

Le PDF joint est le sujet **Libft, version 15** (`subject.pdf`). Sa version correspond aux dates des sources du projet. La copie locale provient d’un miroir du sujet ; le lien du CDN 42 est également référencé ci-dessous.

- [Sujet PDF inclus](subject.pdf)
- [Référence CDN 42](https://cdn.intra.42.fr/pdf/pdf/100796/en.subject.pdf)
- [Source du miroir utilisé](https://raw.githubusercontent.com/angelamcosta/libft/main/en.subject.pdf)