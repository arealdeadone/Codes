class node(object):
    def __init__(self, num2, num5, num0):
        self.num2 = num2
        self.num5 = num5
        self.num0 = num0

factor = {2:0, 5:0}

def factorize(n):
    
    while n%5 == 0:
        n /= 5
        factor[5] += 1
    while n%2 == 0:
        n /= 2
        factor[2] += 1
    
    
def build(pos, start, end):
    if start == end:
        factorize(A[start])
        tree[pos].num0 = min(factor[2], factor[5])
        tree[pos].num2 = factor[2]
        tree[pos].num5 = factor[5]
        factor[2] = 0
        factor[5] = 0
        return
    mid = (start+end)//2
    build(2*pos+1, start, mid)
    build(2*pos+2, mid+1, end)
    tree[pos].num5 = tree[2*pos+1].num5+tree[2*pos+2].num5
    tree[pos].num2 = tree[2*pos+1].num2+tree[2*pos+2].num2
    tree[pos].num0 = min(tree[pos].num2,tree[pos].num5)

def update(pos, start, end, l, r, val):
    
    if r < start or l > end or start > end:
        return
    if start == end:
        tree[node].num2 += val.num2
        tree[node].num5 += val.num5
        tree[node].num0 = min(tree[node].num2, tree[node].num5)
    mid = (start+end)//2
    update(2*pos+1, start, mid, l, r, val)
    update(2*pos+2, start, mid, l, r, val)
    
    tree[pos].num2 += tree[2*pos+1].num2 + tree[2*pos+2].num2
    tree[pos].num5 += tree[2*pos+1].num5 + tree[2*pos+2].num5
    tree[pos].num0 = min(tree[pos].num2,tree[pos].num5)
    
def update2(pos, start, end, l, r, y):
    if start > end or start > r or end < l:
        return
    if start == end:
        factorize((start-l+1)*y)
        tree[pos].num2 = factor[2]
        tree[pos].num5 = factor[5]
        tree[pos].num0 = min(tree[pos].num2, tree[pos].num5)
        return
 
    mid = (start+end)//2
    update2(2*pos+1, start, mid, l, r, y)
    update2(2*pos+2, mid+1, end, l, r, y)
    
    tree[pos].num2 += tree[2*pos+1].num2 + tree[2*pos+2].num2
    tree[pos].num5 += tree[2*pos+1].num5 + tree[2*pos+2].num5
    tree[pos].num0 = min(tree[pos].num2,tree[pos].num5)

def query(pos, start, end, l, r):
    
    if r < start or end < l:
        return node(0,0,0)
    if l <= start and end <= r:
        return tree[pos]
        
    mid = (start+end)//2
    p1 = query(2*pos+1, start, mid, l, r)
    p2 = query(2*pos+2, mid+1, end, l, r)
    
    temp = node(0,0,0)
    temp.num2 = p1.num2+p2.num2
    temp.num5 = p1.num5+p2.num5
    temp.num0 = min(temp.num2, temp.num5)
    
    return temp

t = input()
tree = 1000100*[node(0,0,0)]
A = []
while t:
    n,m = map(int, raw_input().split())
    A = map(int, raw_input().split())
    rsum = 0
    build(0,0,n-1)
    for i in range(2*n):
        print tree[i].num2, tree[i].num5, tree[i].num0
    while m:
        qt = map(int, raw_input().split())
        if len(qt) == 4:
            if qt[0] == 1:
                update(0,0,n-1,qt[1]-1,qt[2]-1,qt[3])
            if qt[0] == 2:
                update2(0,0,n-1,qt[1]-1,qt[2]-1,qt[3])
        else:
            ans = query(0,0,n-1,qt[1]-1,qt[2]-1)
            rsum += ans.num0
        m -= 1
    print rsum
    t -= 1
            