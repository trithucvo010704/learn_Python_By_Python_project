#include<iostream>
#include<bits/stdc++.h>

using namespace std  ;
void merge( int a[], int l ,int m ,int r ){
	m = (l+r) /2 ;
	vector <int> x( a,a+m+1 ); 
	vector < int > y ( a+m+1 ,a+r+1) ; 
	int i = 0 ,j= 0 ; 
	while( i<x.size() && j<y.size()){
		if( x[i] <= y[j]){
			a[l] = x[i];
			++l ;++i ;
		}
		else {
			a[l] = y[j];
			++l ;++j ; 
		}
	}
	while( i< x.size()){
		a[l] = x[i] ; 
		++l ; ++i ;
	}
	while( j< y.size()){
		a[l] = y[j]; 
		++l ; ++j ; 
	}
	
}
void mergesort( int a[], int l , int r){
	if( l>= r ) return ; 
	int m = (l+r) /2 ; 
	mergesort(a,l,m ) ;
	mergesort(a,m+1,r) ; 
	merge(a,l,m,r);
}
int main(){
	int n = 50 ; 
	int a[50] ; 
	for( int  i = 0 ; i< n ; i++){
		a[i] =rand() %1500; 
	}
	quicksort(a,0,n-1) ; 
	for( int  x :a) cout <<x<<" " ;
}