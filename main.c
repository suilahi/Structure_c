#include <stdio.h>

struct Adresse
{
    char ville[50];
    char rue[20];
    int code_postale;
};

struct Personne {
    char nom[31];
    int  age;
    struct Adresse adresse;
};

int main(){

    struct Personne personne;

    printf("enter le nom : ");
    scanf(" %[^\n]", personne.nom);
    printf("enter l'age : ");
    scanf("%d", &personne.age);
    printf("enter la ville : ");
    scanf(" %[^\n]",personne.adresse.ville);
    printf("enter la rue : ");
    scanf(" %[^\n]",personne.adresse.rue);
    printf("enter le codepostale : ");
    scanf("%d", &personne.adresse.code_postale);

    printf("Informations du person:\n");
    printf("Nom: %s\n", personne.nom);
    printf("Age: %d\n", personne.age);
    printf("Ville: %s\n", personne.adresse.ville);
    printf("Rue: %s\n", personne.adresse.rue);
    printf("Code postale: %d\n", personne.adresse.code_postale);
}

