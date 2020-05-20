def int_lst_input():
    return [int(val) for val in input().split()]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    x = int_input()

    if x > 2 and x % 2 == 0:
        print('YES')
    else:
        print('NO')

if __name__ == '__main__':
    solve()

