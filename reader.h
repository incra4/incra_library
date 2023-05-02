#ifndef INCRA_READER
#define ICNRA_READER
#include <iostream>
using namespace std;
typedef unsigned int UI;
typedef long L;
typedef unsigned long UL;
typedef long long LL;
typedef unsigned long long ULL;
typedef __int128 LL128;
typedef unsigned __int128 ULL128;
typedef long double LD;
struct reader_type {
	bool flag;
	reader_type () {flag = false;}
	char nc () {
		if (flag) return EOF;
		char ch = getchar ();
		return ch == EOF ? flag = true,EOF : ch;
	}
}reader;
reader_type& operator >> (reader_type& in,int &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,UI &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,L &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,UL &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,LL &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,ULL &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,LL128 &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,ULL128 &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type &in,double &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = x * 10 + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	if (ch == '.') {
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
		f = 1;
		double t = 1,p = 0;
		while (ch < '0' || ch > '9') {
			if (ch == '-') f = -1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;;
		}
		while ('0' <= ch && ch <= '9') {
			p = p * 10 + ch - 48;
			t *= 0.1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;;
		}
		x += p * t;
	}
	if (ch == 'E' || ch == 'e') {
		int p;
		reader >> p;
		double b = 10;
		while (p) {
			if (p & 1) x *= b;
			p >>= 1;
			b *= b;
		}
	}
	return in;
}
reader_type& operator >> (reader_type &in,LD &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	while ('0' <= ch && ch <= '9') {
		x = x * 10 + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
	}
	x *= f;
	if (ch == '.') {
		ch = in.nc ();if (ch == EOF) return x = 0,in;;
		f = 1;
		LD t = 1,p = 0;
		while (ch < '0' || ch > '9') {
			if (ch == '-') f = -1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;;
		}
		while ('0' <= ch && ch <= '9') {
			p = p * 10 + ch - 48;
			t *= 0.1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;;
		}
		x += p * t;
	}
	if (ch == 'E' || ch == 'e') {
		int p;
		reader >> p;
		LD b = 10;
		while (p) {
			if (p & 1) x *= b;
			p >>= 1;
			b *= b;
		}
	}
	return in;
}
reader_type& operator >> (reader_type& in,char &x) {
	if (in.flag) return x = 0,in;
	x = in.nc ();
	while (isspace (x)) x = in.nc ();
	return in;
}
template <typename T1,typename T2> reader_type& operator >> (reader_type& in,pair <T1,T2> &x) {
	in >> x.first >> x.second;
	return in;
}
#endif //INCRA_READER
