#include <stdio.h>
#include <string.h>

void abertura() {

    printf("************************************************\n");
    printf("*     BEM VINDO AO JOGO DA FORCA!              *\n");
    printf("************************************************\n\n");


}

void chuta(char chutes[26], int* tentativas){

     char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);

    chutes[(*tentativas)] = chute;
    (*tentativas)++; 
    


}

int jachutou(char letra, char chutes[26], int tentativas ){
    int achou = 0;

        for(int j = 0; j < tentativas; j++) {
            if(chutes[j] == letra) {
            achou = 1;
                break;

                }
            }

    return achou; 

}




int main() {

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura(); 

    do {

        for(int i = 0; i < strlen(palavrasecreta); i++) {
            
            // aqui estava o codigo   
          int achou = jachutou(palavrasecreta[i], chutes, tentativas); 

            if(achou) {
                printf("%c ", palavrasecreta[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");

       chuta(chutes, &tentativas);
       

    } while (!acertou && !enforcou);

}