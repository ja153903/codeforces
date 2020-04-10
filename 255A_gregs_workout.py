def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def solve():
    n = int_input()
    a = int_lst_input()

    ch, bi, ba = 0, 0, 0

    for i in range(0, n):
        if i % 3 == 0:
            ch += a[i]
        elif i % 3 == 1:
            bi += a[i]
        elif i % 3 == 2:
            ba += a[i]

    if ch > bi and ch > ba:
        print('chest')
    elif bi > ch and bi > ba:
        print('biceps')
    elif ba > ch and ba > bi:
        print('back')

if __name__ == '__main__':
    solve()
