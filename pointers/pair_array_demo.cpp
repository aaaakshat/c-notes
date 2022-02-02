#include <bits/stdc++.h>
using namespace std;

void print_pair_array(pair<int, int> *a);

void print_pair_array(pair<int, int> *arr) {
    for (int i=0; i<10; i++) {
        cout << arr[i].first << " " << arr[i].second << "\n";
        arr++;
    }
}

int main() {
    pair<int, int> a[10];
    for (int i=0; i<10; i++) {
        a[i] = make_pair(i, i*i);
    }

    print_pair_array(a);

}
