animal = {'vertebrado': {'ave': {'carnivoro': 'aguia', 'onivoro': 'pomba'},
                         'mamifero': {'onivoro': 'homem', 'herbivoro': 'vaca'}},
          'invertebrado': {'inseto': {'hematofago': 'pulga', 'herbivoro': 'lagarta'},
                           'anelideo': {'hematofago': 'sanguessuga', 'onivoro': 'minhoca'}}}

w1 = input()
w2 = input()
w3 = input()

print(animal[w1][w2][w3])
