t = int(raw_input())
 
factors = {2:0, 5:0}
def factorize(n):
    while(n%5 == 0):
        n /= 5
        factors[5] += 1
    while(n%2 == 0):
        n /= 2
        factors[2] += 1
 
while t>0:
    n,m = map(int, raw_input().split())
    A = map(int, raw_input().split())
    rsum = 0
    while m:
        ql = map(int, raw_input().split())
        # print ql
        if len(ql) == 4:
            if ql[0] == 1:
                for i in xrange(ql[1]-1,ql[2],1):
                    A[i] *= ql[3]
            if ql[0] == 2:
                for i in xrange(ql[1]-1,ql[2],1):
                    A[i] = (i-ql[1]+2)*ql[3]
    
        else:
            ty,l,r = ql
            prod = 1
            for i in xrange(l-1,r,1):
                 factorize(A[i])
            rsum += min(factors[2],factors[5])
            factors[2] = 0
            factors[5] = 0
        m -= 1
    print rsum
    t = t-1 
