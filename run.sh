cd object_files
g++ -c ./../cars/Car.cpp ./../cars/Honda.cpp ./../cars/Jaguar.cpp ./../cars/Kia.cpp 
g++ -c ./../carriges/Carrige.cpp ./../carriges/Basic.cpp ./../carriges/Premium.cpp
g++ -c ./../Vehicle.cpp ./../main.cpp 
cd ..
g++ ./object_files/Vehicle.o ./object_files/main.o   \
./object_files/Car.o ./object_files/Honda.o ./object_files/Jaguar.o ./object_files/Kia.o \
./object_files/Carrige.o ./object_files/Basic.o ./object_files/Premium.o \
-o main
