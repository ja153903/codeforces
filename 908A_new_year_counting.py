def int_lst_input():
    return [int(val) for val in input().split()]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    s = input()

    vowels = {'a', 'e', 'i', 'o', 'u'}

    count = 0
    for val in s:
        if val in vowels or (val.isnumeric() and int(val) % 2 == 1):
            count += 1

    print(count)

if __name__ == '__main__':
    solve()
