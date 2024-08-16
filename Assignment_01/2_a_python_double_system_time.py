import numpy as np
import os
import time


def multiply_matrix(A, B, N):

    C = np.dot(A, B)

    return C


sizes = [64, 128, 256, 512, 1024]

for N in sizes:
    A = np.random.uniform(0, 100, size=(N, N))
    B = np.random.uniform(0, 100, size=(N, N))

    # Record the system time before and after the operation
    start_system_time = os.times().system
    C = multiply_matrix(A, B, N)
    end_system_time = os.times().system

    # Calculate the system time used
    system_time_used = end_system_time - start_system_time

    print(
        f"Matrix multiplication for N={N} took {system_time_used} seconds of system time."
    )
