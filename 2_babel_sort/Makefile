TARGET = BabelSort
CC = gcc

#здесь объектные файлы и исходники будут помещаться в свои директории

PREF_SRC = ./src/
PREF_OBJ = ./obj/

SRC = $(wildcard $(PREF_SRC)*.c)
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
	$(CC) -c $< -o $@

#удаление объектных файлов, если нужно будет пересобрать проект
clean : 
	rm $(TARGET) $(PREF_OBJ)*.o


#понятная, но неоптимизированная версия 

#TARGET = BabelSort
#CC = gcc

# $(TARGET) : main.o my_lib.o
# 	$(CC) main.o my_lib.o -o $(TARGET)

# main.o : main.c
# 	$(CC) -c main.c -o main.o

# my_lib.o : my_lib.c
# 	$(CC) -c my_lib.c -o my_lib.o

# clean : 
# 	rm $(TARGET) *.o