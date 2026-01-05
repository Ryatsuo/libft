# 📚 libft

## Description

**libft** est une bibliothèque écrite en C qui regroupe un ensemble de fonctions utiles, principalement inspirées de la libc standard, ainsi que des fonctions supplémentaires.  
Ce projet est le premier projet du tronc commun de l’école 42 et a pour objectif de renforcer les bases en programmation C, la gestion de la mémoire et la rigueur du code.

Toutes les fonctions sont codées **from scratch**, sans utiliser les fonctions interdites, et dans le respect de la **norme 42**.

---

## 🎯 Objectifs du projet

- Reproduire des fonctions essentielles de la libc
- Comprendre le fonctionnement bas niveau du C
- Manipuler la mémoire (malloc, free, etc.)
- Créer une bibliothèque réutilisable pour les projets futurs
- Respecter une norme stricte et des contraintes précises

---

## 🛠️ Fonctions implémentées

### Fonctions de la libc
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strncmp`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`
- `ft_calloc`
- `ft_strdup`
- ...

### Fonctions supplémentaires
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus – Listes chaînées
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## ⚙️ Compilation

Pour compiler la bibliothèque :

```bash
make        # Compile la lib
make clean  # Supprime les fichiers objets
make fclean # Supprime les fichiers objets et la lib
make re     # Recompile tout
