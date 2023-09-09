#include<bits/stdc++.h> 
using namespace std ; 
void nhap( int &n){
	do{
		cin >> n ; 
	}
	while(n<0 || n>30 ) ;
}
void nhapmang(float  *a , int n ){
	for( int i = 0 ; i< n ; i++){
		cout <<" a[ " <<i <<"] = " ;
		cin >> a[i] ;  
	}
	
	
}
void xuatmang(float  *a , int n ){
	for( int i = 0 ; i< n ; i++){
	cout << a[i] <<" " ; 	
	}
}
void xuatvaofile( float *a , int n ){
	ofstream f( "bt.txt" , ios::out) ; 
	for( int i = 0 ; i< n ; i++){
		f<<a[i]<<" " ; 
	}
	f.close() ; 
}
float tong( float *a , int n ){
	float s = 0 ; 
	for( int i = 0 ; i< n ; i++){
		if( a[i] > 7 ) s+= a[i] ; 
	}
	return s ; 
}
void xoamotptu( float *a , int &n, int vtxoa ){
	for( int i = vtxoa ; i< n  ; i++ ){
		a[i] = a[i+1] ; 
	}
	n-- ; 
}
void chenmotptu(float *a , int &n, int vtchen , int sochen){
	for( int i = n ; i>=  vtchen ; i--){
		a[i] = a[i-1] ; 
	}
	a[vtchen] = sochen ; 
	n++ ; 
}

void xoa(float *a , int &n  ){
	float soxoa ;  
	cout <<"\n nhap so khoa k : " ; cin >> soxoa ;
	for( int i = 0 ; i< n ; i++){
		int flag = 0 ; 
		if( a[i] > soxoa){
			xoamotptu(a,n,i) ; 
			i--; 
		}
	}
}
void chen(float *a , int &n ){
	for( int i = 0 ; i< n ; i++){
		if( a[i] > 7 ){
			chenmotptu(a,n,n,7) ; 
			i++; 
		}
	}
}
void sapxep( float *a , int n ){
	for( int i = 0 ; i< n ; i++){
		for ( int j = i+1 ; j< n ; j++){
			if (a[i] >a[j]){
				float tg = a[i] ; 
				a[i] = a[j] ; 
				a[j] = tg  ; 
			}
		}
	}
}
void ghivaofilesx(float *a , int n ){
	ofstream f( "bt.txt" ,ios::app); 
	f<< "\n mang sau khi sap xep " ; 
	for ( int i = 0 ; i< n ; i++){
		f<< a[i]<< " " ; 
	}
	f.close() ; 
}
int main(){
	int n ; 
	float soxoa ; 
	cout <<" \n nhap so phan tu cua mang : " ; 
	nhap(n) ; 
	float *a = new float[n] ; 
	nhapmang(a,n) ; 
	cout <<"\n mang ban dau la : " ; 
	xuatmang(a,n) ; 
	xuatvaofile(a,n) ;
	cout <<" \n tong cac phan tu lon hon 7  la : " << tong(a,n) ;
//	cout <<"\n nhap so khoa k : " ; cin >> soxoa ; 
//	xoa(a,n) ;
//	chenmotptu(a,n,3,15) ;   
	chen(a,n) ; 
	cout <<"\n mang sau khi xoa : " ; 
	xuatmang(a,n) ; 
//	cout <<"\n mang sau khi sap xep : " ; 
//	sapxep(a,n) ; 
//	ghivaofilesx(a,n );
//	xuatmang(a,n) ; 
	delete []a ;
	
	
}