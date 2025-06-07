#include <stdio.h>


void menu() {
    int option = -1;

    while (option != 0) {
        system("clear"); 
        printf("========================================\n");
        printf("         🏴‍☠️ PIRATE DOGFIGHT         \n");
        printf("========================================\n\n");
        
        printf("🎮 Bem-vindo ao Pirate Dogfight!\n");
        printf("Você está pilotando um caça contra o Pirata do Céu.\n");
        printf("Seu objetivo é se alinhar com ele e disparar antes que ele atire!\n\n");

        printf("📜 Controles:\n");
        printf("  - A : Acelerar\n");
        printf("  - D : Desacelerar\n");
        printf("  - F : Disparar (somente quando estiver nivelado)\n\n");

        printf("1 - Iniciar jogo\n");
        printf("0 - Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("\n🚀 Iniciando o jogo...\n");
                // Aqui você chama a função do jogo futuramente
                break;
            case 0:
                printf("\n Saindo do jogo. Até mais, piloto!\n");
                break;
            default:
                printf("\n Opção inválida! Tente novamente.\n");
        }

        printf("\nPressione Enter para continuar...");
        getchar(); // consome o '\n' deixado pelo scanf
        getchar(); // espera o Enter
    }
}

int main() {
    menu();
    return 0;
}
