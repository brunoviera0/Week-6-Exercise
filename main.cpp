#include "vector.h"

int main() {
    using namespace std;
    const string filename = "vectors_2D.txt";
    auto vectors = read_vectors(filename);
    print_vectors_reverse(vectors);
    return 0;
}
