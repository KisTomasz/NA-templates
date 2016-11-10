#pragma once
#include <vector>
#include <algorithm>
// define vector_erase here
template<typename ElementType>
void vector_erase(ElementType &vec, const typename ElementType::value_type &value){

		
	vec.erase( std::remove(vec.begin(), vec.end(), value), vec.end() );
	/*for(auto iterator = vec.begin(); iterator < vec.end(); iterator++){
		if(  *(iterator) == value ){

			vec.erase(iterator);
			iterator = vec.begin();
		}
	}*/


}
