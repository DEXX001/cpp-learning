# 1. Le compilateur qu'on utilise
CXX = g++

# 2. Les options de compilation (Wall = Warning All, pour voir les erreurs)
CXXFLAGS = -Wall -std=c++17

# 3. Le nom de ton exécutable final
TARGET = dxpack

# 4. Tes fichiers sources (.cpp)
SRCS = main.cpp AuthSystem.cpp logger.cpp

# --- RECETTES ---

# La règle par défaut (ce qui se lance quand tu tapes 'make')
all: $(TARGET)

# Comment fabriquer l'exécutable
$(TARGET):
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Une commande pour nettoyer le projet (supprimer l'exécutable)
clean:
	rm -f $(TARGET)