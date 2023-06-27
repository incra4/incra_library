#include <iostream>
using namespace std;
struct printer_type {}print,debug;
printer_type& operator << (printer_type &out,char x) {
	putchar (x);
	return out;
}
printer_type& operator << (printer_type &out,int x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
printer_type& operator << (printer_type &out,unsigned int x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
printer_type& operator << (printer_type &out,long x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
printer_type& operator << (printer_type &out,unsigned long x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
printer_type& operator << (printer_type &out,long long x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
printer_type& operator << (printer_type &out,unsigned long long x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
printer_type& operator << (printer_type &out,__int128 x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
printer_type& operator << (printer_type &out,unsigned __int128 x) {
	if (x < 0) x = -x,out << '-';
	if (x >= 10) out << x / 10;
	putchar (x % 10 + '0');
	return out;
}
