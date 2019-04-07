#include "textprinter.h"
void TextPrinter::print(std::ostream &out, Invoice invoice){
    for ( auto item : invoice.getItems()) {
        out << item.getQuantity()<< " x " << item.getProduct().getName() << " (" << item.getProduct().getPrice()  << ")" << std::endl;

    }
   
}