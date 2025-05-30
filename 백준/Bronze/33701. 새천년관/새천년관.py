import random
import string

def name():
    while True:
        result = "n" + randomName() + "gwan"
        if {'k', 'u'}.issubset(result):
            return result

def randomName():
    return "".join(random.choice(string.ascii_lowercase)
                  for _ in range(random.randint(0, 45)))

print(name())