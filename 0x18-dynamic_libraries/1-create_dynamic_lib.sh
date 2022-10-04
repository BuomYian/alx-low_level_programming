 gcc -fPIC -c *.c 
 gcc -shared -o liball.so *.c
 gcc -o liball.so
 ldconfig
