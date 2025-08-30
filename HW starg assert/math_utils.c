# include <stdio.h>
# include <stdarg.h>
# include "math_utils.h"
# include "error_handler.h"
// Hàm cộng tổng của tử số
int num_sum( int num_args,...){
    va_list num;
    va_start(num, num_args);
    int sum = 0;
    for (int i = 0; i < num_args; i++){
        sum = sum + va_arg(num,int);
    }
    va_end(num);
    return sum;
}

// Hàm cộng tổng của mẫu số
int den_sum( int num_args,...){
    va_list num;
    va_start(num, num_args);
    int sum = 0;
    for (int i = 0; i < num_args; i++){
        sum = sum + va_arg(num,int);
    }
    va_end(num);
    return sum;
}

// ham Divide
float divide( int num, int den){
    check_den(den);
    return (float)num/den;

}