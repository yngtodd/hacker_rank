#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
 * You'll be given an array of N integers and 
 * you have to print the integers in the reverse order.
 *
 * The first line of the input contains N, where N is the number of integers.
 * The next line contains integers separated by a space.
 *
 * Constraints:
 * 1 <= N <= 1000
 * 1 <= A_i <= 1000, where A_i is the i^{th} integer in the array.
 *
 * Example Input:
 * 4
 * 1 4 3 2
 *
 * Example Output:
 * 2 3 4 1
 */

int main() {
    int n;
    cin >> n;

    int arr[n];
    int i = 0;
    while (cin >> arr[i]) {
        i++;
    }
    
    while (i > 0) {
    	// Not sure how I feel about the indexing here.
        cout << arr[i-1] << " ";
        i--;
    }

    return 0;
}

