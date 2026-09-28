n = 5

for i in range(1, n + 1):

    star = "* " * i
    spaces = "  " * (n - i)

    print(star + spaces + spaces + star)

# Output:

# *                 * 
# * *             * * 
# * * *         * * * 
# * * * *     * * * * 
# * * * * * * * * * * 