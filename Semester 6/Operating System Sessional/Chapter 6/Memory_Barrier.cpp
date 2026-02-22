#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

int shared_data = 0;           // Rename data
atomic<bool> flag(false);      // Atomic flag

void writer() {
    shared_data = 100;                  // Write shared data
    atomic_thread_fence(memory_order_release); // Memory barrier as post office's confirmation seal :x
    flag.store(true);                   // Signal reader can read
}

void reader() {
    while (!flag.load());               // Wait until flag is true
    atomic_thread_fence(memory_order_acquire); // Memory barrier
    cout << "Shared Data: " << shared_data << endl;
}

int main() {
    thread t1(writer);
    thread t2(reader);

    t1.join();
    t2.join();
}