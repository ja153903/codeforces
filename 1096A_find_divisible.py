def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    t = int_input()

    for _ in range(t):
        l, _ = int_lst_input()
        print(f'{l} {l * 2}')

if __name__ == '__main__':
    solve()
