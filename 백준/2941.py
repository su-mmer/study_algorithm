s = input()
cro_al = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for i in cro_al:
        s = s.replace(i, 'a')

print(len(s))
