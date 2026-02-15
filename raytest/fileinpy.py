
# file1 = open("myfileinby.txt","w")

# file1.write("hello semsem\nhow are you")
# file1.close()

file1 = open("myfileinby.txt","a")
file1.write("\nnew")
file1.close()
file1 = open("myfileinby.txt","r")
print(file1.read(24))

def system(order):
    if order == "clear" or order == "Clear":
        print("clear")

system("clear")

system("Clear")