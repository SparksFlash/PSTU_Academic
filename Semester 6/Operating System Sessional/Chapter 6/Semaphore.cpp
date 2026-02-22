#include <iostream>
#include <thread>
#include <semaphore>
using namespace std;

// Binary semaphore (1 = only one thread at a time)
counting_semaphore<1> sem(1);

int shared_counter = 0;

void thread_func(int id) {
    for (int i = 0; i < 5; i++) {
        sem.acquire();   // Wait / P operation

        // Critical Section
        shared_counter++;
        cout << "Thread " << id << " incremented counter to " << shared_counter << endl;

        sem.release();   // Signal / V operation
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