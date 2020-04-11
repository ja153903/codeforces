def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    t = int_input()
    for _ in range(t):
        a = list(input())
        b = list(input())
        c = list(input())

        n = len(a)
        yes = True

        for i in range(n):
            if ((a[i] != c[i] and b[i] != c[i]) or
                (a[i] == b[i] and (a[i] != c[i] or b[i] != c[i]))):
                print('NO')
                yes = False
                break

        if yes:
            print('YES')

if __name__ == '__main__':
    solve()

