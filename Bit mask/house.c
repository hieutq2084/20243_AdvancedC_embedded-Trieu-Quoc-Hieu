# include <stdio.h>
# define LIVING_ROOM (1<<0)
# define BED_ROOM (1<<1)
# define KITCHEN (1<<2)
# define BATH_ROOM (1<<3)
# define FAN (1<<4)
# define BALCONY (1<<5)
# define GARDEN  (1<<6)
# define ALARM (1<<7)

void turn_on(unsigned *setting, unsigned char option ){
    *setting |= option;
}

void turn_off(unsigned *setting, unsigned char option){
    *setting &= ~option;
}

int isOn(unsigned*setting, unsigned char option){
    return (*setting & option);
}

