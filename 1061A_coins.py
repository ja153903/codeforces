def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    n, S = int_lst_input()

    coins = 0
    for i in range(n, -1, -1):
        if S == 0:
            break
        if S // i > 0:
            coins += S // i
            S %= i

    print(coins)

if __name__ == '__main__':
    solve()

