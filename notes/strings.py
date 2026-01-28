# RH Strings Notes

# name = input("What is your name: ").strip().capitalize()

#print("Hello", name + "!")

sentence  = "the quick brown fox jumps over the lazy dog." 
print(sentence)
word = input("Tell me a word from the sentence: ")
new_word = input("Give me a word from the sentence: ")
start = sentence.find("word")
length = len("word")
print(sentence.replace(word, new_word))

print(sentence[start:start+length])
"""
num_one = int(input("Tell me a number: "))
num_two = int(input("Tell me a number: "))
print(num_one*num_two)"""