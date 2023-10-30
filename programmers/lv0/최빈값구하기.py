def solution(array):
    # print(max(array))
    count = [0]*(max(array)+1)
    
    for i in array:
        count[i] += 1
    alot = -1
    for i in count:
        if alot < i:
            alot = i

    return count.index(alot) if count.count(alot) == 1 else -1
