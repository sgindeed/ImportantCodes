#include <iostream>
#include <vector>
using namespace std;
 
// Function to find the size of the largest square submatrix of 1's
// present in a given binary matrix
int findLargestSquare(vector<vector<int>> const &mat, int m, int n, int &maxsize)
{
    // base condition
    if (m < 0 || n < 0) {
        return 0;
    }
 
    // find the largest square matrix ending at mat[m][n-1]
    int left = findLargestSquare(mat, m, n - 1, maxsize);
 
    // find the largest square matrix ending at mat[m-1][n]
    int top = findLargestSquare(mat, m - 1, n, maxsize);
 
    // find the largest square matrix ending at mat[m-1][n-1]
    int top_left = findLargestSquare(mat, m - 1, n - 1, maxsize);
 
    /* The largest square matrix ending at mat[m][n] will be 1 plus
        minimum of largest square matrix ending at mat[m][n-1],
        mat[m-1][n] and mat[m-1][n-1] */
 
    int size = 0;
    if (mat[m][n] != 0) {
        size = 1 + min (min(top, left), top_left);
    }
 
    // update maximum size found so far
    maxsize = max(maxsize, size);
 
    // return the size of the largest square matrix ending at mat[m][n]
    return size;
}
 
int findLargestSquareSubmatrix(vector<vector<int>> const &mat)
{
    // base case
    if (mat.size() == 0) {
        return 0;
    }
 
    // `M × N` matrix
    int M = mat.size();
    int N = mat[0].size();
 
    // `size` stores the size of the largest square submatrix of 1's
    // and is passed by reference
    int size = 0;
 
    findLargestSquare(mat, M - 1, N - 1, size);
 
    return size;
}
 
int main()
{
    vector<vector<int>> mat =
    {
        { 0, 0, 1, 0, 1, 1 },
        { 0, 1, 1, 1, 0, 0 },
        { 0, 0, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1 }
    };
 
    cout << "The size of the largest square submatrix of 1's is " <<
        findLargestSquareSubmatrix(mat);
 
    return 0;
}