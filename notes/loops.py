# RH loops
import random #library code someone else wrote, always import at the top

start = 17

while start >= 1:
    print(start)
    start -= 1

goose = random.randint(1,20)
count = 1

while count < goose:
    print("Duck")
    count += 1
print("GOOSE!")

"""number = random.randint(1,25)

while True:
    guess = int(input("Guess a number between 1 and 25:"))
    if guess == number:
        print(f"congradulations! {number} was the number")
        break #exit the loop
    elif guess > 25 or guess < 1:
        print("thats isn't an option.")
    elif guess < number:
        print("Number is higher")
    else:
        print("Number is lower")"""

