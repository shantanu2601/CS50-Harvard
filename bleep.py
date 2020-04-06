from cs50 import get_string
from sys import argv

ban = set()


def main():
    if(len(argv) != 2):
        print("Usage: python bleep.py dictionary")
        exit(1)
    f = open(argv[1], "r")
    for line in f:
        ban.add(line.strip())
    inp = get_string("What message would you like to censor?\n")    
    msg = inp.split(" ")
    msg_censor = ""
    for word in msg:
        if word.lower() in ban:
            msg_censor += ("*" * len(word)) + " "
        else:
            msg_censor += word + " "
    
    print(msg_censor.strip())


if __name__ == "__main__":
    main()
