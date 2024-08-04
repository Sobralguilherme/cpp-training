// controller.cpp
#include <iostream>
#include <vector>
#include <string>

// Modelo (Model)
class ItemModel {
public:
    void addItem(const std::string& item) {
        items.push_back(item);
    }

    const std::vector<std::string>& getItems() const {
        return items;
    }

private:
    std::vector<std::string> items;
};

// Controlador (Controller)
class ItemController {
public:
    void addItem(const std::string& item) {
        model.addItem(item);
    }

    void listItems() const {
        const std::vector<std::string>& items = model.getItems();
        if (items.empty()) {
            std::cout << "Nenhum item na lista." << std::endl;
            return;
        }

        std::cout << "Itens na lista:" << std::endl;
        for (const auto& item : items) {
            std::cout << "- " << item << std::endl;
        }
    }

private:
    ItemModel model;
};

// Função principal (Main)
int main() {
    ItemController controller;

    controller.addItem("Item 1");
    controller.addItem("Item 2");

    std::cout << "Lista de itens após adicionar:" << std::endl;
    controller.listItems();

    return 0;
}
