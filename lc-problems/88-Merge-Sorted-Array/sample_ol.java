while(n > 0) A[m + n - 1] = (m == 0 || B[n - 1] > A[m - 1]) ? B[--n] : A[--m];