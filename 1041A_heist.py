def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def solve():
    n = int_input()
    rem_key_idx = int_lst_input()

    _min = min(rem_key_idx)
    _max = max(rem_key_idx)

    print((_max - _min) - n + 1)

if __name__ == '__main__':
    solve()
