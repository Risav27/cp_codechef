import os


print(os.listdir())

for i in os.listdir():
    if(i[-3:] == 'exe'):
        os.remove(i)