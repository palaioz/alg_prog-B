CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SHELL := cmd.exe

# Busca em:
# 1. src/*.c (raiz)
# 2. src/*/*.c (ex: src/aulas/prog.c ou src/listas/main.c)
# 3. src/*/*/*.c (ex: src/listas/lista-01/exercicio.c)
SOURCES := $(wildcard $(SRC_DIR)/*.c) \
           $(wildcard $(SRC_DIR)/*/*.c) \
           $(wildcard $(SRC_DIR)/*/*/*.c)

# Caso precise se certificar de que encontrou os SOURCES
# $(info Arquivos encontrados: $(SOURCES))
OBJECTS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))
BINARIES := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SOURCES))

.PRECIOUS: $(OBJECTS)

ifdef file
  FILE_BASE := $(patsubst %.c,%,$(file))
  TARGET := $(BIN_DIR)/$(FILE_BASE)
else ifdef dir
  DIR_SOURCES := $(wildcard $(SRC_DIR)/$(dir)/*.c)
  TARGET := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(DIR_SOURCES))
else
  TARGET := $(BINARIES)
endif

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@if not exist "$(subst /,\,$(dir $@))" mkdir "$(subst /,\,$(dir $@))"
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR)/%: $(OBJ_DIR)/%.o
	@if not exist "$(subst /,\,$(dir $@))" mkdir "$(subst /,\,$(dir $@))"
	$(CC) $< -o $@

run: $(TARGET)
ifdef file
	@echo Running $(TARGET)...
	@.\$(subst /,\,$(TARGET))
else
	@echo Use "make file=nome.c run"
endif

# Compactar um diretório específico
# Altere a linha do zip para:
# Compactar um diretório específico
# Compactar um diretório específico com o nome da pasta
zip:
ifdef dir
	@echo Preparando compactacao de: $(SRC_DIR)/$(dir)...
	@powershell -Command "\
		$$sourcePath = '$(SRC_DIR)/$(dir)'.Replace('/', '\'); \
		$$folderName = Split-Path -Leaf $$sourcePath; \
		$$destFile = \"$$folderName.zip\"; \
		if (Test-Path \"$$sourcePath\*.c\") { \
			Compress-Archive -Path \"$$sourcePath\*.c\" -DestinationPath \"$$destFile\" -Force; \
			Write-Host \"Arquivo $$destFile criado com sucesso!\" -ForegroundColor Green; \
		} else { \
			Write-Host \"Erro: Nenhum arquivo .c encontrado em $$sourcePath\" -ForegroundColor Red; \
		}"
else
	@echo Erro: Use 'make dir=aulas/Aula08-loops_exec zip'
endif

clean:
	@if exist $(OBJ_DIR) rd /s /q $(OBJ_DIR)
	@if exist $(BIN_DIR) rd /s /q $(BIN_DIR)

# Mostrar toda a estrutura de diretorios, pastas e arquivos
tree:
	@echo Estrutura de diretorios do projeto:
	@tree /f /a