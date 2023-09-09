#include<iostream>
#include<cstdio>
#include<string.h>
#include<bits/stdc++.h>
using namespace std  ; 
struct nhanvien{
	string mnv,tnv; 
	int tuoi ; 
};
void nhapmotnguoi(nhanvien &x ){
	cout << " nhap ma nhan vien : ";
	cin.ignore() ; 
	getline(cin,x.mnv );
	cout << " nhap ten nhan vien : ";
	getline(cin,x.tnv ); 
	cout << " nhap tuoi : "  ; 
	cin >> x.tuoi ; 
}
void xuatmotnguoi(nhanvien & x ){
	cout << "  ma nhan vien : " << x.mnv <<endl ; 
	cout << "  ten nhan vien : "<<  x.tnv <<endl ;
	cout << " so tuoi nhan vien : "<< x.tuoi <<endl ;
	
}
void nhap( nhanvien x[], int  n){
	for ( int i = 0 ; i< n ; i++ ){
		cout << " hay nhap thong tin sv thu "<< i+ 1  << endl ;
		nhapmotnguoi(x[i]);
	}
}
void xuat( struct nhanvien x[], int n ){
	for( int i = 0  ; i< n ; i++ ){
		cout << " thong tin sinh vien thu  "<< i+1 << "la : "<<endl ;
		xuatmotnguoi(x[i] );
	}
}
void timkiem(nhanvien x[], int n , string mnv ){
	int vt = -1;  
	for(int i = 0 ; i< n ; i++ ){
		if(x[i].mnv == mnv ){
			cout << " YES "<<endl ;
			vt = i ;  
			xuatmotnguoi(x[i]);
			break ;
		}
	}
	if (vt == -1  ){
		cout << " NO ! " ;
	}
}

void chennhanvien(nhanvien x[], int n , int&  vtthem ){
	
	if(vtthem < 0 && vtthem> n ){
		cout << " vi tri them khong hop le ! " <<endl ;
		
	} 
	for(int i = n-1  ; i>=  vtthem-1 ; --i ){
		x[i+1 ] = x[i] ;
	}
	nhapmotnguoi(x[vtthem]);
	n++; 
	cout << " danh sach sau khi them  : " <<endl ; 
	xuat(x,n);
}
void xoanhanvien(nhanvien x[], int n , int  & vtxoa ){
	 
	if( vtxoa > n && vtxoa <  0 ){
		cout << " vi tri xoa khong hop le ! "<<endl ; 
	}
	for( int i = vtxoa ; i<  n  - 1 ; i++ ){
		x[i-1] = x[i];
	}
	--n  ;
	cout << " danh sach sau khi xoa : "<<endl ; 
	xuat(x,n) ;  
}
void sapxep( nhanvien x[],int   n ){
	for(int i = 0  ; i< n ; i++ ){
		for( int j =i+1 ; j < n ;  j++ ){
			if( x[i].tuoi  < x[j].tuoi  ){
				swap(x[i],x[j] ) ;
			}
		}
	}
	cout << " danh sach sau khi sap xep  : "<<endl ;
	xuat(x,n);
}
int main(){
	nhanvien x[100];
	int chon  ;
	do{
		cout << " __________MENU__________" ; 
		cout << " CHON 0 de ket thuc chuong trinh . "<<endl ; 
		cout << " CHON 1  de nhap thong tin cho danh sach .  "<<endl ;
		cout << " CHON 2 de xuat thong tin cua danh sach . "<<endl ; 
		cout << " CHON 3 de tim kiem nhan vien theo MNV  ."<<endl ;
		cout << " CHON 4 de chen them 1  nhan vien . "<<endl ;
		cout << " CHON 5 de xoa 1 nhan vien ."<<endl ; 
		cout << " CHON 6 de sap xep  nhan vien theo tuoi  . "<<endl  ;
		cout << " moi ban chon :  " ; 
		cin >> chon; 
		int n ; 
		switch (chon ){
			case  0 : {
				cout << " ban da ket thuc chuong trinh " ;  
				break;
			}
			case 1 : {
				cout <<  " nhap so nhan vien : "; cin >> n ;
				nhap(x,n) ; 
				break;
			}
			case 2 : {
				xuat(x,n) ; 
				break;
			}
			case 3 : {
				string mnv ; cout << " nhap MNV can tim kiem :  " << endl ; 
				cin.ignore() ; 
				getline(cin,mnv) ; 
				timkiem(x,n,mnv ) ; 
				break;
			}
			case 4 : {
				int vtthem ; cout << " nhap vi tri them : " ; cin >> vtthem ; 
				chennhanvien(x,n,vtthem); 
				break;
			}
			case 5 : {
				int vtxoa ; cout << " nhap vi tri can xoa : " ; cin >> vtxoa; 
				xoanhanvien(x,n,vtxoa) ; 
				break;
			}
			case 6  : {
				sapxep(x,n) ; 
				break;
			}
			default : {
				cout << " nhap sai vui long chon tu 0----> 6  ! " ; 
				break;
			}
		}
		}  
while( chon != 0 ); 
	
}