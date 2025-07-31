# include <stdio.h>
# include "hieu.h"

int main(){
    // in số pi được define trong hieu.h
    printf(" Gia tri pi ban dau: %f\n", pi); 

    // in ra ho_va_ten được define trong hieu.h
    printf ("%s\n", ho_va_ten);

    // sử dụng hàm max_min được define trong hieu.h
    max_min(1,2,3,4,5,6,7,89,0,-1,893);

    // in ra họ và tên cũng như là lớp
    printf("%s\n", ten);
    printf("%s\n",lop);
    

    // sử dụng undef thay đổi giá trị pi-> khi đó giá trị pi hiện tại là 122 nhưng giá trị pi trong thư viện vẫn là 3,14
    #undef pi
    #define pi 122
    printf("Gia tri pi ve sau: %d\n", pi);


    // sử dụng hàm tong khai báo trong hieu.c
    tong (8,9);
    return 0;
}