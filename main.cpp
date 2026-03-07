#include <iostream>
#include <sstream>
#include <algorithm>
#include <random>
#include <vector>
#include <numeric>

using namespace std;

void displayMatrix(const vector<int>& matrix, int size);

int main() {
    int size{0};
    cout << "Podaj rozmiar macierzy: " << endl;
    cin >> size;
    vector<int> matrix(size * size);
    iota(matrix.begin(), matrix.end(), 0);
    mt19937 generator(random_device{}());
    ranges::shuffle(matrix.begin(), matrix.end(), generator);

    displayMatrix(matrix, size);

    for (int j = 0; j < 100; j++) {
        char move;
        cout << "twoj " << j+1 <<" ruch (g, d, p, l) : " << endl;
        cin >> move;

        switch (move) {
            case 'd':
                for (int i = 0; i < size * size; i++) {
                    if (matrix[i] == 0) {
                        if (i >= size) {
                            matrix[i] = matrix[i - size];
                            matrix[i - size] = 0;
                            break;
                        } else {
                            cout << " ruch niedozwolony" << endl;
                        }
                    }
                }

                displayMatrix(matrix, size);

                break;
            case 'g':

                for (int i = 0; i < (size * size); i++) {
                    if (matrix[i] == 0) {
                        if (i < size * size - size) {
                            matrix[i] = matrix[i + size];
                            matrix[i + size] = 0;
                            break;
                        } else {
                            cout << " ruch niedozwolony" << endl;
                        }
                    }
                }


                displayMatrix(matrix, size);

                break;
            case 'l':
                for (int i = size * size -1; i >= 0; i--) {
                    if (matrix[i] == 0) {
                        if (((i+1) % size) != 0) {
                            matrix[i] = matrix[i + 1];
                            matrix[i + 1] = 0;
                            break;
                        } else {
                            cout << " ruch niedozwolony" << endl;
                        }
                    }
                }
                displayMatrix(matrix, size);

                break;

            case 'p':
                for (int i = 0; i < (size * size); i++) {
                    if (matrix[i] == 0) {
                        if (i % size != 0) {
                            matrix[i] = matrix[i - 1];
                            matrix[i - 1] = 0;
                            break;
                        } else {
                            cout << "ruch niedozwolony" << endl;
                        }
                    }
                }
                displayMatrix(matrix, size);
                break;
            default:
                cout << "zly ruch";
        }
    }

    return 0;
}

void displayMatrix(const vector<int>& matrix, int size) {
    for (int i = 0; i < size * size; i++) {
        if (matrix[i] == 0) {
            cout << " _  ";
        } else {
            if (matrix[i] < 10)
                cout << " "; // dodatkowa spacja dla 1-cyfrowych

            cout << matrix[i] << "  "; // symulowanie matrixa
        }

        if ((i + 1) % size == 0)
            cout << "\n";
    }
}
