#pragma once
void ReferenceSwap(int& a, int& b);
void PointerSwap(int* a, int* b);
void StlSwap(int& a, int& b);
void BitwiseSwap(int& a, int& b);
template <typename T> void TemplateSwap(T& a, T& b);

void PrintReferenceSwap(int& a, int& b);
void PrintPointerSwap(int& a, int& b);
void PrintStlSwap(int& a, int& b);
void PrintBitwiseSwap(int& a, int& b);
template <typename T> void PrintTemplateSwap(T& a, T& b);

#include "TemplateSwap.tpp"