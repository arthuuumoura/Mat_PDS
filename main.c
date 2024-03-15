#include <stdio.h>
#include "matematica.h"
  int main (){
    float n_radiano;
    printf("Digite seu numero em radiano\n");
    scanf("%f",&n_radiano);
    float seno = calcular_seno(n_radiano);
    float cosseno = calcular_cosseno(n_radiano);
     float tangente = calcular_tangente(n_radiano);
     printf("seno %.3f\n", seno);
     printf("cosseno %.3f\n", cosseno);
     printf("tangente %.3f\n", tangente);
    return 0;
  }

