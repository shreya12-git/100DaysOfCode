class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& 
        mat, int r, int c);
};
/**************************************************************/
vector<vector<int>> Solution::matrixReshape 
        (vector<vector<int>>& mat, int r, int c) {
    if (mat[0].size()*mat.size() != r*c) {
        return mat;
    }
    vector<vector<int>> v;
    vector<int> aux(c, 0);
    int i, j, rows = mat.size(), columns = mat[0].size(), row=0, column=0;
    for (i = 0; i < r; ++i) {
        v.push_back(aux);
    }
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            v[row][column] = mat[i][j];
            /* indexes update */
            ++column;
            if (column == c) {
                column = 0;
                ++row;
            }
        }
    }
    return v;
}
/***************************************************************/