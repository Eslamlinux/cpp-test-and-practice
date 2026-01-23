txt = "hello world"

print(txt[6:9])
print(txt[-5:])
print(txt[-5:-2])
print(txt[4:0:-1])


s = slice(0,5,3)

print(txt[s])

print(txt.index("e"))

print(len(txt))
print(txt.count("l"))

print('hello' in txt)
print('h' in txt)
print('hello' not in txt)
print('llo' not in txt)

print(txt*2)