def int_lst_input():
    return [int(val) for val in input().split(' ')]

def int_input():
    return int(input())

def solve():
    n = int_input()
    a = int_lst_input()

    target = sum(a) // (n // 2)

    idx_used = set()

    for i in range(0, n):
        for j in range(0, n):
            if (
               i not in idx_used
               and j not in idx_used
               and a[i] + a[j] == target
               and i != j
            ):
                idx_used.add(i)
                idx_used.add(j)
                print(f'{i+1} {j+1}')

if __name__ == '__main__':
    solve()
