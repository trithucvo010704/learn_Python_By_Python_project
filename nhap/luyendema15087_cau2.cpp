#include<bits/stdc++.h>
using namespace std ; 
void nhap( int &n ){
	do{
		cin >> n ; 
	}
	while( n<= 0 ) ; 
}
void nhapmang( float *a , int n ){
	for( int i = 0 ; i<n  ; i++){
		cout <<"a[" <<i<<"] = " ; 
		cin >> a[i] ; 
	}
	
}
void xuatmang( float *a  , int n ){
	for( int i = 0 ; i< n ; i++){
		cout <<a[i]<<" " ; 
	}
}
void ghivaotep( float *a , int n ){
	ofstream f ("dmm.txt" , ios::out) ; 
	for( int i = 0 ; i<n ;i++){
		f<<a[i]<<" " ; 
	}
	f.close() ;
}
void sapxep( float *a , int n ){
	for( int i = 0 ; i<n  ; i++){
		for( int j = i+1 ; j< n ; j++){
			if(a[i] < a[j]){
				float tg = a[i] ; 
				a[i] = a[j] ; 
				a[j] = tg ; 
			}
		}
	}
}
void ghibsvaotep( float *a , int n ){
	ofstream f ("dmm.txt" , ios::app) ; 
	f<<"\n mang sau khi sap xep : "; 
	for( int i = 0 ; i<n ;i++){
		f<<a[i]<<" " ; 
	}
	f.close() ; 
}
float tong( float *a , int n ){
	float s  = 0 ; 
	for( int i = 0 ; i<n ;i++){
		if( a[i] >= 3 && a[i] <= 8 ){
			s+= a[i] ; 
		}
	}
	return s ; 
}
void chenmotso( float *a , int &n , float x){
	for( int i = n ; i >= 0 ; i--){
		a[i ] = a[i-1] ; 
	}
	a[0] = x ; 
	n++ ; 
}
int main(){
	int n,x ; 
	cout <<"\n nhap so ptu cua mang : " ; 
	nhap(n) ; 
	float *a = new float[n] ; 
	nhapmang(a,n) ; 
	cout <<"\n mang vua nhap la : " ; 
	xuatmang(a,n) ; 
	ghivaotep(a,n) ; 
	sapxep(a,n); 
	ghibsvaotep(a,n) ; 
	cout <<"\n nhap so can chen vao dau mang : " ; cin >> x ;
	cout <<"\n mang sau khi chen : " ; 
	chenmotso(a,n,x) ;
	xuatmang(a,n) ; 
	delete []a ; 
}