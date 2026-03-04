# RH Time of Day
time = int(input("what time of day is it in military time: "))

if time > 0000 and time < 900:
    print("Goodmoring!")
   
elif time > 1300 and time < 1600:
    print("Good afternoon!")
else:
    print("goodnight!")
