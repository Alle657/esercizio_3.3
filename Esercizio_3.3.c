#include <stdio.h>

int main() {
     int eta;
     char nome;
    printf("Inserisci nome ed eta'\n");
    scanf("%c", &nome);
    scanf("%d", &eta);
    if(eta >= 18){
        printf("%c e maggiorenne", nome);
    }else{
        printf("%c e minorenne", nome);
    }
    return 0;
}
