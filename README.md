#Le jeu des 1000points
***Willis Pinaud et Eric Lalevée***

##Explication du jeu

73 cartes:
 - 46 cartes *point* (30 à 50pts, 16 à 100pts)
 - 27 cartes *action* : entraver la marche de l’adversaire ou à lever une entrave de l’adversaire.
 	+ 3 groupes d’*attaque/parade*:
 		* 3 exemplaires de la carte attaque 
 		* 6 exemplaires de la carte parade

Le principe du jeu consiste à atteindre mille points.
Si arrivé au bout des 73 cartes aucun des joueurs n’a atteint mille points le gagnant est celui qui a le plus de points.

1. Mélanger les 73 cartes
2. Distribuer 6 cartes à chacun des deux joueurs
3.```A un moment donné du d ́eroulement de la partie, chaque joueur dispose, avant de jouer, de ses six cartes (sa main) et d’un tas de cartes posées sur le tapis de jeu comportant entre autres toutes les cartes point déjà déposées par ce joueur.```
4. Lors du tour du joueur:
	1. Piocher une nouvelle carte sur le dessus de la pioche
	2. Il pose une carte:
		3. **point** dans son propre tas pour augmenter son cumul de points, à condition de ne pas être pr ́esentement bloqué par une attaque de l’adversaire,
		3. **attaque** dans le tas de l’adversaire, pour empêcher celui-ci de d ́eposer des cartes point dans son tas lorsque viendra son tour,
		4. **parade** dans son propre tas pour ne plus être bloqué et contrer l’attaque de l’adversaire et pouvoir par la suite continuer à déposer des cartes point sur son tas,
		5. **quelconque** dans la défausse.

```On pŕecise qu’une attaque d’un groupe ne peut être contrée que par une carte parade du même groupe.```

##Structures de données
###Diagramme UML

###Code et explication


##Cartes *point*
- Nombre de point initialisé par le constructeur
- Surcharge de << pour utiliser cout: ```x : +(y)``` avec x le numéro de la carte et y son nombre de points.

La classe Carte Point hérite de la classe Carte. Elle a en plus l'attribut nombre de point, qui vaut 0, 50, ou 100. 
On utilise deux cartes points 0 au début du jeu pour éviter que les joueurs aient des tas vides. 
Elles ont la méthode surcharge de l'opérateur << pour afficher leur rang, puis leur nombre de points. 

##Cartes *action*
- Parades et attaques sont répaties en 3 groupes
- Champ de groupe initialisé par le constructeur
- Surcharge de << pour utiliser cout: ```x : A(y)``` ou ```x : P(y)``` avec x le numéro de la carte et y son nombre de points.

###Cartes *Attaque*
Les cartes attaques héritent des cartes actions. Elles ont en plus la méthode surcharge de l'opérateur << pour afficher leur rang, A et leur numéro de groupe. 

###Cartes *Parade*
Les cartes parades héritent des cartes action. Elles ont en plus la méthode surcharge de l'opérateur << pour afficher leur rang, P et leur numéro de groupe. 


##Paquet de cartes
Le Deck est initialisé comme un vecteur de 73 cartes, qui ont chacune un rang, de 0 à 72. 

###Méthode de mélange du paquet de cartes
On mélange le deck avec la méthode random_shuffle. 

###Méthode pour piocher une carte
A chaque fois qu'un joueur pioche, on pop_back la dernière carte du deck et on l'envoie dans la main du joueur. 
```S’il n’y a plus de cartes dans la pioche, la methode lancera une exception PiocheVideException, et la partie est finie.```

###Méthode de distribution des cartes
``` Ecrire la m ́ethode permettant de distribuer les cartes : on suppose que celle-ci prend les 6 cartes du dessus de la pioche et les renvoie.```

##Les joueurs
- Stock ses cartes
- Stock son tas
- Méthode abstraite permettant de choisir la carte à jouer à partir du tas de l'adversaire
	+ Si la carte n'est pas compatible avec le tas du joueur ou celui de l'adversaire elle est défaussée

Méthodes:
- Calculer le score du joueur (en fonction de son tas)
- Renvoyer la carte la plus haute du tas (= la carte jouée par l'adversaire)
- Savoir si une carte est jouable sur un tas

Stratégies:
###*Avancer le plus vite possible.* En cas de blocage, jouer la parade appropriee ou piocher jusqu’a la trouver
Ce joueur n'attaque jamais. 
Si il peut jouer une parade (si la dernière carte de son tas est une carte attaque et qu'il a en main une parade du même groupe), alors il joue cette carte parade. 
Sinon, si il peut jouer une carte point (si la dernière carte de son tas n'est pas une carte attaque), il la joue. 
Si il a comme dernière carte de son tas une carte attaque et qu'il n'a pas en main une carte parade du même groupe, il se défausse, si possible d'une carte attaque.  

###*Pourrir la vie de l’adversaire* : utiliser au maximum les attaques et avancer des que l’adversaire est bloque.
Si il peut jouer une parade (si la dernière carte de son tas est une carte attaque et qu'il a en main une parade du même groupe), alors il joue cette carte parade. 
Sinon, si il peut jouer une attaque (si la dernière carte du tas de l'adversaire n'est pas une carte attaque et que la dernière carte de son tas n'est pas une carte attaque), alors il joue cette carte attaque. 
Sinon, si il peut jouer une carte point, il la joue. 
Sinon, il se défausse. 

#Ce qui ne fonctionne pas 
1. On n'arrive pas à supprimer une carte de la main d'un joueur quand il joue. 
2. On ne sait pas si la fin de partie fonctionne, que ce soit quand un joueur atteind 1000 points, ou quand le deck est vide. 
3. On a des cartes en double dans la défausse et dans les tas des joueurs. 

