#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Yêu cầu người dùng nhập một số nguyên
    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &n);

    // Kiểm tra điều kiện số nguyên tố
    if (n <= 1) {
        isPrime = 0; // Các số nhỏ hơn hoặc bằng 1 không phải số nguyên tố
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Nếu chia hết cho i, không phải số nguyên tố
                break;
            }
        }
    }

    // In kết quả
    if (isPrime) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}
