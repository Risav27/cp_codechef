#include <bits/stdc++.h>
using namespace std;


int g = 0;

bool isSafe(int **arr , int i , int j , int n){
    if(i<n && j < n && arr[i][j] == 1 ){
        return true ;
    }
    return false ;
}

bool land(int **arr , int i , int j , int n){

    //base case
    if(i == n-1 && j == n-1 ){
        // g++;
        return true;
    }

    
    if(isSafe(arr , i ,j, n)){

        if(land(arr , i+1 ,j , n) && land(arr , i ,j+1, n)){
            g++;
            return true;

        }
        if(land(arr , i+1 , j , n)){
            return true;
        }
        if(land (arr, i , j+1 , n)){
            return true;
        }
        g--;
        return false;
    }
    return false;
}

int main(){
    int n  , **arr;
    cin >>n;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i] = new int[n];
    }
    for(int i = 0 ; i<n ; i++ ){
      for( int j = 0 ; j< n ; j++ ){
        cin>>arr[i][j];
       }
    }

    land(arr , 0,0,n);

    cout<<g<<endl;
    



return 0;
}