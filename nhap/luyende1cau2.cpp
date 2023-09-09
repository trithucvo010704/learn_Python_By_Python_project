#include<bits/stdc++.h> 
using namespace std; 
void nhap( int &n){
    do{
        cin >> n ; 
    }
    while(n<=0 || n>=30) ; 
}
void nhapmang(int *a , int n){
    for ( int i=0; i<n; i++ ){
        cout << "a["<<i<<"] = " ; 
        cin >> a[i] ; 
    }
}
void xuatmang( int *a , int n){
    for ( int i=0; i<n; i++ ){
        cout <<a[i] << " " ; 
    }
}
void xuatmangchan( int *a , int n){
    for ( int i=0; i<n; i++ ){
        if(a[i] %2 == 0) cout <<a[i] << " " ; 
    }
}
void timuoc( int *a , int n , int x){
    for( int i=0; i<n; i++){
        if(a[i] > 0 && x%a[i] == 0)
            cout << a[i] <<" " ; 
    }
}
bool checknto( int n){
    if( n<2 ) return false ; 
    for( int i=0; i<sqrt(n); i++){
        if(n % i == 0) return false ;  
    }
    return true ;
}

bool check( int *a , int n ){
    int min  = a[0]; 
    for( int i = 0 ; i<n ; i++){
        if(a[i] < min) min = a[i]; 
    }
    if(checknto(min)) return true ; 
    else return false ; 
} 
int main (){
    int n,x ; 
    int *a  ; 
    cout <<"\n nhap so ptu cua mang : " ; 
    nhap(n) ; 
    a =  new int[n]; 
    nhapmang(a,n) ; 
    cout <<"\n mang vua nhap la : " ;
    xuatmang(a,n) ; 
    cout <<"--------------------------------";
    xuatmangchan(a,n) ; 
    cout <<"\n nhap so nguyen x : " ;  
    cin >> x  ; 
    cout <<"\n cac uoc duong cua "<<x <<"trong mang la : " ;
    timuoc(a,n,x) ; 
    if(check(a,n)) cout <<"\n so nho nhat trong mang la so nto !!!!" ; 
    else cout <<"\n khong phai !!!!" ; 

}