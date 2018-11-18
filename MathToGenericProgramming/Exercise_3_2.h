#pragma once

// Declaration

template <typename I, typename N>
void mark_sieve(I first, I last, N factor);

template <typename I, typename N>
void sift(I first, N n);

template <typename N>
int get_value_by_index(N v);

template <typename N>
int get_index_by_value(N i);


// Implementation

template <typename I, typename N>
void sift(I first, N n) {

	I last = first + n;
	std::fill(first, last, true);

	N i(0);
	N index_square(3);
	N factor(3);

	while (index_square < n) {

		if (first[i]) {
			mark_sieve(first + index_square, last, factor);
		}

		++i;
		index_square += factor;
		factor += N(2);
		index_square += factor;

	}

};


template <typename I, typename N>
void mark_sieve(I first, I last, N factor) {

	*first = false;

	while (last - first > factor) {
		first = first + factor;
		*first = false;
	}
}


template <typename N>
int get_value_by_index(N v) {
	return v + v + 3;
}


template <typename N>
int get_index_by_value(N i) {
	return (i - 3) / 2;
}
