//programei em línguiagem c pois tenho mais familiaridade por conta da faculdade, ainda não tive muito contato com outras línguagens

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int option = 1; 
    while (option != 0) {
        char NomeHeroi[99];
        int xpHeroi;
        
        printf("Olá caro Herói! Por favor, diga-me o seu nome: ");
        scanf("%s", NomeHeroi);

        printf("Bem-vindo, %s. Por favor, insira sua experiência (XP): ", NomeHeroi);
        scanf("%d", &xpHeroi);
        
        switch (xpHeroi) {
            case 0 ... 1000:
                printf("HEROI: %s\n CLASSE: FERRO\n ", NomeHeroi);
                break;
            case 1001 ... 2000:
                printf("HEROI: %s\n CLASSE: BRONZE\n ", NomeHeroi);
                break;
            case 2001 ... 5000:
                printf("HEROI: %s\n CLASSE: PRATA\n ", NomeHeroi);
                break;
            case 5001 ... 7000:
                printf("HEROI: %s\n CLASSE: OURO\n ", NomeHeroi);
                break;
            case 7001 ... 8000:
                printf("HEROI: %s\n CLASSE: PLATINA\n ", NomeHeroi);
                break;
            case 8001 ... 9000:
                printf("HEROI: %s\n CLASSE: ASCENDENTE\n ", NomeHeroi);
                break;
            case 9001 ... 10000:
                printf("HEROI: %s\n CLASSE: IMORTAL\n ", NomeHeroi);
                break;
            default:
                printf("HEROI: %s\n CLASSE: RADIANTE\n ", NomeHeroi);
                break;
        }

        printf("Obrigado por usar nosso classificador de nível Yuusha-dono!");
        printf("Para sair, digite 0. Para classificar outro herói, digite 1:");
        scanf("%d", &option);
    }

    return 0;
}