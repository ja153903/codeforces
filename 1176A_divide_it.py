def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def print_lst(lst):
    print(' '.join([str(val) for val in lst]))

def solve():
    q = int_input()
    for i in range(q):
        n = int_input()

        seen = set()

        count = 0

        while n > 0 and n not in seen:
            seen.add(n)

            if n % 5 == 0:
                n = 4 * n // 5
            elif n % 3 == 0:
                n = 2 * n // 3
            elif n % 2 == 0:
                n = n // 2
            else:
                break

            count += 1

        if n == 1:
            print(count)
        else:
            print(-1)

if __name__ == '__main__':
    solve()
