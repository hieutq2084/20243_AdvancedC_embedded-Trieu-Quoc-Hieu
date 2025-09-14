Bitmask
1 _Đặt vấn đề_: sử dụng 0 và 1 để biểu diễn 2 trạng thái
2. _Thư viện include <stdint.h>_
uint8_t gender; -> 8 bit
uint_t status; ->8 bit VF STM32-> bộ nhớ 32 byte
 VD OFF: 0b00000000
 VD ON: 0b00000001
 -> 7 bit tốn bộ nhớ -> cần bit mask
3. _BitMask_
+ bitmask operator
- NOT
- AND
- OR
- XOR

- shift left: << bit ở bên phải dịch sang trái
- shift right: >> bit ở bên trái dịch sang phải
- đặt bit -> bật  các options sd phép or option |= (1<<1) bật option 1
- xoá bit -> tắt các option bằng phép $ và ~ option &= ~(1<<1)
- kiểm tra bit  sử dụng phép &