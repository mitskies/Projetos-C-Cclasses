
#include <stdio.h>
#include <locale.h> // estou fazendo pelo vscode com o encoding ISO-8859-3
//não consigo usar iostream por aqui, então essa foi a forma que funcionou para que fosse possível testar, estou tentando arrumar isso 

int main() {
    setlocale (LC_ALL, "portuguese");
    int num;
    int somaQuadrados = 0;

    printf("Digite uma sequência de números inteiros (insira 0 para encerrar a soma dos quadrados):\n");
    
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break; // se o numero for igual a 0, encerra e faz a soma 
        }
        somaQuadrados += num * num; // multiplica o num por ele mesmo (eleva ao quadrado) e o resultado armazenado, dps é somado
    }
    
    printf("A soma dos quadrados dos números inseridos é: %d\n", somaQuadrados);
    
    return 0;
}
