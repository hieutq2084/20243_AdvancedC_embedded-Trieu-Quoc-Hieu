// file: hieu.h
#ifndef HIEU_H
#define HIEU_H
// marco định nghĩa hằng số
# define pi 3.14  // 
# define ho_va_ten "Trieu Quoc Hieu"

// macro định nghĩa một func
// cú pháp chung của macro hàm:
// #define TEN_MACRO (tham so 1, tham so 2, ...) (biểu thức sử dụng tham số)

// VD1: định nghĩa hàm in ra tổng hai số
# define print_sum(a,b) \
printf("sum: %d",a+b);

// VD2: định nghĩa tìm min max của một dãy sử dụng ...  _VA_ARGS
# define max_min(...) \
int a[] = {__VA_ARGS__}; \
int max = a[0]; \
int min = a[0]; \
int len = sizeof(a)/sizeof(a[0]); \
for (int i = 0; i < len; i++){ \
    if (a[i] < min) {min = a[i];}; \
    if(a[i] > max) {max = a[i] ;}; \
} \
printf("max: %d\n", max); \
printf("min: %d\n", min);

// sử dụng #if #else
# define MSSV  2

#if MSSV == 20232084
  #define ten "Trieu Quoc Hieu"
  # define lop "06"
  
#elif MSSV == 202311893
  # define ten "Khong phai Hieu"
  # define lop "09"

#else
  # define ten "Khong co su lieu"
  # define lop "khong co"

# endif
# endif