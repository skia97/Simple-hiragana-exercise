#compilazione:


compila: es.x
#--------------------------------------

esegui: compila
	./es.x
#--------------------------------------
#
#

es.x: funz.o es.o
	g++ es.o funz.o -o es.x
#

es.o: es_hiragana_ordinecas.C funz.h 
	g++ -c es_hiragana_ordinecas.C -o es.o
#
#
funz.o: funz.h funz.C 
	g++ -c funz.C 

