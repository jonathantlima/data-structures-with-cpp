#include <vector>
#include <iostream>

void selectionSort(std::vector<int> &v, bool reverse = false)
{

    if (reverse)
    {
        for (std::size_t i = 0; i < v.size() - 1; ++i)
        {
            int idx_max = i;
            for (std::size_t j = i + 1; j < v.size(); ++j)
            {

                /*
                    Nesta parte do código é realizada uma comparação entre o elemento atual 'j'
                    e o elemento correspondente ao índice mínimo 'idx_min'. Caso o elemento da
                    posição 'j' seja menor, então, o idx_min recebe a posição 'j'. Este teste
                    é conduzido desde 'i+1' (equivalente a 1, quando i = 0) até o último elemento
                    do vetor 'v'.
                */
                if (v[j] > v[idx_max])  // O sinal de maior ordena de forma descrescente
                {
                    idx_max = j;
                }
            }
            /*
                Depois que o novo índice do elemento mínimo é definido 'idx_min', a posição 'i'
                atual recebe o valor mínimo e já está ordenada. As próximas interações começam
                a partir da posição seguinte.
            */
            auto aux = v[i];
            v[i] = v[idx_max];
            v[idx_max] = aux;
        }
    }
    else
    {
        for (std::size_t i = 0; i < v.size() - 1; ++i){
            int idx_min = i;
            for (std::size_t j = i + 1; j < v.size(); ++j){

                /*
                    Nesta parte do código é realizada uma comparação entre o elemento atual 'j'
                    e o elemento correspondente ao índice mínimo 'idx_min'. Caso o elemento da
                    posição 'j' seja menor, então, o idx_min recebe a posição 'j'. Este teste
                    é conduzido desde 'i+1' (equivalente a 1, quando i = 0) até o último elemento
                    do vetor 'v'.
                */
                if (v[j] < v[idx_min]) {   // O sinal de menor ordena em ordem crescente
                    idx_min = j;
                }
            }
            /*
                Depois que o novo índice do elemento mínimo é definido 'idx_min', a posição 'i'
                atual recebe o valor mínimo e já está ordenada. As próximas interações começam
                a partir da posição seguinte.
            */
            auto aux = v[i];
            v[i] = v[idx_min];
            v[idx_min] = aux;
        }
    }
}

int main()
{
    std::vector<int> v = {34, 12, 56, 81, 9, 2};
    selectionSort(v, true);   // O código pode ser facilmente adaptado para solicitar o valor de 'reverse' do usuário
    for (auto x : v)
    {
        std::cout << x << ' ';
    }

    std::cout << std::endl;

    return 0;
}