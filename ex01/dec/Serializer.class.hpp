#ifndef SERIALIZER_CLASS_H
# define SERIALIZER_CLASS_H

#include "Data.class.hpp"
#include <stdint.h>

class Serializer {

    public:
        ~Serializer ( void ){};
        virtual Serializer & operator = ( Serializer const & other ) = 0;

        static uintptr_t serialize( Data *ptr );
        static Data *deserialize( uintptr_t raw );

    private:

        Serializer( void ){};
        Serializer( Serializer const & other ){(void) other;};

};

# endif