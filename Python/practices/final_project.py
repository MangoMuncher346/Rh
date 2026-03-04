# RH IM aal project hang man
import random 
words = ["mississippi", "word", "computer science", "bump", "trump" , "claps" , "hydrophilic" , "hydrophobic" , "skate" , "glasses" , "vision"]
word = random.choice(words)

letters_guessed = []
wrong_guesses = 0

while True:
    display_words = ""
    for letter in word:
        if letter in letters_guessed:
            display_words += letters_guessed

    guess = input("Guess a letter: ")
    if guess not in word: 
        wrong_guesses += 1
        print(f"{guess} is not in the word")


    if wrong_guesses == 0:
        print( """
            ________
            |        |
            |        |
            |
            |
            |
        __________""")
    elif wrong_guesses == 1:
        print( """
            ________
            |        |
            |        |
            |        O
            |        
            |       
        __________""")
    elif wrong_guesses == 2:
        print( """
        ________
        |        |
        |        |
        |        O
        |        |
        |       
    __________""")
    elif wrong_guesses == 3:
        print( """
        
        ________
        |        |
        |        |
        |        O
        |        |
        |       /
    __________""")
    elif wrong_guesses == 4:
        print( """
        ________
        |        |
        |        |
        |        O
        |        |
        |       / \\
    __________""")
    elif wrong_guesses == 5:
        print( """
        ________
        |        |
        |        |
        |        O
        |        |\\
        |       / \\
    __________""")
    elif wrong_guesses == 6:
        print( """
        ________
        |        |
        |        |
        |        O
        |       /|\\
        |       / \\
    __________""")
    