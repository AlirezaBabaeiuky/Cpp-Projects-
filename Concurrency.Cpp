// concurrency.cpp
// This program demonstrates the usage of concurrency in C++

#include <iostream>  // Include the iostream library for input and output
#include <thread>    // Include the thread library for multithreading
#include <mutex>     // Include the mutex library for synchronization

using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to be executed by a thread
void printNumbers(int start, int end, mutex& mtx) {
    for (int i = start; i <= end; i++) {
        lock_guard<mutex> guard(mtx); // Lock the mutex
        cout << i << " ";
    }
    cout << endl;
}

// The main function is the entry point of the program
int main() {
    mutex mtx; // Create a mutex for synchronization

    // Creating threads
    thread t1(printNumbers, 1, 5, ref(mtx));
    thread t2(printNumbers, 6, 10, ref(mtx));

    // Wait for threads to complete
    t1.join();
    t2.join();

    return 0; // Return 0 to indicate successful completion
}


/*
In computer programming, a mutex (short for "mutual exclusion") is a synchronization primitive that allows only one thread or process to access a shared resource at a time, preventing data corruption and ensuring data consistency
*/
