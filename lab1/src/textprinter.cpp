#include "textprinter.h"
#include <iomanip> 

void TextPrinter::print(std::ostream &out, const Invoice &invoice){
    out << std::fixed << std::setprecision (2);

    for ( auto item : invoice.getItems()) {
    out << item.getQuantity() << " x "
        << item.getProduct().getName() 
        << " (" << item.getProduct().getPrice() << ")"
        << " = "  << invoice.computeItemTotal(item)
        << std::endl;

    }

    out << "Subtotal: " << invoice.computeSubtotal() << std::endl;
    out << "Tax:" << invoice.computeTax() << std::endl;   
}