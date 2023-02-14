all:	derle bagla calistir
derle:
	g++ -c -I "./include" ./src/AgacDugum.cpp -o ./lib/AgacDugum.o
	g++ -c -I "./include" ./src/ikiLiAramaAgaci.cpp -o ./lib/ikiLiAramaAgaci.o
	g++ -c -I "./include" ./src/Kuyruk.cpp -o ./lib/Kuyruk.o
	g++ -c -I "./include" ./src/DugumKuyruk.cpp -o ./lib/DugumKuyruk.o
	g++ -c -I "./include" ./src/Radix.cpp -o ./lib/Radix.o
	g++ -c -I "./include" ./src/Hucre.cpp -o ./lib/Hucre.o
	g++ -c -I "./include" ./src/DugumHucre.cpp -o ./lib/DugumHucre.o	
	g++ -c -I "./include" ./src/DugumDoku.cpp -o ./lib/DugumDoku.o
	g++ -c -I "./include" ./src/DugumSistem.cpp -o ./lib/DugumSistem.o
	g++ -c -I "./include" ./src/DugumOrganizma.cpp -o ./lib/DugumOrganizma.o
	g++ -c -I "./include" ./src/Organ.cpp -o ./lib/Organ.o
	g++ -c -I "./include" ./src/Doku.cpp -o ./lib/Doku.o
	g++ -c -I "./include" ./src/Sistem.cpp -o ./lib/Sistem.o
	g++ -c -I "./include" ./src/Organizma.cpp -o ./lib/Organizma.o
	g++ -c -I "./include" ./src/Kontrol.cpp -o ./lib/Kontrol.o
	g++ -c -I "./include" ./src/DinamikDizi.cpp -o ./lib/DinamikDizi.o
	
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
bagla:
	g++ ./lib/DugumKuyruk.o ./lib/DugumDoku.o ./lib/DugumSistem.o ./lib/DugumOrganizma.o ./lib/DinamikDizi.o ./lib/Kontrol.o ./lib/Organizma.o ./lib/Sistem.o ./lib/Hucre.o ./lib/Doku.o ./lib/Organ.o ./lib/Radix.o ./lib/AgacDugum.o ./lib/ikiLiAramaAgaci.o ./lib/Kuyruk.o ./lib/DugumHucre.o ./lib/main.o -o ./bin/program
calistir:
	./bin/program