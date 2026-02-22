str = "i-love-you"

print(str.split("-"))
print(str.split("-",1))
print(str.rsplit("-",1))


str2 = "eslam"
# print(str2.len())
# # print(str2.center(str2.len,"*"))

print(str2.startswith("e"))
print(str2.endswith("m"))
print(str2.startswith("l",2,5))
print(str2.endswith("a",2,4))

print(str2.count("e"))

print(str2.swapcase())