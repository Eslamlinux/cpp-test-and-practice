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
        print("my name ",self.name)

opj = test(name="eslam",id=1112)
print(opj.name)
