#include <stdio.h>
#include <stdlib.h>

// Protótipo
int fatorial(int);

main(){

  int x;
  printf("Numero:");
  scanf("%d",&x);
  printf("O fatorial: %i\n", fatorial(x));

}

// Função
int fatorial(int x){

  if(x != 0){

    x *= fatorial(x-1);

  }else{
    x = 1;
  }

return x;


}
