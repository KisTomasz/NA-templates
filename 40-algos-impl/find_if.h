#pragma once


/*
Returns the first element in the range [first, last) that satisfies specific criteria:
1) find searches for an element equal to value
3) find_if searches for an element for which predicate p returns true
5) find_if_not searches for an element for which predicate q returns false
*/

namespace training
{
template<typename InputIt, typename UnaryPredicate>
InputIt find_if(InputIt begin, InputIt end, UnaryPredicate pred){
	auto iterator = begin;
	for(iterator = begin; iterator < end; iterator++){
		if( pred(*iterator) ){
			
			return iterator;
		}


	}
	return end;
	}
}

