#include<bits/stdc++.h>
using namespace std ;

void nhap(int a[10] , int n ){
	for( int i = 0 ; i< n ; i++){
		cout << "nhap a [ " << i << " ] = " ;  
		cin >> a[i] ;
		
	}
	cout << endl ;
} 
void xuat(int a[10] , int n ){
	for( int i = 0 ; i< n ; i++){
		cout << a[i]<< "\t" ; 
	}
	cout <<endl ;
}
void xoa(int a[10] , int &n , int vtxoa){
	for ( int i = vtxoa ; i<n ; i++){
		a[i] = a[i+1] ; 
	}
	n--; 
}
void chen(int a[10] , int &n , int vtchen, int sochen){
	for ( int i = n ; i>= vtchen ; i--){
		a[i] = a[i-1] ;
	}
	a[vtchen] = sochen ; 
	n++ ; 
}
main(){
	int n , a[10],k ,x; 
	cout << " nhap so luong phan tu cua mang : " ; 
	cin >> n ; 
	nhap(a,n) ;
	xuat(a,n) ;
	//cout << " nhap vi tri can chen : " ; cin >> k ; 
	//cout << " nhap so can chen : " ; cin >> x ; 
	//chen(a,n,k,x);
	cout << " nhap vi tri xoa " ;  cin >> k ; 
	xoa(a,n,k) ; 
	cout << " mang sau khi xoa : \n "; 
	xuat(a,n);
}

