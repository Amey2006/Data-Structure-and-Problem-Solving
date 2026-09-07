#include <iostream>
#include <chrono>

int main() {

    const int N = 100000;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < N; i++) {
        std::cout << "Hello"<<endl;
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "\nTime: "
              << std::chrono::duration<double>(end - start).count()
              << " seconds\n";
}