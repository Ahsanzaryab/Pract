def MaximalSquare(strParam):
    S = list([[int(i) for i in k] for k in strParam])
    r = len(strParam)
    c = len(strParam[0])
    s = min(r, c)
    
    for x in range(s, 0, -1):  
        for i in range(0, r-x+1):    
            for j in range(0, c-x+1): 
                prod = 1
                
                for m in range(i, x+i):
                    for n in range(j, x+j):
                        prod *= S[m][n]
                if prod == 1:
                    return x*x
    return 0

st =   ["0111", "1111", "1111", "1111"]  
print (MaximalSquare(st))
