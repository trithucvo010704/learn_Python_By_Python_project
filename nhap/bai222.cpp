#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll  ;
//   7 3
//    2 6 4 3 6 8 9 
// bai tap three sums  
int main(){
   int n,x ; cin >> n >>x ;
    vector<pair<int,int> > v(n);
    for( int i = 0; i < n;i++){
        cin >> v[i].first ;
        v[i].second = i ; 
    }
    sort( v.begin(),v.end() );

    // int l = 0 , r= n-1 ; 
    for( int i = 0 ; i< n -3;i++ ){
        int  l =  i+1 , r= n-1 ; 
        while( l < r ){
        int k = x -v[i].first ; 
         
        if( v[l].first +v[r].first == k ){
            cout <<v[i].second +1 <<" " <<  v[l].second+1  << " " <<v[r].second +1 << endl;return 0 ; 
        }
        else if ( v[l].first + v[r].first < k ){
            ++l ;
        }
        else --r ; 
        }
    }
    cout <<"\n IMPOSSIBLE" ; 
}

