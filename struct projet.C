#include <stdio.h>
#include <stdlib.h>
//ajout liste électorale
typedef struct {
    int jours;
    int mois;
    int annee;
}Date;
typedef struct {
   int ID_liste;
   char governorat[20];
   char orientation[20];
   Date date_creation;
   }liste;
//ajout candidat

typedef struct {
   char nom[20];
   char prénom[20];
   int ID_candidat;
   char position[20];
}candidat;
