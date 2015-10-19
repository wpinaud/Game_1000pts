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

##Cartes *action*
- Parades et attaques sont répaties en 3 groupes
- Champ de groupe initialisé par le constructeur
- Surcharge de << pour utiliser cout: ```x : A(y)``` ou ```x : P(y)``` avec x le numéro de la carte et y son nombre de points.

##Paquet de cartes

###Méthode de mélange du paquet de cartes

###Méthode pour piocher une carte
```S’il n’y a plus de cartes dans la pioche, la methode lancera une exception PiocheVideException.```

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
-  *Avancer le plus vite possible.* En cas de blocage, jouer la parade appropriee ou piocher jusqu’a la trouver
-  *pourrir la vie de l’adversaire* : utiliser au maximum les attaques et avancer des que l’adversaire est bloque.

```Ecrire la boucle principale du jeu en completant si necessaire les classes existantes```



