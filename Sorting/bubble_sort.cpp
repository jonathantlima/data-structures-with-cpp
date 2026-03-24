#include <vector>
#include <iostream>

void bubbleSort( std::vector<int>& v, bool reverse = false ) {

    int rlim = v.size();  // limite direito

    if (reverse) {
        for ( std::size_t j = 0; j < v.size(); ++j ) {
            std::size_t lsp = 0;   // lsp: last swap position ou última posição de troca
            for ( auto i = 1; i < rlim; ++i ) {
                if ( v[i-1] < v[i] ) {
                    auto aux = v[i-1];
                    v[i-1] = v[i];
                    v[i] = aux;
                    lsp = i;
                }
            }
            rlim = lsp;
        }
    } else {
        for ( std::size_t j = 0; j < v.size(); ++j ) {
            std::size_t lsp = 0;   // lsp: last swap position ou última posição de troca
            for ( auto i = 1; i < rlim; ++i ) {
                if ( v[i-1] > v[i] ) {
                    auto aux = v[i-1];
                    v[i-1] = v[i];
                    v[i] = aux;
                    lsp = i;
                }
            }
            rlim = lsp;
        }

    }    
}

int main() {
    std::vector<int> v = {99, 18, 3, 60, 23, 12};
    bubbleSort(v, true);
    for ( auto x : v ) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    return 0;
}