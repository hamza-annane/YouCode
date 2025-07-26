# Projet Final C : Gestionnaire d'Étudiants (Student Manager)

Ce projet complet est conçu pour t'aider à **maîtriser toutes les notions clés en C**, notamment :  
- Variables, conditions, boucles  
- Tableaux et chaînes de caractères  
- Pointeurs  
- Structures (`struct`)  
- Algorithmes (tri, recherche, statistiques)  
- Allocation dynamique de mémoire (`malloc`, `free`)  
- Gestion des fichiers (lecture/écriture)  

---

## **Description du Projet :**
Le **Student Manager** est un programme qui permet de gérer une liste d'étudiants, avec des fonctionnalités telles que :  
- Ajouter, modifier ou supprimer un étudiant  
- Rechercher et trier des étudiants  
- Calculer des statistiques (moyenne des notes, meilleure note, etc.)  
- Sauvegarder les données dans un fichier texte et les charger au démarrage  

---

## **Objectifs Pédagogiques :**
En réalisant ce projet, tu pratiqueras :  
- La gestion de **structures** pour stocker des données complexes.  
- L’utilisation de **pointeurs et de l’allocation dynamique** pour gérer une liste extensible.  
- Les **algorithmes de tri et de recherche**.  
- La **lecture et écriture dans des fichiers** pour persister les données.  
- Le **design modulaire** du code avec plusieurs fichiers source et headers.  

---

## **Fonctionnalités à Implémenter :**
1. **Ajouter un étudiant**  
   - Saisir le nom, prénom, âge et note.  
   - Stocker dynamiquement via `malloc` ou `realloc`.  

2. **Afficher tous les étudiants**  
   - Parcourir et afficher les données d'un tableau dynamique de `Student`.  

3. **Rechercher un étudiant**  
   - Recherche par **nom** ou **ID** (index dans la liste).  

4. **Modifier les informations d’un étudiant**  
   - Mettre à jour la note ou l’âge.  

5. **Supprimer un étudiant**  
   - Libérer la mémoire et ajuster le tableau.  

6. **Trier les étudiants**  
   - Tri par **nom** ou par **note** (implémenter un Bubble Sort ou autre).  

7. **Afficher des statistiques**  
   - Moyenne, meilleure note, pire note.  

8. **Sauvegarder les données dans un fichier**  
   - Écriture dans un fichier `students.txt` avec `fprintf`.  
   - Chargement au démarrage via `fscanf` ou `fgets`.  

---

## **Structure des Fichiers :**
```
student_manager/
├── main.c          (fonction main et menu)
├── student.c       (fonctions de gestion des étudiants)
├── student.h       (déclaration de struct Student et des prototypes)
├── Makefile        (pour compiler le projet)
└── students.txt    (fichier de données sauvegardé)
```

---

## **Définition de la structure Student :**
```c
typedef struct {
    int id;
    char nom[50];
    char prenom[50];
    int age;
    float note;
} Student;
```

---

## **Menu du Programme :**
Voici un exemple du menu interactif :  
```
1. Ajouter un étudiant
2. Afficher tous les étudiants
3. Rechercher un étudiant
4. Modifier un étudiant
5. Supprimer un étudiant
6. Trier les étudiants
7. Afficher les statistiques
8. Sauvegarder et quitter
```
Chaque option appellera une fonction spécifique.

---

## **Algorithmes de Tri et de Recherche :**
- **Tri par Bubble Sort** : pour trier les étudiants par note ou par nom.  
- **Recherche linéaire** : pour trouver un étudiant par nom ou ID.  

---

## **Plan d’Implémentation :**
1. **Écrire la structure Student dans `student.h`**.  
2. **Implémenter les fonctions CRUD (Create, Read, Update, Delete)** dans `student.c`.  
3. **Créer un menu interactif dans `main.c`** pour appeler les fonctions.  
4. **Lire et écrire les données dans `students.txt`**.  
5. **Tester chaque fonctionnalité**.  

---

## **Exercice Supplémentaire :**
- Implémenter un **tri par insertion** comme alternative.  
- Ajouter une **fonction de sauvegarde automatique** après chaque modification.  
- Gérer les **fichiers binaires** (`fwrite`, `fread`) au lieu de fichiers texte.  

---

## **Compétences Acquises après ce Projet :**
- Manipulation avancée des **pointeurs et structures**.  
- Utilisation des **algorithmes de tri/recherche**.  
- Maîtrise de l’**allocation dynamique et de la mémoire**.  
- Compréhension de la **gestion des fichiers** en C.  
- Capacité à **organiser un projet C en plusieurs fichiers**.  

---
