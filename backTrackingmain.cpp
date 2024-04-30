#include <iostream>
using namespace std;
int g = 0;
bool isSafe(int **arr , int i , int j , int n  ){
    if(i < n && j <n && arr[i][j] == 1){
        // cout<<"done"<<endl;
        return true;
        
    }
    // cout<<"ok"<<endl;
    return false;
}

bool maze(int **arr , int i , int j , int n, int ** soln ){
    
    // base case 
    if ( i == n-1 && j == n-1 ){
        soln[i][j] = 1;
        g++;
        return true;
    }

    // recursive call 
    if (isSafe(arr , i , j , n)){

        soln[i][j] = 1;
        if(maze(arr , i+1 , j , n , soln)){
            return true;
        }
        if(maze(arr , i , j+1 , n , soln)){
            return true;
        }
        soln[i][j] = 0;
        return false;
        
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    int **arr , ** soln;
    arr = new  int * [n];
    soln = new int* [n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i] = new int [n];
        soln[i] = new int [n];
    }


    

    for(int i = 0 ; i<n ; i++ ){
      for( int j = 0 ; j< n ; j++ ){
        cin>>arr[i][j];
        soln[i][j] = 0;
        
       }
    }

    maze(arr , 0,0,n,soln); 

    for(int i = 0 ; i<n ; i++ ){
      for( int j = 0 ; j< n ; j++ ){
        cout<<soln[i][j] << " ";
       }cout<<endl;
    }
    cout<<g<<endl;


    
return 0;
}