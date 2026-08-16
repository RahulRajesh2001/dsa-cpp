#include <iostream>
using namespace std;

int n;
int i;

void printN(int i, int n) {
    if (i > n) {
        return;
    }

    cout << i << endl;
    printN(i + 1, n);
}

int main() {
    cout << "Enter N:";
    cin >> n;

    printN(1, n);
}

// print 1 to N numbers