#ifndef MONEY_H
#define MONEY_H
#include <iostream>


class Money {
    public:
        explicit Money(double amount = 0.0) : amount_(amount) {}
        
        // Getter
        double GetAmount() const {return amount_; }

        // Operator overloads
        Money operator*(double factor) const {
            return Money(amount_ * factor);
        }

        Money operator+(const Money& other) const {
            return Money(amount_ + other.amount_ );
        }

        bool operator==(const Money& other) const {
            return amount_ == other.amount_;
        }

    private:
        double amount_;
}; 

std::ostream& operator<<(std::ostream& os, const Money& money) {
    os << money.GetAmount();
    return os;
}

#endif