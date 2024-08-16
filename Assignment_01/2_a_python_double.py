import numpy as np
import time

def multiply_matrix(A, B):
    C = np.dot(A, B)
    return C

sizes = [64, 128, 256, 512, 1024]

for N in sizes:
    # Generate matrices with random floating-point numbers between 0 and 100
    A = np.random.uniform(0, 100, size=(N, N))
    B = np.random.uniform(0, 100, size=(N, N))

    start = time.time()
    C = multiply_matrix(A, B)
    end = time.time()

    print(f"Matrix multiplication for N={N} took {end - start:.6f} seconds.")
