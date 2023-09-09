#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std  ; 
void nhap( int *p , int n ){
	for( int  i = 0 ;  i< n ; i++ ){
		cin >> p [i]; 
	}
}
void xuat(int *p,int n   ){
	
	for( int  i = 0 ; i< n ; i++){
		cout << p[i] <<  " ";
	}
	
}

int main(){
	int n ; cin >>  n ; 
	int *p = new int [n];
	nhap(p,n);
	xuat(p,n);
	ofstream file1("giatri.txt") ;
	for(int i = 0 ; i< n ; i++) {
		file1 << p[i] << " "; 
	}
	file1.close();
	ofstream file2 (" xuat.txt");
	file2 << " mang sau khi sap xep : " ; 
	for( int i =  0 ; i< n ; i++ ){
		for( int j = i+1  ; i< n ; j++ ){
			if (p[i] >  p[j] ){
				swap(p[i],p[j]);
			}  
		}
	}
	for( int i = 0 ; i< n ; i++){	
	cout << p[i] <<" " ; 
	}
 
	file2.close();
	
	delete [] p ; 
	
}