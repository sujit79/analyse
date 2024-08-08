#ifndef __PARAMS__IN_MAP_REDUCE__
#define __PARAMS__IN_MAP_REDUCE__

template<class P, class T>  
class Parameters{
    P param_object;
    T param_tuples[];

    public: void set_param_object(P param_object){
        this->param_object = param_object;
    }    

    public: void set_param_tuple(T param_tuples []){
        this->param_tuples = param_tuples;
    }
};

#endif
