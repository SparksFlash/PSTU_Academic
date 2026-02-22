#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

atomic<bool> flag[2] = {false, false}; // Each thread sets its intent
atomic<int> turn;                       // Whose turn it is
int shared_counter = 0;                  // Shared resource

void thread_func(int process) {
    int other = 1 - process;  // 0->1, 1->0
    // Enter Critical Section
    flag[process] = true;           // I want to enter
    turn = other;              // Give turn to other thread
    while (flag[other] && turn == other); // Wait if other wants in
    // Critical Section
    for (int i = 0; i < 5; i++) {
        shared_counter++;
        cout << "Thread " << process << " incremented counter to " << shared_counter << endl;
    }
    // Exit Critical Section
    flag[process] = false;
}

int main() {
    thread t0(thread_func, 0);
    thread t1(thread_func, 1);

    t0.join();
    t1.join();

    cout << "Final counter: " << shared_counter << endl;
}