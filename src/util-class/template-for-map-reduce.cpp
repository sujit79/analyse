#include <iostream>
using namespace std;

template<class M, class R, class P, class T>  
class TemplateForMapReduce  
{  
	T result;
	M mapper;
	R reducer;

	public: string get_result(){
		return result;
	}
   
	public: void set_map_reduce(M mapper, R reducer){
		this->mapper = mapper;
		this->reducer = reducer;
	}

	public: void operate(P input){
		result = reducer.operate(mapper.operate(input));
	}

	public: void operate(){
		result = reducer.operate(mapper.operate());
	}

};