# Mini-Projet : Système de Gestion des Étudiants

## Objectif  
Ce projet consiste à développer un programme en C pour gérer une liste d’étudiants avec plusieurs opérations sur les tableaux. Le but est de manipuler efficacement les tableaux, les fonctions, les conditions, les boucles et les structures de contrôle pour offrir une gestion complète des données étudiantes.

## Fonctionnalités principales  
Le programme doit permettre les opérations suivantes :  
1. Ajouter un ou plusieurs étudiants avec leurs informations.  
2. Afficher la liste complète des étudiants.  
3. Rechercher un étudiant par son nom.  
4. Modifier les informations d’un étudiant.  
5. Supprimer un étudiant de la liste.  
6. Trier les étudiants par nom ou par note.  
7. Calculer et afficher la moyenne des notes.  
8. Trouver et afficher l’étudiant avec la note la plus haute et la plus basse.  
9. Quitter le programme.

## Détails du Projet

### 1. Ajouter un ou plusieurs Étudiants  
- Chaque étudiant est défini par :  
  - Nom (chaîne de caractères).  
  - Note (entier ou flottant).  
- Le programme doit permettre d’ajouter plusieurs étudiants à la suite.  
- Les informations sont stockées dans des tableaux parallèles (un tableau pour les noms, un autre pour les notes).  
- Le nombre maximal d’étudiants est fixé (exemple : 50).

### 2. Afficher la Liste Complète des Étudiants  
- Parcourir les tableaux pour afficher les informations de chaque étudiant avec son indice.

### 3. Rechercher un Étudiant par Nom  
- Demander un nom à l’utilisateur et rechercher dans le tableau.  
- Afficher les informations si trouvé, ou un message d’erreur sinon.

### 4. Modifier les Informations d’un Étudiant  
- Permettre de modifier le nom et/ou la note d’un étudiant identifié par son nom ou son indice.

### 5. Supprimer un Étudiant  
- Supprimer un étudiant du tableau par nom ou indice.  
- Décaler les éléments restants pour combler l’espace laissé.

### 6. Trier les Étudiants  
- Implémenter un tri par ordre alphabétique du nom ou par note croissante/décroissante.  
- Afficher la liste triée après l’opération.

### 7. Calculer la Moyenne des Notes  
- Additionner toutes les notes et diviser par le nombre d’étudiants.  
- Afficher la moyenne.

### 8. Trouver la Note la Plus Haute et la Plus Basse  
- Parcourir le tableau des notes pour trouver la valeur maximale et minimale.  
- Afficher les étudiants correspondants.

### 9. Quitter le Programme  
- Permettre à l’utilisateur de quitter proprement le programme via un menu.

## Technologies et Concepts Utilisés  
- **Variables** : Pour stocker données temporaires et constantes.  
- **Tableaux** : Pour gérer plusieurs étudiants et leurs informations.  
- **Chaînes de caractères** : Manipulation des noms d’étudiants.  
- **Conditions (if, switch)** : Pour la gestion du menu et la prise de décisions.  
- **Boucles (for, while)** : Pour parcourir, ajouter, modifier, supprimer et trier les données.  
- **Fonctions** : Pour modulariser le programme (ajouter, afficher, rechercher, modifier, supprimer, trier, calculer).  
- **Gestion des entrées utilisateur** : Pour assurer la robustesse des données saisies.
