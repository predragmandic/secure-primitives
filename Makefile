# secure-primitives
#

if [ -z "$(PREFIX)" ]; then PREFIX=/usr; fi

LIB_NAME=secure-primitives
ARNAME=lib$(LIB_NAME).a

CC=g++
CFLAGS=-fPIC -Wall
LDFLAGS=-D_LINUX

SRC=./src
INC=-I$(SRC) -I$(PREFIX)/include 

OUT_DIR=./build
OUT_BIN_DIR=$(OUT_DIR)/bin
OUT_OBJ_DIR=$(OUT_DIR)/obj
OUT_LIB_DIR=$(OUT_DIR)/lib
OUT_INCLUDE_DIR=$(OUT_DIR)/include

OBJS=$(patsubst $(SRC)/%.cpp,%.o,$(wildcard $(SRC)/*.cpp))
OBJS+=$(patsubst $(SRC)/%.hpp,%.o,$(wildcard $(SRC)/*.cpp))
OBJS_PATHS=$(addprefix $(OUT_OBJ_DIR)/,$(OBJS))


#all:prepare copy_headers build test
all:prepare copy_headers test


copy_headers:
	cp $(SRC)/*.h   $(OUT_INCLUDE_DIR)/
	cp $(SRC)/*.hpp $(OUT_INCLUDE_DIR)/

build: $(OBJS) archive
	
archive:
#%.o: $(SRC)/%.cpp
#	$(CC) $(INC) $(LDFLAGS) $(CFLAGS) -c -o $(OUT_OBJ_DIR)/$@ $<
#	ar rcs $(OUT_LIB_DIR)/$(ARNAME) $(OBJ_PATHS)

test:
	$(CC) $(INC) $(LDFLAGS) $(CFLAGS) -o $(OUT_BIN_DIR)/test $(SRC)/test.cpp
	$(OUT_BIN_DIR)/test

prepare:
	mkdir -p $(OUT_INCLUDE_DIR)
	mkdir -p $(OUT_LIB_DIR)
	mkdir -p $(OUT_BIN_DIR)
	mkdir -p $(OUT_OBJ_DIR)

install:
	#mkdir -p $(PREFIX)
	#cp -R $(OUT_INCLUDE_DIR) $(PREFIX)
	#cp -R $(OUT_LIB_DIR) $(PREFIX)
	#cp -R $(OUT_BIN_DIR) $(PREFIX)

clean:
	rm -f $(SRC)/*.o
	rm -rf $(OUT_DIR)
	rm -f build.log



