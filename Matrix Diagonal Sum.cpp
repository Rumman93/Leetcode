 int diagonalSum(vector<vector<int>>& mat) {
        int i,j,n=mat.size(),sum=0;
        for(i=0;i<n;i++)
        {
            sum+=mat[i][i];
        }
        j=n-1;
        for(i=0;i<n;i++)
        {
            sum+=mat[i][j];
            j--;
        }
        if(n%2) sum-=mat[n/2][n/2];


        return sum;


    }
