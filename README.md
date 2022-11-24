# Algorithme-et-structure-de-donn-es
Exercices Série_1

Notes de cours :
•	La structure d'un algorithme est :
Algorithme  <nom de l'algorithme> ;
  < Partie déclaration >
Debut
  < Partie action >
Fin.
•	La casse n'est pas importante.
•	Les types de base sont : entier, reel, caractere et bool.
•	Les opérations arithmétiques pour les réels et les entiers sont : +,-,*,/. Appliquée entre deux entiers / donne un réel. Appliquées entre un reel et un entier elles donnent un réel.
•	Pour simplifier, on supposera en algorithmique qu'il n y a pas de borne pour les entiers et les réels.
•	Un identificateur est une chaîne alphanumérique pouvant utiliser _ mais commençant par un alphabétique.
•	Pour l'évaluation d'expressions, on supposera l'ordre de priorités décroissant suivant :
1.	NON, - unaire ;
2.	Opérateurs multiplicatifs : *, /, ET ;
3.	additifs : +, - binaire, OU ;
4. relationnels : <,>,<=,>=,<>,= ;
Les conflits sont évalués de gauche a droite.
•	Les actions de base sont : lire, ← (ou :=) , ecrire ;
•	On ne peut affecter un réel a un entier, mais on peut les comparer ;
•	On ne peut réaliser d'affectation entre un caractère et un entier (dans les 2 sens) et on ne peut les comparer.
•	On peut comparer deux caractères et le résultat dépend de leurs codes ASCII.
•	Un message est mis entre cotes simples comme suit : ecrire('ceci est un message').
•	Les opérateurs booléens ne sont applicables que sur des booléens ; i.e. si A est un entier, Non A est incorrecte.
•	On suppose que faux < vrai.
•	Pour l'instruction si...alors...fsi ; le délimiteur de bloc fsi doit etre mis qu'il y ait une ou plusieurs instructions dans le bloc. Par conséquent, la mise d'un ';' avant sinon n'est pas interdite.


Exercice 1 :
Que va afficher chacun des algorithme suivant ? Justifier.
Algorithme exemple 1;
var A, B, somme: entier ; 
Début
Lire(A,B) ; 
somme ← A*B ; 
Ecrire(somme) ;
Fin.

Algorithme exemple 2; 
var A, B, somme: entier ; 
Début
Ecrire('Donner A et B') ; 
somme ← A+B ; Ecrire(somme) ;
Fin.

Exercice 2 :
Parmi les identificateurs suivants quels sont ceux qui sont valides et ceux qui ne le sont pas :
Mat /	UneValeurEntiere / Val-Abs / M1546	/ B3F2_G 2Oper	/ Première / cinq /	Debut /	debut.

Exercice 3 :
Quel est le type du résultat de division d'un réel dont la partie décimale est nulle par l'entier un ? Justifier.

Exercice 4 :
Ecrire un algorithme qui demande un nombre à l’utilisateur, puis calcule et affiche son carré celui- ci.

Exercice 5 :
Écrire un algorithme qui calcule la somme, la différence et le produit de deux nombres.

Exercice 6 :
Les algorithmes suivants contiennent-ils des erreurs ? Dans l'affirmatif, déterminer toutes les erreurs pour chaque algorithme.

1.	Algorithme Test1 ; 
    Var A, B, C : entier ; 
    Début
     A ←22 ; C ←A+B ;
     C ←A/B ; D ←a ;
     B ←2E+1 ;
     c ←'E' ;
     Ecrire (A,B,D) ; 
    Fin.
    
2.	Algorithme Test2 ;
    Const cinq = 5 ;
    lettre = 'c' ; Var E : entier ;
    Y,Z : réel ;
    C1, C2 : caractère ; 
    Début
     Lire(E,C1,C2) ; Y ← 5.23 + E ;
     Z ← 2/E ; 
     c ←C1 ; 
     C1 ←E ;
     C1 ←c+C2 ;
     Ecrire(Y, Z, cinq) ;
    Fin.
    
3.	Algorithme Test3 ;
     Const cinq = 5 ;
     Var	X,Y,Z : entier ; 
     Début
      Lire(X) ; 
      X ←2 ; 
      Y ←X ;
      7 ←cinq+1 ; Z ←X+Y ;
      cinq ← X*y+5 ; 
      Ecrire(Y, Z, cinq) ;
     Fin.
     
Exercice 7 :
Écrire un algorithme qui permute le contenu de deux variables de même type en utilisant une variable intermédiaire.

Exercice 8 :
Construire un algorithme permettant de lire 3 nombres a, b et c pour effectuer la permutation circulaire de ces nombres. Exemple si a=5, b=2, c=6 en sortie nous aurons a=6, b=5, c=2.

Exercice 9 :
Écrire un algorithme qui calcule puis affiche pour une valeur donnée de x la valeur du polynôme 7*3+5*2*15.

Exercice 10 :
Écrire un algorithme qui détermine la valeur absolue d'un nombre réel donné.

Exercice 11 :
Écrire un algorithme qui détermine le minimum de deux nombres entiers.

Exercice 12 :
Écrire un algorithme qui détermine le minimum de trois nombres entiers.

Exercices supplémentaires

Exercice 13 :
a.   Étant donné l'algorithme suivant :
Algorithme exemple1 ; 
var A ,B ,C ,D : entier ; 
Début
 Lire(A,B) ; B ← 1 ;
 C ←2 ; D ←3 ;
 Lire(C) ;
 C ← A+D ;
 Ecrire(A,B,C,D) ;
Fin

•	Quelles seraient les valeurs finales de A,B,C et D, si les données d'entrée sont 10, 20 et 30 ?
•	Que peut-on conclure ?
b.	Si on exécute la suite d'actions suivantes, quelle serait la valeur affichée à la fin :

Algorithme exemple2 ; 
var	k :entier ; 
Début
 K ←1 ;
 K ←K+K ;
 K←3*K*K;
 Ecrire(K) ;
Fin.

Exercice 17 :
Pour attirer la clientèle, le gérant d'un magasin multi-service applique, pour la photocopie de documents, une tarification proportionnelle au nombre de copies réalisées comme suit :
0 <= nombre de copies <= 50 --> Prix unitaire 4 DA 
51 <= nombre de copies <= 100 --> Prix unitaire 3 DA
101 <= nombre de copies -->	Prix unitaire 2,50 DA
De plus les étudiants bénéficient d'une réduction de 10%. 
Écrire un algorithme qui évalue le montant que doit payer un client donné.

Exercice 18 :
Écrire un algorithme qui permet de résoudre une équation du second degré.
Rem : Pour la racine carrée, on peut supposer l’existence d'une fonction prédéfinie sqrt().


  


