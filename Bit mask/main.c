# include <stdio.h>
# include "house.h"

int main(){
    unsigned setting = 0; // setting la 1 so 8 bit, moi bit tuong trung cho trang thai bat tat cua tung phong

    turn_on(&setting, LIVING_ROOM); 
    turn_on(&setting,KITCHEN);
    if(isOn(&setting,LIVING_ROOM) != 0 & isOn(&setting,KITCHEN) != 0){
        printf("Den phong khach va den bep da BAT\n");
    }
    turn_off(&setting,KITCHEN);
    if(isOn(&setting,KITCHEN) == 0){
        printf("Den bep da duoc TAT\n");
    }

    printf("Trang thai cua cac phong la: %u\n",setting);
}
// hien tai bay h chi con moi phong khach duoc bat 00000001->1
