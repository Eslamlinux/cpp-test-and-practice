newlist = [1,2,7]
try:
    # print(1/0)
    print(newlist[3])
except ZeroDivisionError:
    print("zero division error")
except IndexError:
    print("index error")