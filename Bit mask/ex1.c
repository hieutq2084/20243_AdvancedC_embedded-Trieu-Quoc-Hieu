// Đề:
//Cho một biến unsigned char flags = 0; đại diện cho 8 trạng thái (0–7).

//Bật bit thứ 2 (đếm từ 0).

//Kiểm tra bit thứ 2 có bật không.

//Tắt bit thứ 2.

# include <stdio.h>
int main(){
    unsigned char flag = 0; // 00000000

// bat bit so 2 va 3
    flag |= (1<<2) | (1<<3);
    printf("Sau khi bat bit 2 va 3: 0x%X\n", flag);

    // tat bit so 3
    flag &= ~(1<<3);
    
    if(flag & (1<<2)){
        printf("Bit so 2 dang duoc bat\n");
    }

    if((flag &(1<<3))==0){
        printf("Bit so 3 dang duoc tat");
    }

} 

// != (1<<n) de bat bit thu n
// &= ~ (1<<n)de tat bit thu n
// & (1<<n) kiem tra bit thu n