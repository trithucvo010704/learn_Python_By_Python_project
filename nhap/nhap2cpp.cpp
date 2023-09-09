#include <iostream>
using namespace std;
void input( int a[] , int  &n){
	cout << " nhap so luong ptu cua mang : " ; 
	cin >> n ; 
	for ( int i = 0  ; i< n ; i++){
		cout << " nhap a[" << i << "] = " ; 
		cin >> a[i] ; 
	}
}
void  output( int a[] , int n ){
	for ( int i = 0 ; i< n ; i++){
		cout << a[i] <<endl ; 
	}
}
// giai thuat sap xep chon 
void sxchon( int a[] , int n ) {
	for ( int i = 0 ; i< n ; i++){
		int min = i ; 
		for( int j = i+1 ; j< n ; j++){
			if( a[j] < a[min]){
				min = j ; 
			}
		}
		swap(a[i] ,a[min]) ;
	}
}
// giai thuat sap xep chen 
void sxchen(int a[] , int n){
	for ( int i = 0 ; i< n ; i++){
		int tg = a[i] ;// bien chen 
		int  j = i -1 ; 
		while(j>= 0 && a[j] > tg){// duyet sao cho neu co ptu thu j > tg thi day j sang ben phai 1 o 
			a[j+1] = a[j] ;
			j--;
		} 
		a[j+1] =tg ;// gan tg vao vti vua day
	}
}

int main(){
	int n ; 
	int a[100] ;
	input(a,n) ; 
	sxchen(a,n) ; 
	cout << " \n mang sau khi sap xep la : "<<endl  ; 
	output(a,n) ; 
	
	 
}