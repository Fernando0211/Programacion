import sys

phrase=None
inv=None

if __name__ == "__main__":
    print("Reverse a string\n")
    print("Enter a phrase: ")
    phrase=input()
    inv=' '.join(reversed(phrase.split()))

    print("\nReversed phrase: ", inv)


