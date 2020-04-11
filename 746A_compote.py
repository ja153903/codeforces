def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    a = int_input()
    b = int_input()
    c = int_input()

    comp = 0

    while a > 0 and b > 1 and c > 3:
        comp += 1

        a -= 1
        b -= 2
        c -= 4

    print(comp * 7)

if __name__ == '__main__':
    solve()
