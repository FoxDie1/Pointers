#pragma once
#include "Statistics.h"
template<typename T>
T* PushBack(T arr[],T& n, T value);//добавляет значение в конец массива

template<typename T>
T* PushFront(T arr[], T& n, T value);

template<typename T>
T* PopBack(T arr[], T& n);

template<typename T>
T* PopFront(T arr[], T& n);

template<typename T>
T* Insert(T arr[], T& n, const int index, T value);

template<typename T>
T* Erase(T arr[], T& n, const int index);
