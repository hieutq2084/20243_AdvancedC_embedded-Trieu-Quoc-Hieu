#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int num_sum(int num_arg,...); // hàm tính tổng trên tử
int den_sum(int num_arg,...);// hàm tính tổng dưới mẫu
float divide(int num, int den); // Ham de chia tu va mau
#define NUM(...) num_sum(__VA_ARGS__)
#define DEN(...) den_sum(__VA_ARGS__)

# endif