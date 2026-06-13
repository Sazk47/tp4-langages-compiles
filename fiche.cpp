#include <iostream>
#include <string>

int main() {
    std::string prenom;
    int age;
    float moyenne;

    std::cout << "Quel est ton prénom ? ";
    std::cin >> prenom;

    std::cout << "Quel est ton âge ? ";
    std::cin >> age;

    std::cout << "Quelle est ta note moyenne ? ";
    std::cin >> moyenne;

    std::cout << "=== Fiche interactive ===" << std::endl;
    std::cout << "Prénom : " << prenom << std::endl;
    std::cout << "Âge : " << age << " ans" << std::endl;
    std::cout << "Moyenne : " << moyenne << std::endl;

    return 0;
}