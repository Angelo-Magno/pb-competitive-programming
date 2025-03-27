entry = input().split()

a = int(entry[0])
n = int(entry[-1])

ap_sum = int((a + (a + n - 1)) * n  / 2)

print(ap_sum)
