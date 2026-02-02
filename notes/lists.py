# RH Lists

numbers =[3,45,436543,6543,6543,547,547,6,4]
names =["Alex", "Paul", "Alexis", "Israel", "Ally"]

names[0] = "Eric"
names.append("Jayshree") #adds to end of the list
index = names.index("Ally")
names.pop(index)
print(len(names))
print(names)

for name in names:
    print(f"Hello {name}")

for number in numbers:
    print(f"{number} - 10 = {number-10}")

for i in range(20):
    print(f"this is the {i} iteration of this loop")