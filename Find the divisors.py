def divisors(integer):
    i = []
    for x in range(1,1000000):
        if (integer % x == 0 and x != 1 and x != integer):
            i.append(x)

    if len(i) == 0:
        return str(integer) + " is prime"
    if len(i) != 0:
        return i