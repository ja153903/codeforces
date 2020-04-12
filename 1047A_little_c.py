def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n = int_input()

    for a in range(n):
        if a % 3 != 0:
            for b in range(n):
                if b % 3 != 0:
                    if (n - a - b) % 3 != 0:
                        print(f'{a} {b} {n - a - b}')
                        return


if __name__ == '__main__':
    solve()
