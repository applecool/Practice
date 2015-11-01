
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


 def convertmorse(input_str):
     for word in input_str.strip().upper().split():
         for char in word:
             for ele in characters2morse.get(char, '?'):
                 if ele == '-':
                     #callfunction()
                 elif ele == '.':
                     #callfunction()
                 else:
                     #callfunction()



while True:
    convertmorse(input('A string to change into morse code'))