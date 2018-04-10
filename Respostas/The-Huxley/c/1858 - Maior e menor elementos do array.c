#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void scan(int n, int maior, int menor){
    if(n == 0){
        printf("%d\n%d", menor, maior);           //print do maior e do menor.
        return;
    }
    int x;
    scanf("%d", &x);
    if(x>maior){                                 //forma de guardar o maior numero.
        maior = x;
    }
    if(x<menor){
        menor = x;                               //forma analoga de guardar o menor numero.
    }
    scan(n-1, maior, menor);
}
int main(){
    scan(6, 0, 2147483647);                      //maior int possivel.
	return 0;
}
