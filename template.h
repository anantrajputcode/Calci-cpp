#ifndef TEMPLATE_H
#define TEMPLATE_H
template <typename T> T add (T a, T b);
template <typename T> T sub (T a, T b);
template <typename T> T mult (T a, T b);
template <typename T> T div (T a, T b);
template <typename T> T add (T a, T b){
    return a + b;
}
template <typename T> T sub (T a, T b){
    return a - b;
}
template <typename T> T mult (T a, T b){
    return a * b;
}
template <typename T> T div (T a, T b){
    return a / b;
}


#endif