#include <iostream>
#include <string>

class Etudiant {
private:
    std::string nom;
    int age;
    double moyenne;
    int nbNotes;

public:
    Etudiant(std::string n, int a, double m) : nom(n), age(a), moyenne(m), nbNotes(1) {}

    void ajouterNote(double note) {
        moyenne = (moyenne * nbNotes + note) / (nbNotes + 1);
        nbNotes++;
    }

    bool estMajeur() const {
        return age >= 18;
    }

    void afficher() const {
        std::cout << "Nom : " << nom
                  << " | Age : " << age << " ans"
                  << " | Moyenne : " << moyenne
                  << " | Majeur : " << (estMajeur() ? "oui" : "non")
                  << std::endl;
    }

    std::string getNom() const { return nom; }
    double getMoyenne() const { return moyenne; }
};

int main() {
    const int N = 5;
    Etudiant *etudiants[N] = {};

    for (int i = 0; i < N; i++) {
        std::string nom;
        int age;
        double moyenne;

        std::cout << "\n--- Etudiant " << i + 1 << " ---" << std::endl;
        std::cout << "Nom : ";
        std::cin >> nom;
        std::cout << "Age : ";
        std::cin >> age;
        std::cout << "Moyenne : ";
        std::cin >> moyenne;

        etudiants[i] = new Etudiant(nom, age, moyenne);
    }

    std::cout << "\n=== Liste des etudiants ===" << std::endl;
    for (int i = 0; i < N; i++) {
        etudiants[i]->afficher();
    }

    double somme = 0;
    for (int i = 0; i < N; i++) {
        somme += etudiants[i]->getMoyenne();
    }
    std::cout << "\nMoyenne de la promotion : " << somme / N << std::endl;

    int meilleurIndex = 0;
    for (int i = 1; i < N; i++) {
        if (etudiants[i]->getMoyenne() > etudiants[meilleurIndex]->getMoyenne()) {
            meilleurIndex = i;
        }
    }
    std::cout << "Meilleur etudiant : " << etudiants[meilleurIndex]->getNom()
              << " avec " << etudiants[meilleurIndex]->getMoyenne() << std::endl;

    for (int i = 0; i < N; i++) {
        delete etudiants[i];
        etudiants[i] = nullptr;
    }

    return 0;
}