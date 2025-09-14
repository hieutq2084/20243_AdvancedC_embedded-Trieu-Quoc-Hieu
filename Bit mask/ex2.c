// cho mot so nguyen duong , yeu cau trich 4 bit cuoi cua so do
// cach lam: sd phep & voi 1 voi 4 bit cuoi, & voi 0 voi cac bit con lai
#include <stdio.h>
int main(){
    unsigned char num = 0b10110110;
    unsigned char mask =0b00001111;
    unsigned char low4 ;
    low4 = num & mask;
    printf("%d",low4);
}