class NumMatrix {
public:
    vector<vector<int>> matrix;

    NumMatrix(vector<vector<int>>& m) {

        int rows = m.size();
        int cols = m[0].size();

        // Row-wise prefix
        for(int i = 0; i < rows; i++){
            for(int j = 1; j < cols; j++){
                m[i][j] += m[i][j-1];
            }
        }

        // Column-wise prefix
        for(int j = 0; j < cols; j++){
            for(int i = 1; i < rows; i++){
                m[i][j] += m[i-1][j];
            }
        }

        matrix = m;
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int result = matrix[row2][col2];

        if(col1 > 0){
            result = result - matrix[row2][col1-1];
        }

        if(row1 > 0){
            result = result - matrix[row1-1][col2];
        }

        if(row1 > 0 && col1 > 0){
            result = result + matrix[row1-1][col1-1];
        }

        return result;
    }
};