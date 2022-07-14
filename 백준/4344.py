test = int(input())

for _ in range(test):
    # list를 받아서 첫번째 값은 학생 수 변수로 넘겨주고 list에서 삭제
    li = list(map(int, input().split()))
    num = li[0]  # 학생 수
    del li[0]

    # 평균 계산
    avg = sum(li)/num

    # 평균을 넘는 학생 수 계산
    cnt = 0
    for i in li:
        if i > avg:
            cnt += 1

    rate = cnt/num * 100
    print(f"{rate:.3f}%")
