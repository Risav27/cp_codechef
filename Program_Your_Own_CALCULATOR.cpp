#include <bits/stdc++.h>
using namespace std;


int main(){
    double a , b , d;
    char c;
    cin>>a>>b>>c;
    if (c == '+') d = a+b;
    else if( c == '-') d = a-b;
    else if ( c == '*') d = a*b;
    else if (c == '/'){

        d = a/b;

    }
    cout<<fixed<<d<<endl;




return 0;
}