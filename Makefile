APP=test
LIB=libpbxml.a
INSTALL=/usr/local/pbxml

${APP}: test.cpp test.pb.cc ${LIB} 
	g++ -std=c++11 -o $@ $^ -L/usr/local/lib -lprotobuf

test.pb.cc: test.proto
	protoc test.proto --cpp_out=./

${LIB}: ./pbxml.o ./xml_doc.o ./dcpots/lib/*.o
	cd dcpots/lib && g++ -c ../base/*.cpp --std=c++11 -I../base
	g++ -c -std=c++11 ./xml_doc.cpp
	g++ -c -std=c++11 ./pbxml.cpp -I./dcpots/base
	ar r ${LIB} *.o dcpots/lib/*.o

clean:
	rm -f *.o
	rm -f ./dcpots/lib/*.o

install:
	mkdir -p $INSTALL/include
	cp -f ./pbxml.h $INSTALL/include/
	mkdir -p $INSTALL/lib
	cp -f ${LIB} $INSTALL/lib

run:
	./$APP


