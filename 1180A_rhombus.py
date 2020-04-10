def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n = int_input()

    if n == 1:
        print(1)
        return

    current = 1
    for i in range(2, n + 1):
        current += 4 * (i - 1)

    print(current)

if __name__ == '__main__':
    solve()
