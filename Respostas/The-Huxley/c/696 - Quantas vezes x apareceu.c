#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(int n, int m[]){            //função de scan para todos os numeros + x.
    scanf("%d", &m[n]);
    if(n==0){
        return;
    }
    scan(n-1, m);
}

void check(int m[], int cont, int n){ //função de checagem de semelhança entre todas os numeros e x.
    if(n==0){
        printf("%d", cont);
        return;
    }
    else if(m[n]==m[0]){              //m[n] é o número atual, m[0] é "x".
        cont++;
    }
    check(m, cont, n-1);
}

int main() {
    int arr[11];                      //array com todos os numerose x.
    scan(10, arr);
    check(arr, 0, 11);
	return 0;
}
