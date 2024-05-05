#include <stdlib.h>  
#include "main.h"
void ajouterEntite(ListeEntites **liste, Entite *nouvelleEntite) {
    ListeEntites *nouveau = (ListeEntites *)malloc(sizeof(ListeEntites));
    if (nouveau == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        return;
    }
    nouveau->entite = nouvelleEntite;
    nouveau->suivant = *liste;
    *liste = nouveau;
}

void supprimerEntite(ListeEntites **liste, int id) {
    ListeEntites *temp = *liste, *prev;
    while (temp != NULL && temp->entite->id != id) {
        prev = temp;
        temp = temp->suivant;
    }
    if (temp == NULL) return;  
    if (temp == *liste) {
        *liste = temp->suivant;   
    } else {
        prev->suivant = temp->suivant;  n
    }
    free(temp);
}

Entite *trouverEntite(ListeEntites *liste, int id) {
    ListeEntites *current = liste;
    while (current != NULL) {
        if (current->entite->id == id) {
            return current->entite;
        }
        current = current->suivant;
    }
    return NULL;  
}




Entite *creerEntite(int id, TypeEntite type, int x, int y, char *sprite) {
    Entite *nouvelleEntite = (Entite *)malloc(sizeof(Entite));
    if (nouvelleEntite == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        return NULL;
    }
    nouvelleEntite->id = id;
    nouvelleEntite->type = type;
    nouvelleEntite->x = x;
    nouvelleEntite->y = y;
    nouvelleEntite->etat = 1; 
    nouvelleEntite->sprite = sprite;
    return nouvelleEntite;
}


void initialiserJeu(ListeEntites **liste) {
   
    for (int i = 0; i < 5; i++) { 
        Entite *monstre = creerEntite(i, MONSTRE, 100 + i * 20, 50, "sprite_monstre");
        ajouterEntite(liste, monstre);
    }

    Entite *vaisseau = creerEntite(100, VAISSEAU, 200, 300, "sprite_vaisseau");
    ajouterEntite(liste, vaisseau);
}


void deplacerMonstres(ListeEntites *liste) {
    ListeEntites *current = liste;
    int direction = 1;  

    while (current != NULL) {
        if (current->entite->type == MONSTRE) {
            if (current->entite->x >= LARGEUR_ECRAN - 10 || current->entite->x <= 10) {
                direction *= -1;  
                current->entite->y += 10;  /
            }
            current->entite->x += direction * 5;  
        }
        current = current->suivant;
    }
}

