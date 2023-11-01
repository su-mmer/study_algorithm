def solution(my_string, letter):
    s = list(my_string)
    for i in my_string:
        if i==letter:
            s.remove(letter)
    return ''.join(s)
