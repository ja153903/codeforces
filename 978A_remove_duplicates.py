def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n = int_input()
    a = int_lst_input()

    d = {}

    for i, val in enumerate(a):
        d[val] = i

    print(len(d))
    print_lst([a[i] for i in sorted(d.values())])


if __name__ == '__main__':
    solve()
