n = 4

for i in range(2 * n + 1, 0 ,-1):
    star = "* " * (i)
    spaces = " " * (2 * n - i + 1)
    print(spaces + star)

 # Output:

# * * * * * * * * * 
#  * * * * * * * * 
#   * * * * * * * 
#    * * * * * * 
#     * * * * * 
#      * * * * 
#       * * * 
#        * * 
#         * 