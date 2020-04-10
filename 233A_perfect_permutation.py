def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n = int_input()

    if n % 2 == 1:
        print(-1)
        return
    else:
        res = [0 for _ in range(n)]

        for i in range(0, n, 2):
            res[i] = i + 1
            res[i+1] = i + 2
            res[i], res[i + 1] = res[i + 1], res[i]

        print_lst(res)

if __name__ == '__main__':
    solve()
