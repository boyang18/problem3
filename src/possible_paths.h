long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}

long possiblePathsIterative(int M, int N) {
    // homework

    //This code is highly based on https://www.geeksforgeeks.org/count-possible-paths-top-left-bottom-right-nxm-matrix/

    int count[M][N];


    for (int i = 0; i < M; i++)
        count[i][0] = 1;

    if(M==N==0){
        return 0;
    }

    for (int j = 0; j < N; j++)
        count[0][j] = 1;


    for (int i = 1; i < M; i++) {
        for (int j = 1; j < N; j++)


            count[i][j] = count[i - 1][j] + count[i][j - 1]; //+ count[i-1][j-1];
    }
    return count[M - 1][N - 1];
}
