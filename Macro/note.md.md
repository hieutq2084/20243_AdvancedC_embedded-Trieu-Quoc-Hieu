
- 3 nhóm chính
1.#include
2.# define, #undef
3.#if #elif #else #endif

# tạo thành chuỗi
## nối chuỗi
...
_VA_ARGS -> điền nhiều tham số, không bị giới hạn


# Copiler process

1  Preproceser (.c->.i) gcc -E main.c -o main.i
2. Copiler (.i->.s) gcc -S main.i -o main.s
3. Assembler (.s->.o) gcc -c main.s -o main.o
4. Linker   gcc main.o hieu.o -o main.exe
5. Execute .\main.exe

Biên dịch từ file.c sang file.o: gcc -c main.c -o main.o
Lệnh tắt: gcc main.c file.c -o main.exe