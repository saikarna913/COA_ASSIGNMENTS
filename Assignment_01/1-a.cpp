#include <bits/stdc++.h>
#include <chrono>
using namespace std;
long long fib_recur(int n,vector<long long>&c){
    if(n<=1)return n; //fib(0)=0 fib(1)=1
    return c[n]=fib_recur(n-1,c)+fib_recur(n-2,c); //calculating fibonnaci number and storing it in an array to give ouput
}

int main(){
    vector<long long>c(50,-1);
    c[0]=0; 
    c[1]=1;
    auto start = chrono::high_resolution_clock::now();
    fib_recur(49,c);

    for(int i=0;i<50;i++){
        cout<<c[i]<<" ";
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Execution Time: " << duration.count() << " seconds" << endl;
return 0;
}