#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
} Carta;

void compararCartas(Carta jogador, Carta oponente, int atributo) {
    int valorJogador, valorOponente;

    switch (atributo) {
        case 1:
            valorJogador = jogador.forca;
            valorOponente = oponente.forca;
            break;
        case 2:
            valorJogador = jogador.velocidade;
            valorOponente = oponente.velocidade;
            break;
        case 3:
            valorJogador = jogador.inteligencia;
            valorOponente = oponente.inteligencia;
            break;
        default:
            printf("Atributo inválido!\n");
            return;
    }

    printf("\nVocê escolheu: %s (Força: %d, Velocidade: %d, Inteligência: %d)\n", jogador.nome, jogador.forca, jogador.velocidade, jogador.inteligencia);
    printf("Oponente: %s (Força: %d, Velocidade: %d, Inteligência: %d)\n", oponente.nome, oponente.forca, oponente.velocidade, oponente.inteligencia);

    if (valorJogador > valorOponente) {
        printf("\n🎉 Você venceu essa rodada!\n");
    } else if (valorJogador < valorOponente) {
        printf("\n😞 Você perdeu essa rodada.\n");
    } else {
        printf("\n⚖️ Empate!\n");
    }
}

int main() {
    Carta cartasJogador = {"Dragão Flamejante", 80, 60, 40};
    Carta cartasOponente = {"Golem de Pedra", 70, 30, 50};

    int atributo;

    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Sua carta é: %s\n", cartasJogador.nome);
    printf("Escolha um atributo para competir:\n");
    printf("1 - Força\n");
    printf("2 - Velocidade\n");
    printf("3 - Inteligência\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    compararCartas(cartasJogador, cartasOponente, atributo);

    return 0;
}
