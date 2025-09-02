#include <numeric>
#include <memory>
#include <vector>
#include "CppBook.h"
#include "ConferenceTicket.h"
#include "Item.h"

int main() {
    std::vector<std::unique_ptr<Item>> items{};

    items.emplace_back(std::make_unique<CppBook>("Effective CPP", "Author1", Money(20.0))); // Added author and converted int to Money
    items.emplace_back(std::make_unique<CppBook>("Modern CPP", "Author2", Money(30.0)));
    items.emplace_back(std::make_unique<CppBook>("Professional CPP", "Author3", Money(40.0)));
    items.emplace_back(std::make_unique<ConferenceTicket>("CPP metting", Money(70.0)));
    items.emplace_back(std::make_unique<ConferenceTicket>("CPPcon", Money(60.0)));

    Money const total_price = std::accumulate(begin(items), end(items), Money{},
                                             [](Money accu, auto const& item) { return accu + item->price(); });

    std::cout << "Total price " << total_price.GetAmount() << std::endl;

    return 0;
}


