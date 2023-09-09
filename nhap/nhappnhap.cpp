#include <iostream>
using namespace std;

// Hàm nhập mảng
void nhapMang(int a[], int n) {
    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Hàm xuất mảng
void xuatMang(int a[], int n) {
    cout << "Mang sau khi sao chep la: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Hàm sao chép những số dương vào cuối mảng
void saoChep(int a[], int &n) {
    // Khai báo biến m là số lượng phần tử của mảng sau khi sao chép
    int m = n;
    // Duyệt qua các phần tử của mảng
    for (int i = 0; i < n; i++) {
        // Nếu phần tử hiện tại là số dương
        if (a[i] > 0) {
            // Sao chép phần tử đó vào vị trí m
            a[m] = a[i];
            // Tăng m lên 1
            m++;
        }
    }
    // Cập nhật số lượng phần tử của mảng bằng biến m
    n = m;
}

int main() {
     // Khai báo mảng a có tối đa 100 phần tử
    int n; // Biến lưu số lượng phần tử của mảng

    // Nhập số lượng phần tử của mảng
    do {
        cout << "Nhap so luong phan tu cua mang (0 < n <= 50): ";
        cin >> n;
    } while (n <= 0 || n > 50);
	int *a = new int [n+5] ; 
    // Nhập mảng
    nhapMang(a, n);

    // Sao chép những số dương vào cuối mảng
    saoChep(a, n);

    // Xuất mảng sau khi sao chép
    xuatMang(a, n);
	delete []a ;
    return 0;
}
