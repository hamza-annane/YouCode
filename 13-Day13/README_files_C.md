# Apprendre la Gestion des Fichiers en C

Ce document est conçu pour t'aider à **maîtriser la manipulation des fichiers en C** à travers des explications et **12 exercices progressifs**.  
La gestion des fichiers est essentielle pour stocker et récupérer des données dans des programmes plus complexes.

---

## **Rappel des Fonctions Importantes :**
- `fopen()` : Ouvrir un fichier.
- `fclose()` : Fermer un fichier.
- `fprintf()` / `fputs()` / `fputc()` : Écrire dans un fichier.
- `fscanf()` / `fgets()` / `fgetc()` : Lire un fichier.
- `fseek()` / `ftell()` : Se déplacer dans un fichier.
- `feof()` : Vérifier la fin du fichier.
- `remove()` : Supprimer un fichier.
- `rename()` : Renommer un fichier.

---

# **Exercices sur les Fichiers en C**

### **Exercice 01 : Créer un fichier vide**
- Objectif : Écrire un programme qui crée un fichier `data.txt`.
- Fonctions utilisées : `fopen()`, `fclose()`.

---

### **Exercice 02 : Écrire un message dans un fichier**
- Objectif : Demander à l'utilisateur une chaîne de caractères et l'écrire dans `data.txt`.
- Fonctions : `fprintf()` ou `fputs()`.

---

### **Exercice 03 : Lire le contenu d’un fichier**
- Objectif : Lire et afficher le contenu de `data.txt`.
- Fonctions : `fgetc()` ou `fgets()`.

---

### **Exercice 04 : Écrire plusieurs lignes**
- Objectif : Demander à l'utilisateur d'entrer 5 phrases et les écrire dans un fichier `notes.txt`.

---

### **Exercice 05 : Compter le nombre de caractères**
- Objectif : Compter et afficher le nombre de caractères dans un fichier donné.

---

### **Exercice 06 : Compter le nombre de mots**
- Objectif : Compter le nombre de mots dans un fichier (séparés par des espaces ou retours ligne).

---

### **Exercice 07 : Ajouter du texte (mode append)**
- Objectif : Écrire un programme qui ouvre un fichier en mode `a` et ajoute du texte sans effacer l'existant.

---

### **Exercice 08 : Copier un fichier**
- Objectif : Copier le contenu d’un fichier `source.txt` vers `copy.txt`.
- Fonctions : Lecture caractère par caractère et écriture.

---

### **Exercice 09 : Trouver un mot dans un fichier**
- Objectif : Chercher un mot dans un fichier et afficher la position (ligne).

---

### **Exercice 10 : Remplacer un mot dans un fichier**
- Objectif : Lire un fichier, remplacer un mot donné par un autre et sauvegarder dans un nouveau fichier.

---

### **Exercice 11 : Supprimer un fichier**
- Objectif : Demander un nom de fichier et le supprimer avec `remove()`.

---

### **Exercice 12 : Fichier binaire**
- Objectif : Créer un fichier binaire (`data.bin`) et y écrire un tableau d’entiers. Puis lire et afficher ces entiers.

---

## **Conseils pour Réussir :**
1. Toujours vérifier le retour de `fopen()` (NULL en cas d’erreur).
2. Bien fermer les fichiers avec `fclose()` pour éviter les pertes de données.
3. Utiliser des boucles `while (!feof(file))` pour lire tout un fichier.
4. Tester vos programmes avec des fichiers différents.

---
