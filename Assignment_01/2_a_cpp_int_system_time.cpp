#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
  
}

int main() {
    vector<int> sizes = {64, 128, 256, 512, 1024};

    for (int N : sizes) {
        vector<vector<int>> A(N, vector<int>(N));
        vector<vector<int>> B(N, vector<int>(N));
        vector<vector<int>> C(N, vector<int>(N));

        // Initialize matrices with some values
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                A[i][j] = i + j;
                B[i][j] = i - j;
            }
        }
        auto start = high_resolution_clock::now();
        multiplyMatrix(A, B, C, N);
        auto end = high_resolution_clock::now();

          auto duration = duration_cast<milliseconds>(end - start).count();
          cout << "Matrix multiplication for N=" << N << " took " << duration / 1000.0 << " seconds." << endl;
    }

    return 0;
}
