#include <bits/stdc++.h>
#include <chrono>
using namespace std;


int main(){
    auto start = chrono::high_resolution_clock::now(); //start time
    vector<long long>c(50,0);
    c[1]=1; //fib(1)=1
    cout<<c[0]<<" "<<c[1]<<" ";
    for(int i=2;i<50;i++){
       c[i]=c[i-1]+c[i-2];  //calculating fibonacci and storing in an array (memoization)
       cout<<c[i]<<" ";
    }
     auto end = chrono::high_resolution_clock::now(); // End time
    chrono::duration<double> duration = end - start;

    cout << "\nExecution Time: " << duration.count() << " seconds" << endl;
return 0;
}