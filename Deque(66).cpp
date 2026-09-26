#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq;

    // Insert elements
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << "Deque elements: ";

    for (deque<int>::iterator it = dq.begin(); it != dq.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    // Access elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Delete elements
    dq.pop_front();
    dq.pop_back();

    cout << "Deque after deletion: ";

    for (deque<int>::iterator it = dq.begin(); it != dq.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    // Insert more elements
    dq.push_front(100);
    dq.push_back(200);

    cout << "Deque final state: ";

    for (deque<int>::iterator it = dq.begin(); it != dq.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}
