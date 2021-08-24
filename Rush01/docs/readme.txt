

possibilites pour une ligne


 left  |  right |  position
----------------------------
	4		1		1 2 3 4
	3		1		2 1 3 4
	3		1		2 3 1 4
	2		2		1 4 2 3
	3		2		1 3 4 2
	2		2		2 1 4 3
	2		2		3 2 4 1
	2		2		3 4 1 2
	2       1       3 1 2 4
	1		3		4 3 1 2
	1		3		4 1 3 2
	1		4		4 3 2 1

	7 possibilites


lecture de ligne de commande
----------------------------
compter le nombre de parametre

si les chiffres sont different de 1-4 on retour Error suivi d'un retour a la ligne
si y a pas de parametre on affiche une erreur.
si le nombre de chiffre ne correspond pas a un carre, de 4*4 on retour Error suivi d'un retour a la ligne

main (int argc, char **argv)

argc != 2  => faux

lu = lucie
la = laurent
da = Daniel

la 1) fonction de calcul du nombre de valeur dans une chaine de caractere (retourner un int)
lu 2) fonction qui retourne le nombre du cote du carre (retourn 0 si pas un carre)
lu 3) fonction qui prepare l'espace des 4 cotes avec le nombre retourne par la fonction au point (2)
la 4) fonction qui remplie l'espace avec les valeurs contenu dans la chaine (retourne un pointeur sur le tableau, utilise malloc)     (char *s, int edge_size, int** edge)
da 5) verifier que les valeurs qu'on a introduit sont correcte (retourne 1 qand tout est ok et 0 si pas bon)
da 6) fonction qui prepare l'espace du sudoku en fonction du nombre retourne par la fonction au point (2) (retourne un pointeur, utilise malloc)
la 7) fonction qui affiche le sudoku a l'ecran a partir du pointeur du sudoku (ne retourne rien, utiliser write)
lu + da 8) 2 fonction qui libere la memoire pour les valeurs et le sudoku (liberation de la (3) et la (6))

9) fonction de resolution du sudoku


a) retourne une liste de toutes les possibilités

1  =>  3 * (3-1) = 1 
2  =>  2 * (1-1) = 2 
3  =>  3 * (3-1) = 6 
4  =>  4 * (4-1) = 12
5  =>  5 * (5-1) = 20




initial
   1 2 3 
copie mais en tournant les deux premiers
   2 1 3
avance de 1 la position de la rotation et tu retourne
   2 3 1 
recommance jusqu'a la taille - 1 du nomre de chiffre exemple 3, tu fait des rotation depuis la position 0 vers 1 du tableau 
   3 2 1
   3 1 2
   1 3 2
   1 2 3  





b) fonction qui retourne vrai si sur une position du tableau la valeur correspond a une solution gauche droite (memoriser ou on s'est arreter dans le tableau des possibilite)
elle prend en parametre left right start_pos du tableau, le tableau, et elle retourne l indexe du tableau correspondant a la solution


resout ligne


position de la ligne : 0
donne moi une solution pour le gauche (4) droite (1) (fonction (b))
si elle retourne -1 on retourne directement (y a pas de solution)
sinon ecrit dans la ligne correspond a la position (1 2 3 4)


resout colonne
position de la colonne : 0
tant qne
donne moi une solution pour le haut (4) bas (1) (fonction (b))
si elle retourne -1 on retourne directement (y a pas de solution)
sinon ecrit dans la colone correspond a la position (1 2 3 4) mais en verifiant que la premier position soit egal 



 ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
