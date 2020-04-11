def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    q = int_input()

    for i in range(q):
        n, a, b = int_lst_input()

        opt1 = n * a
        opt2 = (n // 2) * b + (n % 2) * a

        print(min(opt1, opt2))

if __name__ == '__main__':
    solve()
