g++ -c lib/Activation.cpp -o lib/Activation.o
g++ -fPIC -c lib/Activation.cpp -o lib/Activation.o
g++ -o lib/libActivation.so -shared lib/Activation.o
cp lib/libActivation.so ../../biblioteque/dinamique_lib/
g++ main.cpp -L/home/misa2026/CPP/Examen/Exercice_2/biblioteque/dinamique_lib/ -lActivation -o main.exe


