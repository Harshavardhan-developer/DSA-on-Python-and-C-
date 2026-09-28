n = 5

for i in range(1, n + 1):

    star = "* " * i
    spaces = "  " * (n - i)

    print(star + spaces + spaces + star)

for i in range(n - 1, 0, -1):

    star = "* " * i
    spaces = "  " * (n - i)

    print(star + spaces + spaces + star)