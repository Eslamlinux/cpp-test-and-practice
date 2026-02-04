
def info(**kwarg):
    print(kwarg)
    print(type(kwarg))
    print("name is: ",kwarg["name"])
    print("age is: ",kwarg["age"])

info(name="eslam",age=33)
