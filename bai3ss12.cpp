#include <stdio.h>
int is_prime(int number) {
    if (number < 2) {
        return 0; // False
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // False
        }
    }
    return 1; // True
}
int count_primes_in_array(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int size1, size2;

    // Nh?p kích thu?c c?a hai m?ng
    printf("Nhap kich thuoc cua mang 1: ");
    scanf("%d", &size1);

    printf("Nhap kich thuoc cua mang 2: ");
    scanf("%d", &size2);

    // Khai báo m?ng và nh?p giá tr? t? bàn phím
    int arr1[size1], arr2[size2];

    printf("Nhap cac phan tu cua mang 1:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Nhap cac phan tu cua mang 2:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Ð?m s? lu?ng s? nguyên t? trong t?ng m?ng
    int count1 = count_primes_in_array(arr1, size1);
    int count2 = count_primes_in_array(arr2, size2);

    // In ra k?t qu?
    printf("So luong so nguyen to trong mang 1: %d\n", count1);
    printf("So luong so nguyen to trong mang 2: %d\n", count2);

    // So sánh và in ra m?ng có nhi?u s? nguyên t? hon
    if (count1 > count2) {
        printf("Mang 1 co nhieu so nguyen to hon.\n");
    } else if (count1 < count2) {
        printf("Mang 2 co nhieu so nguyen to hon.\n");
    } else {
        printf("Hai mang co so luong so nguyen to bang nhau.\n");
    }

    return 0;
}

