import random


# x = 1
# while x > 0:
#     randnum = random.randrange(1,10)
#     print(randnum)
    
    
# s = str(1)
s = int(1)
s = float(1)
print(type(s))
print(s)

a = """Lorem ipsum, dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."""
print(a)
print("do" in a)
print("do" not in a)
if "sit" in a:
    print("find it")
else:
    print("not find it")

if "cool" in a:
    print("find it")
else:
    print("not find it")

    print(a[-6:-3])