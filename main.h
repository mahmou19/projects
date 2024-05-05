#ifndef MAIN_H
#define MAIN_H

#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>

#define LARGEUR_ECRAN 800
#define HAUTEUR_ECRAN 600
#define ESPACEMENT_MONSTRES 40  
#define NB_MONSTRES 10          

#define VAISSEAU_X (LARGEUR_ECRAN / 2)
#define VAISSEAU_Y (HAUTEUR_ECRAN - 30)
#define MONSTRE_Y 30


typedef enum {
    MONSTRE, VAISSEAU, MISSILE, BOMBE
} TypeEntite;

typedef struct entite {
    int id;
    TypeEntite type;
    int x;  
    int y;  
    int etat;  
    char *sprite;  
} Entite;

typedef struct listeEntites {
    Entite *entite;
    struct listeEntites *suivant;
} ListeEntites;


void ajouterEntite(ListeEntites **liste, Entite *nouvelleEntite)
void supprimerEntite(ListeEntites **liste, int id)
Entite *trouverEntite(ListeEntites *liste, int id)
Entite *creerEntite(int id, TypeEntite type, int x, int y, char *sprite)
void initialiserJeu(ListeEntites **liste)
void deplacerMonstres(ListeEntites *liste)
#endif
