def ap_sum(start, end, d):
    n = ((end - start) / d) + 1
    return n * (start + end) / 2


x = int(input())
y = int(input())

if x > y:
    x, y = y, x

sum_d1 = ap_sum(x, y, 1)

r1 = x % 13
r2 = y % 13

start = x if r1 == 0 else x - r1 + 13
end = y if r2 == 0 else y - r2

sum_d13 = ap_sum(start, end, 13)

print(int(sum_d1 - sum_d13))
