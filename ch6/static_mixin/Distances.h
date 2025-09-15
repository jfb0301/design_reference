#include "StrongType.h"

template< typename T >
using Meter = StrongType<T, struct MeterTag>; 

template< typename T >
using kilometer = StrongType<T, struct kilometerTag>; 

