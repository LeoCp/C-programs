#include <stdio.h>
#include <stdlib.h>

//
int mdc(int,int);

main (){
  int x,y;
  system("clear");
  printf("mdc(m,c)\n");
  printf("m:");scanf("%d",&x);
  printf("n:");scanf("%d",&y);
  printf("------------\n");
  printf("%d\n",mdc(x,y));
}

int mdc(int x,int y){
  if(x%y != 0){
    mdc(y,x%y);
  }else{
    return y;
  }
}
