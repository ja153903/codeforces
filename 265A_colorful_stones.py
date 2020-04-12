def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    s = input()
    t = input()

    j = 0
    for i in range(len(t)):
        if t[i] == s[j]:
            j += 1

    print(j + 1)

if __name__ == '__main__':
    solve()

