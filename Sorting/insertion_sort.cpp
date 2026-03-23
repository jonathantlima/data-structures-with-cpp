#include <vector>
#include <iostream>

void insertionSort( std::vector<int>& v, bool reverse = false ) {
    if (reverse) {
        for ( int i = 1; i < v.size(); ++i ) {
            auto carta = v[i];
            auto j = i;
            while ( j > 0 and v[j-1] < carta ) {
                v[j] = v[j-1];
                --j;
            }
            v[j] = carta;
        }
    } else {
        for ( int i = 1; i < v.size(); ++i ) {
            auto carta = v[i];
            auto j = i;
            while ( j > 0 and v[j-1] > carta ) {
                v[j] = v[j-1];
                --j;
            }
            v[j] = carta;
        }
    }
    
}

int main() {

    std::vector<int> v = {78, 19, 23, 45, 6, 2, 16};
    insertionSort(v, true);
    for ( auto x : v ) {
        std::cout << x << ' ';
    }

    std::cout << std::endl;

    return 0;

}