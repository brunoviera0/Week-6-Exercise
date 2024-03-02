#include "vector.h"
#include <fstream>
#include <iostream>

using namespace std;
vector<int_vector> read_vectors(const string& filename) {
    vector<int_vector> vectors;
    ifstream file(filename);
    int from, to;
    int id = 0;

    while (file >> from >> to) {
        vectors.push_back(int_vector{id, from, to});
        id++;
    }

    return vectors;
}

void print_vectors_reverse(const vector<int_vector>& vectors) {
    for (int i = vectors.size() - 1; i >= 0; --i) {
        cout << i << ": " << vectors[i].from << " " << vectors[i].to << endl;
    }
}
