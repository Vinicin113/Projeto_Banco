# Variáveis
CXX = g++
CXXFLAGS = -Wall -std=c++11 -Isrc
SRC_DIR = src
BUILD_DIR = build

# Fontes e objetos
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Nome do executável (no build/)
TARGET = $(BUILD_DIR)/banco

# Regra para construir o executável
$(TARGET): $(OBJECTS) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Regra para compilar arquivos .cpp em .o (objeto)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Criar diretório build, se não existir
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Limpar arquivos compilados
clean:
	rm -f $(BUILD_DIR)/*.o $(TARGET)
