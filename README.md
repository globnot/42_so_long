# so_long

*This project has been created as part of the 42 curriculum by aborda.*

---

## Description

**So_long** est un projet graphique 2D utilisant la bibliothèque MiniLibX. L'objectif est de créer un jeu simple où le joueur doit collecter tous les objets présents sur la carte avant de s'échapper par la sortie, le tout en un minimum de mouvements.

### Objectifs

- Créer un jeu 2D fonctionnel avec affichage graphique
- Implémenter un système de validation de map robuste
- Gérer les événements clavier et fenêtre

### Règles du jeu

- Le joueur se déplace avec les touches **W, A, S, D** 
- Il doit collecter tous les collectibles avant de pouvoir sortir
- La sortie n'est accessible qu'une fois tous les collectibles récupérés
- Le nombre de mouvements est affiché dans le terminal à chaque déplacement
- Le joueur ne peut pas traverser les murs

### Composants de la map

- `0` : Sol
- `1` : Mur
- `C` : Collectible
- `E` : Sortie
- `P` : Position de départ du joueur

---

## Instructions

### Prérequis

- `gcc`
- `make`
- **MiniLibX** (incluse dans le projet)
- Système X11 (Linux)

### Compilation

**Racine du projet**
```bash
make
```

Cette commande génère l'exécutable `so_long`

**Dans le dossier minilinx**
```bash
make
```

### Utilisation

```bash
./so_long <map_file.ber>
```

**Exemples :**

```bash
# Lancer le jeu avec une map valide
./so_long maps/valid_map.ber

# Tester la gestion d'erreur
./so_long maps/invalid_not_rectangular.ber
```

### Commandes Makefile

- `make` ou `make all` : compile le projet
- `make clean` : supprime les fichiers objets
- `make fclean` : supprime les fichiers objets et l'exécutable
- `make re` : recompile entièrement le projet

### Contrôles en jeu

- **W / ↑** : Déplacement vers le haut
- **A / ←** : Déplacement vers la gauche
- **S / ↓** : Déplacement vers le bas
- **D / →** : Déplacement vers la droite
- **ESC** : Quitter le jeu
- **Croix (X)** : Fermer la fenêtre

### Gestion d'erreurs

Le programme affiche `Error` stderr dans les cas suivants :

- Fichier inexistant ou illisible
- Extension invalide (pas `.ber`)
- Map non rectangulaire
- Map non fermée par des murs
- Absence ou doublon de joueur/sortie
- Aucun collectible présent
- Caractères invalides
- Pas de chemin valide vers tous les collectibles ou la sortie

### Tests

Un script de test est fourni pour vérifier le bon fonctionnement du parsing :

```bash
./test.sh
./testfull.sh
```
---

## Resources

### Documentation et références

- [MiniLibX Documentation](https://harm-smits.github.io/42docs/libs/minilibx)
- [Flood Fill Algorithm](https://en.wikipedia.org/wiki/Flood_fill)
- [Kao tileset](https://kaopxl.itch.io/pixel-art-dungeon-asset-pack-32x32-full-version)
- Sujet officiel du projet : `en.subject.pdf`
- Norme 42 : `fr.norme.pdf`

### Utilisation de l'IA

Dans le cadre de ce projet, l'intelligence artificielle (Claude) a été utilisée comme **outil d'assistance pédagogique** en complément du **PEERLEARNING** :

- **Compréhension de concepts** : clarification de notions (MiniLibX, flood fill, gestion d'événements graphiques)
- **Raisonnement** : aide à la réflexion sur l'architecture du code et la validation de map
- **Debugging** : assistance dans l'identification de bugs logiques

**Important** : L'IA n'a **jamais été utilisée pour générer du code complet**. L'ensemble du code a été écrit manuellement, avec l'IA servant uniquement de guide pédagogique pour comprendre les concepts et améliorer le raisonnement.

---

## Auteur

**Antoine Borda (aborda)** - École 42 Paris
