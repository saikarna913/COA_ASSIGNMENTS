import numpy as np
import time

def multiply_matrix(A, B, N):
    C = np.dot(A, B)
    return C

sizes = [64, 128, 256, 512, 1024]

for N in sizes:
    A = np.random.randint(0, 100, size=(N, N))
    B = np.random.randint(0, 100, size=(N, N))

    start = time.time()
    C = multiply_matrix(A, B, N)
    end = time.time()

    print(f"Matrix multiplication for N={N} took {end - start} seconds.")
