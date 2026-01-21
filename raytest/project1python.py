
dictionary = {1111111111:"Amal",2222222222:"Mohammed"}

def sear():
    entry = input("please enter num to search:")
    if entry.count() > 10 or entry.count() <10:
        print("This is invalid number")
    for c in dictionary:
        if entry == c:
            print(c.value())
        else:
            print("Sorry, the number is not found")


# sear()


ent = '123456'
print(ent.)