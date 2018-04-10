#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(){             //funço de scan de todos os caracteres da palavra.
    char x;
    scanf("%c", &x);
    if(x =='\0'){
        return;
    }
    scan();
    printf("%c", x);     //printf após a chamada recursiva para inverter a pilha de execução de forma a inverter a ordem dos caracteres.
}

int main() {
    scan();
	return 0;
}
