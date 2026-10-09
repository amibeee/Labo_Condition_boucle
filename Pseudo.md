---
### Pseudo-code

~~~
REPETER
   REPETER
      saisir limite
   TANT QUE limite < 2 OU limite > 1000

   compteur <- 0
   POUR i de 2 A limite
      premier <- vrai
      POUR j de 2 , j * j <= i alors
         SI i est divisible par j alors
            premier <- faux
            sortir
      SI premier alors
         afficher i sur la largeur defini
         compteur <- compteur + 1
         SI compteur est un multiple de n_col alors
            retour a la ligne

   REPETER
      saisir reponse
   TANT QUE reponse different de 'O' ET de 'N'
TANT QUE reponse = 'O'
afficher fin d'exec
~~~
