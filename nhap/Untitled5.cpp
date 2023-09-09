#include <iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
class hanghoa{
    private:
    string mahang , tenhang ; 
    int don_gia , soluong ; 
    public: 
    void nhap(){
        cin.ignore();
        cout << " nhap ma hang :  " ;
        getline(cin,mahang);
        cout << " nhap ten  hang : " ; 
        getline(cin,tenhang);
        cout << " nhap don_gia : " ;
        cin >> don_gia; 
        cout << " nhap soluong : " ;
        cin >> soluong;

    }
    void xuat(){
        cout << "  ma hang : " << mahang << " ten hang : " << tenhang << " soluong : " << soluong << " don_gia : " << don_gia <<endl ; 
        cout << " thanh tien =    " << soluong*don_gia; 
    }
};
int main(){
    int n ;  cout << " nhap so luong hang hoa : " ;
    cin>>  n ; 
    hanghoa x[n] ; 
    for(int i = 0 ; i< n ; i++ ){
        cout << " nhap thong tin mat hang thu "<<i+ 1  << " : " <<endl ;
        x[i].nhap;  
    }
    for(int i = 0 ; i< n ; i++){
        cout << " thong tin mat hang thu "<<i+1 <<" la : "  << endl ;
        x[i].xuat;
    }
    
}