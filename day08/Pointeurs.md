# Exercices sur les Pointeurs

Ce document regroupe une série d'exercices pour apprendre les **pointeurs en C** et la manipulation de chaînes et de tableaux.

---

## **Exercice 00 : `my_ft`**

**Objectif :**  
Écrire une fonction qui prend en paramètre un pointeur vers un entier (`int`) et qui met la valeur de cet entier à **42**.

**Prototype :**
```c
void my_ft(int *nbr);
```

---

## **Exercice 01 : `my_ultimate_ft`**

**Objectif :**  
Écrire une fonction qui prend un pointeur vers un pointeur... (9 niveaux) vers un `int`, et qui met la valeur de cet entier à **42**.

**Prototype :**
```c
void my_ultimate_ft(int *********nbr);
```

---

## **Exercice 02 : `my_swap`**

**Objectif :**  
Écrire une fonction qui échange les valeurs de deux entiers en utilisant leurs adresses.

**Prototype :**
```c
void my_swap(int *a, int *b);
```

---

## **Exercice 03 : `my_div_mod`**

**Objectif :**  
Créer une fonction qui divise `a` par `b` et stocke :  
- Le résultat dans `div`.  
- Le reste dans `mod`.

**Prototype :**
```c
void my_div_mod(int a, int b, int *div, int *mod);
```

---

## **Exercice 04 : `my_ultimate_div_mod`**

**Objectif :**  
Diviser la valeur pointée par `a` par celle pointée par `b`.  
- Le résultat de la division remplace `*a`.  
- Le reste remplace `*b`.

**Prototype :**
```c
void my_ultimate_div_mod(int *a, int *b);
```

---

## **Exercice 05 : `my_putstr`**

**Objectif :**  
Afficher une chaîne de caractères (`char *`) sur la sortie standard.

**Prototype :**
```c
void my_putstr(char *str);
```

---

## **Exercice 06 : `my_strlen`**

**Objectif :**  
Écrire une fonction qui compte et retourne le nombre de caractères d'une chaîne.

**Prototype :**
```c
int my_strlen(char *str);
```

---

## **Exercice 07 : `my_rev_int_tab`**

**Objectif :**  
Écrire une fonction qui inverse l'ordre des éléments d'un tableau d'entiers.

**Prototype :**
```c
void my_rev_int_tab(int *tab, int size);
```

---

## **Exercice 08 : `my_sort_int_tab`**

**Objectif :**  
Écrire une fonction qui trie un tableau d'entiers par ordre croissant.

**Prototype :**
```c
void my_sort_int_tab(int *tab, int size);
```
