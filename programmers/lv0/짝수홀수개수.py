def solution(num_list):
    check = [0,0]
    for i in num_list:
        check[i%2] += 1
    return check
