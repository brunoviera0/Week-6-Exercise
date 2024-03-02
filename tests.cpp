#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vector.h"
#include <fstream>
#include <vector>

using namespace std;
//basic constructor
TEST_CASE("Testing basic constructor") {
    int_vector v;
    CHECK(v.id == -1);
    CHECK(v.from == 0);
    CHECK(v.to == 0);
}

//copy constructor
TEST_CASE("Testing copy constructor") {
    int_vector original{-1, 2, 3};
    int_vector copy = original;
    CHECK(copy.id == original.id);
    CHECK(copy.from == original.from);
    CHECK(copy.to == original.to);
}


TEST_CASE("Testing file input") { //reading from a file + edge cases
    
    std::ofstream out("test.txt");
    out << "1 2\n3 4";
    out.close();
    auto vectors = read_vectors("test.txt");
    CHECK(vectors.size() == 2);
    CHECK(vectors[0].from == 1);
    CHECK(vectors[0].to == 2);
    CHECK(vectors[1].from == 3);
    CHECK(vectors[1].to == 4);

    //empty file
    ofstream empty_out("empty.txt");
    empty_out.close();
    auto empty_vectors = read_vectors("empty.txt");
    CHECK(empty_vectors.empty());
}
