import time, winsound #, sys

#initial steps
characters2morse = {
          "!": "---.",      "\"": ".-..-.",     "$": "...-..-",    "'": ".----.",
          "(": "-.--.",      ")": "-.--.-",     "+": ".-.-.",      ",": "--..--",
          "-": "-....-",     ".": ".-.-.-",     "/": "-..-.",
          "0": "-----",      "1": ".----",      "2": "..---",      "3": "...--",
          "4": "....-",      "5": ".....",      "6": "-....",      "7": "--...",
          "8": "---..",      "9": "----.",
          ":": "---...",     ";": "-.-.-.",     "=": "-...-",      "?": "..--..",
          "@": ".--.-.",
          "A": ".-",         "B": "-...",       "C": "-.-.",       "D": "-..",
          "E": ".",          "F": "..-.",       "G": "--.",        "H": "....",
          "I": "..",         "J": ".---",       "K": "-.-",        "L": ".-..",
          "M": "--",         "N": "-.",         "O": "---",        "P": ".--.",
          "Q": "--.-",       "R": ".-.",        "S": "...",        "T": "-",
          "U": "..-",        "V": "...-",       "W": ".--",        "X": "-..-",
          "Y": "-.--",       "Z": "--..",
          "[": "-.--.",      "]": "-.--.-",     "_": "..--.-",
 }


e_time = 50     # Element time in milli sec.
freq = 1280     # Tone freq. in hertz
char_gap = 1    # Time between characters of a word, in units of e_time
word_gap = 7    # Time between words, in units of e_time

def gap(n=1):
    time.sleep(n * e_time / 1000)
off = gap

def on(n=1):
    winsound.Beep(freq, n * e_time)

def dit():
    on(); off()

def dah():
    on(3); off()

def bloop(n=3):
    winsound.Beep(freq//2, n * e_time)

 def convertmorse(input_str):
     for word in input_str.strip().upper().split():
         for char in word:
             for ele in characters2morse.get(char, '?'):
                 if ele == '-':
                     dah() #callfunction()
                 elif ele == '.':
                     dit() #callfunction()
                 else:
                     bloop() #callfunction()
                gap(char_gap)
            gap(word_gap)



while True:
    convertmorse(input('A string to change into morse code'))
