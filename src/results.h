#ifdef __RESULTS__IN_MAP_REDUCE__
#define __RESULTS__IN_MAP_REDUCE__

template<class P, class T>  
class Results{
    P results_object;
    T results_tuples [];

    public: void set_param_object(P results_object){
        this->results_object = results_object;
    }    

    public: void set_param_tuple(T results_tuples []){
        this->results_tuples = results_tuples;
    }
};

#endif