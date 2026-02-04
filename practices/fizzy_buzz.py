# RH fizz_buzz

start = 0
while start < 50:
    start += 1
    if start % 5 ==0 and start % 3 == 0:
        print("FizzBuzz") 
    elif start % 3 == 0:
        print("fizz")
    elif  start%5 == 0:
        print("Buzz")
    else:
        print(start)