def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n, k = int_lst_input()
    a = int_lst_input()

    i, j = 0, n - 1
    c = 0

    while i <= j and (a[i] <= k or a[j] <= k):
        if a[i] <= k:
            c += 1
            i += 1
        elif a[j] <= k:
            c += 1
            j -= 1

    print(c)

if __name__ == '__main__':
    solve()

