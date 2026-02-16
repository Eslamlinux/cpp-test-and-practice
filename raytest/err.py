newlist = [1,2,7]
try:
    # print(1/0)
    print(newlist[3])
except ZeroDivisionError:
    print("zero division error")
except IndexError:
    print("index error")

try:
    num = 4
    assert num > 5
except:
    print("not an num")
else:
    print(num / 2)