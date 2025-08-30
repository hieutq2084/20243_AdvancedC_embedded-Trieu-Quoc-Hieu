# include <stdio.h>
#include <assert.h>

void check_den(int den) {
    if (den == 0) {
        printf("Mau so bang 0, khong the in ra phan so\n");
        assert(den != 0); // chương trình sẽ dừng 
    }
}