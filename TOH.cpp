#include <iostream>
#include <string>

using namespace std;

// Prototype
void DesToA3(string des, string a1, string a2, string a3, int n, int& moveNumber);
void A3ToDes(string a3, string a2, string a1, string des, int n, int& moveNumber);
void StartToA3(string start, string des, string a1, string a2, string a3, int n, int& moveNumber);

// Function to move n disks from A3 to A2 to A1 to Des
void A3ToDes(string a3, string a2, string a1, string des, int n, int& moveNumber) {
    if (n == 0) {
        return;
    }
    else {
        A3ToDes(a3, a2, a1, des, n - 1, moveNumber);
        cout << ++moveNumber << " Move " << n << " from " << a3 << " to " << a2 << endl;
        cout << ++moveNumber << " Move " << n << " from " << a2 << " to " << a1 << endl;
        DesToA3(des, a1, a2, a3, n - 1, moveNumber);
        cout << ++moveNumber << " Move " << n << " from " << a1 << " to " << des << endl;
        A3ToDes(a3, a2, a1, des, n - 1, moveNumber);
    }
}

// Function to move n disks from Des to A1 to A2 to A3
void DesToA3(string des, string a1, string a2, string a3, int n, int& moveNumber) {
    if (n == 0) {
        return;
    }
    else {
        DesToA3(des, a1, a2, a3, n - 1, moveNumber);
        cout << ++moveNumber << " Move " << n << " from " << des << " to " << a1 << endl;
        cout << ++moveNumber << " Move " << n << " from " << a1 << " to " << a2 << endl;
        A3ToDes(a3, a2, a1, des, n - 1, moveNumber);
        cout << ++moveNumber << " Move " << n << " from " << a2 << " to " << a3 << endl;
        DesToA3(des, a1, a2, a3, n - 1, moveNumber);
    }
}

// Function to move n disks from Start to A3
void StartToA3(string start, string des, string a1, string a2, string a3, int n, int& moveNumber) {
    if (n == 0) {
        return;
    }
    else {
        StartToA3(start, des, a1, a2, a3, n - 1, moveNumber);
        cout << ++moveNumber << " Move " << n << " from " << start << " to " << des << endl;
        cout << ++moveNumber << " Move " << n << " from " << des << " to " << a1 << endl;
        cout << ++moveNumber << " Move " << n << " from " << a1 << " to " << a2 << endl;
        A3ToDes(a3, a2, a1, des, n - 1, moveNumber);
        cout << ++moveNumber << " Move " << n << " from " << a2 << " to " << a3 << endl;
        DesToA3(des, a1, a2, a3, n - 1, moveNumber);
    }
}

// Main function to solve the Tower of Hanoi puzzle
void Hanoi(string start, string des, string a1, string a2, string a3, int n) {
    int moveNumber = 0; // Initialize move number as a local variable
    if (n == 0) {
        return;
    }
    else {
        StartToA3(start, des, a1, a2, a3, n - 1, moveNumber);
        cout << ++moveNumber << " Move " << n << " from " << start << " to " << des << endl;
        A3ToDes(a3, a2, a1, des, n - 1, moveNumber);
    }
}

int main() {
    int n = 4;
    Hanoi("start", "des", "a1", "a2", "a3", n);
    return 0;
}
