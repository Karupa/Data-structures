import csv
import random
import unittest


class Hangman:



    def start_play(self,):
        self.lenght = input("How many letters? ")
        self.nr_of_lives = input("How many lives? ")
        self.lenght = int(self.lenght)
        self.nr_of_lives = int(self.nr_of_lives)

    def fread(self):
        rows = []
        with open('input.csv', 'r') as File:
            reader = csv.reader(File)
            for row in reader:
                rows.append(row)
        self.words = []

        for i in rows:
            if len(i[0]) == self.lenght:
                self.words.append(i)



    def getrandomword(self,):
        self.word = random.choice(self.words)
        self.word[0] = self.word[0].upper()

    def play(self,):

        progress = []
        for i in range(0, len(self.word[0])):
            progress.append('_')

        for i in progress:
            print(i, end, flush)

        print("\n")

        print("ONLY UPPERCASE")
        print("\n")
        while self.nr_of_lives >= 0:
            print("Number of lives remaining: ", self.nr_of_lives)

            letter = input("Guess one letter: ")

            if self.word[0].find(letter) == -1:
                print("You didn't guess right!")
                self.nr_of_lives -= 1
                continue
            else:
                currentWord = self.word[0]
                indices = [i for i, a in enumerate(currentWord) if a == letter]
                for i in indices:
                    progress[i] = letter

            for i in progress:
                print(i, end, flush)

            print("\n")

            if '_' not in progress:
                break

        if self.nr_of_lives == -1:
            print("YOU LOST! THE WORD WAS", self.word[0])
        else:
            print("CONGRATS, YOU WON")


if __name__ == '__main__':

    print("\033[H\033[J")
    game = Hangman()
    game.start_play()
    game.fread()
    game.getrandomword()
    game.play()

