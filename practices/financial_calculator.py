# RH Financial Calculator

income = float(input("monthy income: $"))

rent = float(input("rent: $"))

utilities = float(input("utilities: $"))

groceries = float(input("groceries: $"))

transportation = float(input("transportation: $"))

print("Your rent is $" , rent, "that is ",round(rent/income*100,0),"% of your income")
