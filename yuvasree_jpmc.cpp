// C++ program to demonstrate
// Multithreaded programming
// to print hello UTD

#include <iostream>
#include <thread>
using namespace std;

// thread invocation function
void func1()
{
	cout << "Hello ";
}

// thread invocation function
void func2()
{
	cout << "UTD";
}

// Driver code
int main()
{
    // This thread is launched using func1
    thread th1(foo);
    
    // This thread is launched using func2
    thread th2(foo1);
    
    // Wait for thread t1 to finish
    th1.join();
    
    // Wait for thread t2 to finish
    th2.join();
    
    return 0;
}
