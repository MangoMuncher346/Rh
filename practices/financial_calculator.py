# RH Financial Calculator

income = float(input("monthy income: $"))

rent = float(input("rent: $"))

utilities = float(input("utilities: $"))

groceries = float(input("groceries: $"))

transportation = float(input("transportation: $"))

print("Your rent is $" , rent, "that is ",round(rent/income*100,0),"% of your income")

print("Your utilities is $" , utilities, "that is" ,round(utilities/income*100,0),"% of your income")

print("Your groceries is $" , groceries, "that is" ,round(groceries/income*100,0),"% of your income")

print("Your transportation is $" , transportation, "that is" ,round(transportation/income*100,0), "% of your income")

save = round(.1 * income,2)
print("Your saveings is $", save)
