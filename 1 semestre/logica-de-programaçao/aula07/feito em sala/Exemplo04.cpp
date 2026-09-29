#include <stdio.h>
 
int main()
{
//   for(int n=1;n<=10;n=n+1){
//       printf("%i\n",n);
//   }
    int n=11;
    while(n<=10){
        printf("while %i\n",n);
        n=n+1;
    }
  //  int n=1;
    n=11;
    do{
        printf("do %i\n",n);
        n=n+1;
    }while(n<=10);
    return 0;
}