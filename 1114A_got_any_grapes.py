def get_int_input():
    return [int(val) for val in input().split(' ')]

def solve():
    # x - min(Andrew); y - min(Dmitry); z - min(Michal)
    x, y, z = get_int_input()

    # a - green; b - purple; c - black
    a, b, c = get_int_input()

    xc = x
    x -= min(x, a)
    a -= min(a, xc)

    yc = y
    y -= min(y, a)
    a -= min(a, yc)

    yc = y
    y -= min(y, b)
    b -= min(b, yc)

    zc = z
    z -= min(z, a)
    a -= min(a, zc)

    zc = z
    z -= min(z, b)
    b -= min(b, zc)

    zc = z
    z -= min(z, c)
    c -= min(c, zc)

    if x + y + z == 0:
        print('YES')
    else:
        print('NO')

if __name__ == '__main__':
    solve()
