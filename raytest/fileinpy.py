
# file1 = open("myfileinby.txt","w")

# file1.write("hello semsem\nhow are you")

file1 = open("myfileinby.txt","a")
file1.write("\nnew")

file1 = open("myfileinby.txt","r")
print(file1.read(24))
