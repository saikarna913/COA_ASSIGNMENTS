#include <bits/stdc++.h>
#include <chrono>
using namespace std;
long long fib_recur(int n,vector<long long>&c){
    if(c[n]!=-1)return c[n]; //memoization
    return c[n]=fib_recur(n-1,c)+fib_recur(n-2,c); //calcutaing the fibonacci numbers
}

int main(){
   auto start = chrono::high_resolution_clock::now(); //start time
    vector<long long>c(50,-1);
    c[0]=0;
    c[1]=1;
    fib_recur(49,c);
    for(int i=0;i<50;i++){
        cout<<c[i]<<" ";
    }
   auto end = chrono::high_resolution_clock::now(); //end time
   chrono::duration<double> duration = end - start;
    cout << "\nExecution Time: " << duration.count() << " seconds" << endl;
return 0;
}