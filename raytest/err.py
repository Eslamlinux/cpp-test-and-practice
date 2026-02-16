
try:
    print(1/0)
except ZeroDivisionError:
    print("zero division error")
except IndexError:
    print("index error")