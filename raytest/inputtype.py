# from typing import List
# def input_type(value: str) -> str:
#     if value.isalpha():
#         return "string"
#     elif value[0].isdigit():
#         if(value.find('.')):
#             return "double"
#         else:
#             return "integer"
#     return value

class test:
    def __init__(self,name,id):
        self.name = name
        self.id = id
    def talk(self):
        print("my name ",self.name,"my id ",self.id)
        print(self)

opj = test(name="eslam",id=1112)
print(opj.name)
opj.talk()

class pp:
    def __init__(self,n,w,h):
        self.name = n
        self.whgit = w
        self.hight = h
        print("name ",n,"whgit ",w,"hight ",h)
    def tosum(a,b):
        print(a+b)

p = pp("eslam",55,173)

pp.tosum(10,10)

print(dir(p))