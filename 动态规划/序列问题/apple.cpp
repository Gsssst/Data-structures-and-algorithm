#include <iostream>
#include <vector>
using namespace std;

int f(int m,int n){
    if(m<=1||n<=1) return 1;
    else if(m<n) return f(m,m);
    else return f(m-n,n)+f(m,n-1);
}

int main() {
    int m,n;
    while (cin >> m >> n) { 
        cout<<f(m,n)<<endl;
    }
}
