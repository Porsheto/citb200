#include "textprinter.h"
void TextPrinter::print(std::ostream &out, Invoice invoice){
    for ( auto product : invoice.getProducts()) {
        out << product.getName() << " (" << product.getPrice() << ")" << std::endl;

    }


    
}