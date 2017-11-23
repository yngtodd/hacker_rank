#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num_vecs;
    int num_queries;
    vector <vector <int>> data;

    cin >> num_vecs;    // number of lines of data
    cin >> num_queries; // number of queries of the data

    /* read in each line of elements into a vector
     * and add each vector to data. */
    int num_elems;
    int elem;
    for (int i=0; i < num_vecs; i++) {
        vector <int> temp;
        cin >> num_elems;

        for (int j = 0; j < num_elems; j++) {
            cin >> elem;
            temp.push_back(elem);
        }

        data.push_back(temp);
    }

    /* Remaining lines give the queries for each vector. */
    int query_vec;
    int query;
    while (num_queries > 0) {
        cin >> query_vec;
        cin >> query;
        cout << data[query_vec][query] << "\n";
        num_queries--;
    }

    return 0;
}
