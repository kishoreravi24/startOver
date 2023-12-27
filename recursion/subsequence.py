from typing import List

def sub(ind:int, res:List[int], list:List[int], n:int)->None:
    if ind>=n:
        print(res)
        return
    res.append(list[ind])
    sub(ind+1,res[:],list,n)
    res.pop()
    sub(ind+1,res[:],list,n)

list = [3,1,2]
res = []
sub(0,res,list,len(list))

