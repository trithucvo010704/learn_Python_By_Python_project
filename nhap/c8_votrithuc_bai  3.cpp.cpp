#include<iostream>
#include<math.h>
using namespace std ;
struct sinhvien   {
	char hoten[30];
	char que[30];
	char msv[30];
	float dtb  ; 
};
void nhap(sinhvien x[], int n ){
	for(int i = 0 ; i<n ; i++){
		cout << "  NHAP THONG TIN SINH VIEN THU : "<< i +1 <<endl ;
		cin.ignore();
		cout << " nhap ho ten : ";
		cin.getline(x[i].hoten,30);
		cout << "  nhap que quan :"; 
		cin.getline(x[i].que,30);
		cout << " nhap ma sinh vien :";
		cin.getline(x[i].msv,30);
		cout << " NHAP DTB :"; 
		cin >> x[i].dtb ; 
	}
}
void xuat(sinhvien x[], int n) {
	for(int  i = 0 ; i< n ; i++){
		cout << " THONG TIN SINH VIEN THU  "<<i+  1 <<endl ;
		cout <<" HO TEN : "<< x[i].hoten<<endl ;
		cout << " QUE QUAN : " <<x[i].que<<endl ;
		cout << " MSV : "<< x[i].msv<<endl ;
		cout << "DTB  : "<<x[i].dtb  <<endl ;
	}
}

int main(){
	/* int n ; cout << " nhap so luong sinh vien : "; cin >>  n ;
	sinhvien x[100];
	nhap(x,n);
	xuat(x,n);*/
	char x[30]  ; cin >>  x ; 
	cout << strlen(x);
}
	
