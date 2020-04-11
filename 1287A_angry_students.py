def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    t = int_input()

    for i in range(t):
        k = int_input()
        s = list(input())

        a = 0

        while True:
            local_a = 0
            for j in range(1, len(s)):
                if s[j-1] == 'A' and s[j] == 'P':
                    local_a += 1
                    s[j] = 'a'

            if local_a == 0:
                break

            a += 1
            for j in range(len(s)):
                if s[j] == 'a':
                    s[j] = 'A'

        print(a)


if __name__ == '__main__':
    solve()
