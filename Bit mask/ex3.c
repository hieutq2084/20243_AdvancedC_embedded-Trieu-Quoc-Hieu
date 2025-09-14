// cho mot so bat ki;
// kiem tra trang thai cua bit thu 5;
// dao trang thai cua bit thu 5

# include<stdio.h>

void check_on(unsigned num){
    if(num & (1<<5)){
    printf("Bit so 5 dang duoc bat\n");

    
    }
    else{ 
        printf("Bit so 5 dang tat\n");
        

        }    }

 int main(){
    unsigned num = 0b00100000;
    check_on(num);
    num ^= (1<<5);
    check_on(num);

 }