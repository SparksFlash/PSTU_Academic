#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

atomic<bool> lock_flag(false);  // Acquire/Release variable
int shared_counter = 0;

void thread_func(int id) {
    for (int i = 0; i < 5; i++) {
        // Acquire lock
        while (lock_flag.exchange(true, memory_order_acquire)) {
            ; // busy-wait
        }

        // Critical Section
        shared_counter++;
        cout << "Thread " << id << " incremented counter to " << shared_counter << endl;

        // Release lock
        lock_flag.store(false, memory_order_release);
    }
}

int main() {
    thread t0(thread_func, 0);
    thread t1(thread_func, 1);
    thread t2(thread_func, 2);

    t0.join();
    t1.join();
    t2.join();

    cout << "Final counter: " << shared_counter << endl;
}