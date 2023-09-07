/*

#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f

int main() {
  float preco_produto =100.0f;
  float valor_icms = preco_produto * 17.f;
  float valor_cofins = preco_produto * 0.076f;
  float valor_pispasep = preco_produto * 0.0165f;
  float preco_final = (1 +0.17f + 0.076f + 0.0165f) * preco_produto;

  printf("O preco final do produto é %f\n", preco_final);
  printf("O valor do ICMS é %\n", valor_icms);
  printf("O valor do COFINS é %f\n", valor_cofins);
  printf("O valor do PIS_PASEP é %\n", valor_pispasep);
  
  return 0;
}