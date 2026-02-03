# RH fizz_buzz

start = 1
while start <= 50:
    print (start)
    start += 1
    if start%5 == 0:
        print("Buzz")
    elif start%3 == 0:
        print("fizz")
    elif start%5 ==0 and start%3 == 0:
        print("FizzBuzz")  
