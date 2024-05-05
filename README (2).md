# Prérequis

* Pour compiler le sujet : hevea (pour les enseignants)
* Pour la lib graphique : libsdl1.2-dev, libsdl2-ttf-dev

# Documentation

* sujet : https://rex.plil.fr/Enseignement/Algo/Projet.SE3/
* SDL : https://www.libsdl.org/

# Déroulement

## Partie programmation

22h :

Les éléments *Bonus* ne sont à traiter que si vous considérez que vous êtes en avance sur le planning.

1. git, make, affichage, refresh, temporisation
   * afficher un monstre
   * attendre
   * effacer le monstre
   * en afficher un autre
2. structures de données
   * structure `entite` pour les objets affichables
   * structure `listeEntites`
3. initialisation du jeu
   * une ligne de monstres. *Bonus* : plusieurs lignes de monstres, plusieurs types de monstres
   * un vaisseau
   * *Bonus* : boucliers ---> 2 séances de 4h
4. déplacement entités
   * monstres : gauche->droite
   * monstres : changement de sens arrivé au bord
   * *Bonus* : changement de lutin au cours du déplacement
   * *Bonus* : lacher des bombes
   * *Bonus* : seul les monstres du bas lachent des bombes
5. contrôle vaisseau
   * quitter
   * droite/gauche, un déplacement par appui. *Bonus* : déplacement jusqu'à relâchement de touche
   * tirer, déplacer missiles
   * *Bonus* : limiter la cadence de tir ---> 2 séances de 4h
6. calcul de collisions
   * fonction de collision entre deux entités
   * fonction de collision entité/liste d'entités
   * collision vaisseau/monstres, vaisseau/bombes
   * *Bonus* : fonction de collision liste/liste
   * *Bonus* : collision monstres/missiles, missiles/bombes, boucliers
   * *Bonus* : changement de lutin sur collision (écornage)
   * *Bonus* : résistance sur le vaisseau/sur les monstres
7. fin de jeu
   * gagner/perdre
   * stoper le jeu
   * *Bonus* : afficher un message texte (gagné/perdu)
   * *Bonus* : gestion des niveaux ---> rendu final
8. *Bonus* : scores