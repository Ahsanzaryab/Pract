def MaximalSquare(strParam):
    S = list([[int(i) for i in k] for k in strParam])
    r = len(strParam)
    c = len(strParam[0])
    s = min(r, c)
    
    for x in range(s, 0, -1):  # descending searching
        for i in range(0, r-x+1):    # from r to r (filter goes from upper to bottom)   
            # if x == r, do this for loop only once
            # i is the r index of the matrix
            for j in range(0, c-x+1): # from column to column (filter goes from left to right)
                # if x == c, do this loop only once
                # j is the column index of the matrix
                # strParam[i][j] is the upper left corner of the submatrix
                prod = 1
                
                # S[m][n] is the elements of the submatrix
                for m in range(i, x+i):
                    for n in range(j, x+j):
                        prod *= S[m][n]
                ## after all the prod operator:
                if prod == 1:
                    return x*x
    return 0

st =   ["0111", "1111", "1111", "1111"]  
print (MaximalSquare(st))
