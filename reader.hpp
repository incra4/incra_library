#ifndef INCRA_READER
#define INCRA_READER
#include <iostream>
using namespace std;
char *p1,*p2,buf[100000];
#define gc() (p1 == p2 && (p2 = (p1 = buf) + fread (buf,1,100000,stdin),p1 == p2) ? EOF : *p1++)
struct reader_type {
	bool flag;
	reader_type () {flag = false;}
	char nc () {
		if (flag) return EOF;
		return gc ();
	}
	void reset () {flag = false;}
	bool operator () (reader_type& in) {
		return !in.flag;
	}
}read;
reader_type& operator >> (reader_type& in,int &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,unsigned int &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,long &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,unsigned long &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,long long &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,unsigned long long &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,__int128 &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type& in,unsigned __int128 &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = (x << 1) + (x << 3) + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	return in;
}
reader_type& operator >> (reader_type &in,double &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = x * 10 + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	if (ch == '.') {
		ch = in.nc ();if (ch == EOF) return x = 0,in;
		f = 1;
		double t = 1,p = 0;
		while (ch < '0' || ch > '9') {
			if (ch == '-') f = -1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;
		}
		while ('0' <= ch && ch <= '9') {
			p = p * 10 + ch - 48;
			t *= 0.1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;
		}
		x += p * t;
	}
	if (ch == 'E' || ch == 'e') {
		int p;
		in >> p;
		double b = 10;
		while (p) {
			if (p & 1) x *= b;
			p >>= 1;
			b *= b;
		}
	}
	return in;
}
reader_type& operator >> (reader_type &in,long double &x) {
	if (in.flag) return x = 0,in;
	char ch = in.nc ();if (ch == EOF) return x = 0,in;
	short f = 1;
	x = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	while ('0' <= ch && ch <= '9') {
		x = x * 10 + ch - 48;
		ch = in.nc ();if (ch == EOF) return x = 0,in;
	}
	x *= f;
	if (ch == '.') {
		ch = in.nc ();if (ch == EOF) return x = 0,in;
		f = 1;
		long double t = 1,p = 0;
		while (ch < '0' || ch > '9') {
			if (ch == '-') f = -1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;
		}
		while ('0' <= ch && ch <= '9') {
			p = p * 10 + ch - 48;
			t *= 0.1;
			ch = in.nc ();if (ch == EOF) return x = 0,in;
		}
		x += p * t;
	}
	if (ch == 'E' || ch == 'e') {
		int p;
		in >> p;
		long double b = 10;
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
