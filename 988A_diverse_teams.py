def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n, k = int_lst_input()
    a = int_lst_input()

    seen = set()
    res = []

    for i, val in enumerate(a):
        if val not in seen:
            res.append(i + 1)
            seen.add(val)

        if len(res) == k:
            break

    if len(res) == k:
        print('YES')
        print_lst(res)
    else:
        print('NO')

if __name__ == '__main__':
    solve()
