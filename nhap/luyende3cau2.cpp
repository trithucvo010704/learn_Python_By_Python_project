#include<bits/stdc++.h> 
using namespace std  ; 
void  nhap( int&n){
	do{
		cin >> n ; 
	}
	while(n<= 0 || n>50 ) ; 
}
void nhapmang( long *a , int n){
	for( int i = 0 ; i< n ; i++){
		cout <<"a["<<i<<"] =" ;
		cin >> a[i] ; 
	}
	
}
void xuatmang( long *a , int n ){
	for( int i = 0 ; i<n ;i++){
		cout <<a[i]<<" " ; 
	}
}
void sapxep(long *a , int n){
	for( int i = 0 ; i< n ; i++){
		for( int j = i+1 ; j< n ; j++){
			if(a[i] >a[j]){
				long tg = a[i] ;
				a[i] = a[j] ;
				a[j] =tg ; 
			}
		}
	}
}
void ghivaofile(long *a , int n ){
	ofstream f ("file.txt" , ios::out) ; 
	for( int i = 0;i<n ;i++){
		f<<a[i]<<" " ; 
	}
	f.close() ; 
}
void ghibosung(long *a, int n){
	ofstream f("file.txt" ,ios::app) ; 
	f<<"\n tong cac phan tu am la : " ; 
	long s = 0 ;
	for( int i = 0 ; i< n ;i++){
		if(a[i]<0) s+= a[i] ; 
	}
	f<<s <<endl ;
	f.close() ;
}
int timmaxptu( long *a , int n ){
	long s = 0 ,res = 0 ,cnt  = 0 ; 
	double k ;
	for( int i = 0 ; i<n ;i++){
		s+= a[i] ;
	}
	k = 1.0* s/n ; 
	s = 0 ; 
	for( int i = 0 ;i<n ;i++){
		s+= a[i] ; 
		cnt++ ; 
		if( s>2k){
			break ; 
		}
		if( cnt >res ) res =cnt ; 
	}
	return res ; 
	
}
int main(){
	int n ; 
	long *a ; 
	cout <<"\n nhap so ptu cua mang : " ;
	nhap(n) ; 
	a = new long[n] ; 
	nhapmang(a,n) ; 
	sapxep(a,n) ; 
	ghivaofile(a,n) ;
	cout <<"\n mang sau khi sap xep : " ;
	xuatmang(a,n) ; 
	ghibosung(a,n) ; 
	
}