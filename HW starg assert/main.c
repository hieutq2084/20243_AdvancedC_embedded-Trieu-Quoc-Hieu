# include <stdio.h>
# include "math_utils.h"


int main(){
  int tu;
  int mau;
  float num;
  tu = NUM(4,1,5,6,1000);
  mau = DEN(3,0,0,0);
  num = divide(tu, mau);
printf("Tu so la: %d\n",tu);
 printf("Mau so la: %d\n",mau);
 printf("Gia tri cua phan so la :%f",num);
}