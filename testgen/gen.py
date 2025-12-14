# generates test-vector files for the target HLS function using a golden Python
# reference function
import random

INT_MIN = -2**31
INT_MAX = 2**31 - 1

def golden_add(a: int, b: int) -> int:
    return a + b

def generate_test_vectors(samples: int = 100) -> None:
    with open("testgen/test_vectors.txt", "w") as f:
        for _ in range(samples):
            a = random.randint(INT_MIN, INT_MAX)
            b = random.randint(INT_MIN, INT_MAX)
            expected = golden_add(a, b)
            f.write(f"{a} {b} {expected}\n")

if __name__ == "__main__":
    generate_test_vectors()