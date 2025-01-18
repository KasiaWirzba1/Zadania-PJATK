#include <iostream>
using namespace std;
int function(int n)
{
    int a;
    int i;
    for (i=1; i <= n; i++) {
        if (i % 3 != 0 and i % 5 == 0) {
            cout << i << endl;
            a++;
        }
    }
    return a;
}
int main() {
    int n;
    cin >> n;
    cout << function(n);
    return 0;
}