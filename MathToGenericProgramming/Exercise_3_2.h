#pragma once

#include <iterator>

template <typename I, typename N>
void sift(I first, N n);

template <typename I, typename N>
void mark_sieve(I first, I last, N factor);