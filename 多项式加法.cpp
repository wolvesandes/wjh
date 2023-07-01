#include <iostream>
#include <vector>

struct Term {
    int power;
    int coefficient;
};

std::vector<Term> readPolynomial() {
    std::vector<Term> polynomial;

    int power, coefficient;
    while (std::cin >> power >> coefficient) {
        polynomial.push_back({power, coefficient});

        if (power == 0) {
            break;
        }
    }

    return polynomial;
}

void printPolynomial(const std::vector<Term>& polynomial) {
    bool isFirstTerm = true;

    for (int i = polynomial.size() - 1; i >= 0; i--) {
        const Term& term = polynomial[i];

        if (term.coefficient != 0) {
            if (!isFirstTerm && term.coefficient > 0) {
                std::cout << "+";
            }

            if (term.power == 0 || term.coefficient != 1) {
                std::cout << term.coefficient;
            }

            if (term.power > 0) {
                std::cout << "x";

                if (term.power > 1) {
                    std::cout << term.power;
                }
            }

            isFirstTerm = false;
        }
    }

    std::cout << std::endl;
}

std::vector<Term> addPolynomials(const std::vector<Term>& polynomial1, const std::vector<Term>& polynomial2) {
    std::vector<Term> result;
    int size1 = polynomial1.size();
    int size2 = polynomial2.size();
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        const Term& term1 = polynomial1[i];
        const Term& term2 = polynomial2[j];
        
        if (term1.power > term2.power) {
            result.push_back(term1);
            i++;
        } else if (term1.power < term2.power) {
            result.push_back(term2);
            j++;
        } else {
            int sum = term1.coefficient + term2.coefficient;
            if (sum != 0) {
                result.push_back({term1.power, sum});
            }
            i++;
            j++;
        }
    }

    while (i < size1) {
        result.push_back(polynomial1[i]);
        i++;
    }

    while (j < size2) {
        result.push_back(polynomial2[j]);
        j++;
    }

    return result;
}

int main() {
    std::vector<Term> polynomial1 = readPolynomial();
    std::vector<Term> polynomial2 = readPolynomial();

    std::vector<Term> sum = addPolynomials(polynomial1, polynomial2);

    printPolynomial(sum);

    return 0;
}
