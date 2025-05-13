# 📚 Libft - Projet 42

## 📌 Description

**Libft** est le tout premier projet du cursus de l'école **42**.  
Le but est de recréer une **bibliothèque standard en C** regroupant des fonctions utiles de la libc dans une optique de **réutilisabilité** pour les projets futurs.

Ce projet m'a permit de consolider ma maîtrise du langage C, d’acquérir de bonnes pratiques de codage, et d’apprendre à organiser et compiler ma propre bibliothèque.

---

## 🎯 Objectifs pédagogiques

- Reproduire des fonctions standard de la **libc** (`strlen`, `memcpy`, `strchr`, etc.)
- Créer des **fonctions personnalisées** pour gérer les chaînes de caractères, la mémoire, les conversions, etc.
- Apprendre à structurer un **projet modulaire en C**
- Comprendre la **gestion dynamique de la mémoire**
- Savoir utiliser et créer une **liste chaînée** en C

---

## 🛠️ Fonctions implémentées

### 🧩 Partie 1 - Fonctions de la libc

- Fonctions de manipulation de mémoire : `memset`, `memcpy`, `memmove`, `bzero`, etc.
- Fonctions sur les chaînes de caractères : `strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strlcpy`, `strlcat`, etc.
- Fonctions de conversion : `atoi`, `toupper`, `tolower`, etc.
- Fonctions de vérification : `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`

### 🧩 Partie 2 - Fonctions supplémentaires

- Fonctions de manipulation de chaînes : `substr`, `strjoin`, `strtrim`, `split`, `itoa`, `strmapi`, `striteri`
- Fonctions d’affichage : `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`
- Fonctions d’allocation : `calloc`, `strdup`

### 🧩 Bonus - Listes chaînées

- Création et gestion de listes chaînées :  
  `lstnew`, `lstadd_front`, `lstadd_back`, `lstsize`, `lstlast`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`

---

## 🧪 Tests

Tu peux tester la libft avec des frameworks tels que :

- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [Moulinette 42]
- [War Machine](https://github.com/ska42/libft-war-machine)

---

## 🚀 Utilisation

1. Cloner le dépôt :
   ```bash
   git clone https://github.com/votre-utilisateur/libft.git
   cd libft