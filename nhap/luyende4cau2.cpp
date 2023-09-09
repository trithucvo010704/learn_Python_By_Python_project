#include<bits/stdc++.h>
using namespace std ; 
void nhap( int &n ){
	do{
		cin >> n ; 
	}
	while( n<= 0 ) ; 
}
void nhapmang( float *a , int n ){
	for( int i = 0 ; i<n ;i++){
		cout <<"a ["<<i <<"] =" ; 
		cin  >> a[i] ; 
	}
}
void xuatmang( float *a , int n ){
	for( int i = 0 ; i< n ; i++){
		cout << a[i] <<" " ; 
	}
}
void sapxep( float *a  , int n ){
	for( int i = 0 ; i< n ; i++){
		for( int j = i+1 ; j< n ; j++){
			if(a[i] < a[j]){
				int tg = a[i] ; 
				a[i] = a[j] ; 
				a[j] = tg ; 
			}
		}
	}
}
void ghivaofile( float *a , int n ){
	ofstream f("TEST1.txt" , ios::out); 
	f<< "mang sau khi sap xep : " ; 
	for( int i = 0 ; i<n  ; i++){
		f<<a[i] <<" " ; 
	}
	f.close() ; 
	
}
void ghibosung( float *a , int n ){
	ofstream f ("TEST1.txt" , ios ::app);
	float s = 0 ; 
	for( int i = 0 ; i< n  ; i++){
		if(a[i] < 0 ){
			s+= a[i] ; 
		}
	}
	f<<"\n tong cac ptu am trong mang : "<<s ; 
	f.close() ; 
}
int timnhieunhat(float *a , int n ){
	float s = 0,cnt = 0  ;
	for( int i = n-1 ; i>=  0 ;i--){
		s += a[i] ; 
		if( s < 20 ) {
			cnt++ ;
		} 
	}
	return cnt ; 
}
int main( ){
	float *a  ; 
	int n ; 
	cout <<"\n nhap so ptu cua mang : " ; 
	nhap(n) ; 
	a = new float[n]  ;
	nhapmang(a,n) ; 
	cout <<"\n mang sau khi sap xep : " ; 
	sapxep(a,n) ; 
	xuatmang(a,n) ; 
	ghivaofile(a,n) ; 
	ghibosung(a,n) ; 
	cout <<"\n  so ptu nhieu nhat : " <<timnhieunhat(a,n) ; 
	delete [] a; 
}