def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    a, b = int_lst_input()

    result = [0, 0, 0]
    for i in range(1, 7):
        if abs(a - i) == abs(b - i):
            result[1] += 1
        elif abs(a - i) < abs(b - i):
            result[0] += 1
        else:
            result[2] += 1

    print_lst(result)


if __name__ == '__main__':
    solve()
