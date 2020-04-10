def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n, k = int_lst_input()

    if (n // k) % 2 == 1:
        print('YES')
    else:
        print('NO')

if __name__ == '__main__':
    solve()
