import sys

i=0
add=0
av=0

if __name__ == "__main__":
    print(f"{sys.argv[0]}: The average of the numbers entered.\n")
    for i in range (1, len(sys.argv)):
        add=(add+float(sys.argv[i]))
        av=add/i

    print("The average is: ", av)