#include<iostream>
#include<bits/stdc++.h>
using namespace std  ; 
// lam si 
// quick sort 
int partion(int a[] , int l  , int r ){
	// chon pivot 
	int x = a[r] ; 
	int i = l-1; 
	for( int j = l;j<= r-1 ; j++){
		if( a[j] < x  ){
			++i ; 
			swap(a[i] ,a[j]) ; 
		}
	}
	swap( a[i+1] ,a[r]);
	return i+1 ; 
}
int hoare( int a[] , int l  ,int r ){
// chon  chot la a[l]
	int  p =a[l] ;
	int i = l-1 ,j =r+1;
	while(1){
		do{
			++i ; 
		}
		while(a[i] < p ); 
		do{
			--j ;
		}
		while(a[j] > p ); 
		if( i < j ){
			swap(a[i],a[j]); 
		}
		else return j ; 
	}
}
void quicksort( int a[] , int l  , int r ){
	if ( l >= r) return ; 
	int p = hoare( a,l,r) ; 
	quicksort(a,l,p) ; 
	quicksort(a,p+1,r) ; 
}
int main(){
	int n ; cin >> n ; 
	int a[n]; 
	for( int i = 0 ; i< n ; i++){
		cin >>a[i] ; 
	}
	quicksort(a,0,n-1) ; 
	for( int x :a) cout << x <<" " ; 
}