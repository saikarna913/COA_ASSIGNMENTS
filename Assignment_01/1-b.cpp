#include <bits/stdc++.h>
#include <chrono>
using namespace std;


int main(){
    auto start = chrono::high_resolution_clock::now(); //start time
    long long prev_prev=0; //as fib(0)=0 I used variable prev_prev to store the fib(n-2)
    long long prev=1;      //as fib(1)=1 I used variable prev to store the fib(n-1)
    cout<<prev_prev<<" "<<prev<<" ";
    long long cur; //used cur to store the fib(n)
    for(int i=2;i<50;i++){
       cur=prev_prev+prev;
       prev_prev=prev;
       prev=cur;
       cout<<cur<<" ";
    }
    auto end = chrono::high_resolution_clock::now(); // End time
    chrono::duration<double> duration = end - start;
    cout << "\nExecution Time: " << duration.count() << " seconds" << endl;
    return 0;
}