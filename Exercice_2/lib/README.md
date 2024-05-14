# Projet d'Activation

Ce projet est une implémentation simple d'un système d'activation utilisant des fichiers pour stocker l'état d'activation et le nombre de tentatives restantes. Il utilise une clé de test pour vérifier si un utilisateur est autorisé à accéder à certaines fonctionnalités.

## Structure du Projet

Le projet est composé de plusieurs fichiers principaux :
- `Activation.cpp` : Contient la logique de programmation pour vérifier l'activation, activer l'utilisateur, et gérer le statut et le nombre de tentatives restantes.

- `Activation.hpp` : Fichier d'en-tête contenant la déclaration de la classe `Activation`.

- `main.cpp` : Le fichier principal qui utilise la classe `Activation` pour vérifier l'activation et afficher un message en fonction de l'état d'activation.

## Compilation

Pour compiler le projet, vous devez avoir un environnement de développement C++ configuré sur votre machine. Les commandes de compilation sont les suivantes :

1. Compilez le fichier `Activation.cpp` en objet :
bash g++ -c lib/Activation.cpp -o lib/Activation.o

2. Créez un fichier objet position indépendant :
bash g++ -fPIC -c lib/Activation.cpp -o lib/Activation.o

3. Créez un fichier de bibliothèque partagée :
bash g++ -o lib/libActivation.so -shared lib/Activation.o

4. Copiez le fichier de bibliothèque partagée dans le répertoire approprié :
bash cp lib/libActivation.so../../biblioteque/dinamique_lib/

5. Compilez `main.cpp` en utilisant la bibliothèque partagée :
bash g++ main.cpp -L/home/misa2026/CPP/Examen/Exercice_2/biblioteque/dinamique_lib/ -lActivation -o main.exe


## Exécution

Après avoir compilé le projet, vous pouvez exécuter le programme avec la commande suivante :

bash ./main.exe


Le programme vérifiera l'activation en se basant sur le contenu du fichier `txt.reg`. Si la clé de test correspond à celle définie dans le fichier d'en-tête (`keyTest = "ABCD"`), l'utilisateur sera activé. Sinon, le nombre de tentatives restantes sera décrémenté et le fichier `try.txt` sera mis à jour.

## Notes

-On doit assurer que les fichiers `txt.reg` et `try.txt` existent dans le même répertoire que votre programme. Ces fichiers sont nécessaires pour le fonctionnement correct du système d'activation.
- Le fichier `txt.reg` doit contenir la clé de test pour l'activation. Si ce fichier n'est pas présent ou ne contient pas la clé de test attendue, l'activation échouera.
- Le fichier `try.txt` est utilisé pour stocker le nombre de tentatives restantes. Chaque fois que l'activation échoue, ce nombre est décrémenté.

## Conclusion

Ce projet est un exemple simple de gestion d'activation basé sur des fichiers. Il peut être étendu et adapté selon les besoins spécifiques de votre application.

