
// TODO: Need to update to C++11 proper so that I can store unions of complex types and remove
//       all these function calls.

#ifndef INCLUDED_CORE_MATH
#define INCLUDED_CORE_MATH


#if defined(__cplusplus)
	#define MATH_CPP
#else
	#define MATH_HLSL
	#define clcpp_reflect_part(x)
	#define clcpp_attr(x)
#endif


//
// These are binary-exact approximations of pi/e constants
// http://www.exploringbinary.com/pi-and-e-in-binary/
//
#define MATH_fPI 3.1415927410125732421875f
#define MATH_dPI 3.141592653589793115997963468544185161590576171875
#define MATH_fE 2.71828174591064453125f
#define MATH_dE 2.718281828459045090795598298427648842334747314453125


#ifdef MATH_CPP


#include <clcpp/clcpp.h>
#include <tinycrt/tinycrt.h>


namespace core
{
	template <typename TYPE> class Vector;
	template <typename KEY_TYPE> struct Hash;
	template <typename TYPE> struct EmptyDefaultConstructor;
}


/*$pycgen
	float_types = "float,double"
	signed_types = "float,double,char,short,int"
	vector_types = signed_types + ",uchar,ushort,uint"
*/


// Unsigned shortening of native integers
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;


// A 16-bit floating point number
struct clcpp_attr(reflect) half
{
	u16 x;
};
struct clcpp_attr(reflect) half2
{
	u16 x, y;
};
struct clcpp_attr(reflect) half3
{
	u16 x, y, z;
};
struct clcpp_attr(reflect) half4
{
	u16 x, y, z, w;
};


/*$pycgen
	tuple2 = """
	struct clcpp_attr(reflect) T2
	{
		typedef T type;
		T2() { }
		T2(T v) : x(v), y(v) { }
		T2(T x, T y) : x(x), y(y) { }
		T operator [] (uint index) const { return *((T*)&x + index); }
		T& operator [] (uint index) { return *((T*)&x + index); }
		T x, y;
	};
	"""

	tuple3 = """
	struct clcpp_attr(reflect) T3
	{
		typedef T type;
		typedef T2 type2;
		T3() { }
		T3(T v) : x(v), y(v), z(v) { }
		T3(T x, T y, T z) : x(x), y(y), z(z) { }
		T operator [] (uint index) const { return *((T*)&x + index); }
		T& operator [] (uint index) { return *((T*)&x + index); }
		T x, y, z;
	};
	"""

	tuple4 = """
	struct clcpp_attr(reflect) T4
	{
		typedef T type;
		typedef T2 type2;
		typedef T3 type3;
		T4() { }
		T4(T v) : x(v), y(v), z(v), w(v) { }
		T4(T x, T y, T z, T w) : x(x), y(y), z(z), w(w) { }
		T operator [] (uint index) const { return *((T*)&x + index); }
		T& operator [] (uint index) { return *((T*)&x + index); }
		T x, y, z, w;
	};
	"""

	EmitRepl(tuple2, "T:" + vector_types)
	EmitRepl(tuple3, "T:" + vector_types)
	EmitRepl(tuple4, "T:" + vector_types)
*/
//$pycgen-begin
	struct clcpp_attr(reflect) float2
	{
		typedef float type;
		float2() { }
		float2(float v) : x(v), y(v) { }
		float2(float x, float y) : x(x), y(y) { }
		float operator [] (uint index) const { return *((float*)&x + index); }
		float& operator [] (uint index) { return *((float*)&x + index); }
		float x, y;
	};
	struct clcpp_attr(reflect) double2
	{
		typedef double type;
		double2() { }
		double2(double v) : x(v), y(v) { }
		double2(double x, double y) : x(x), y(y) { }
		double operator [] (uint index) const { return *((double*)&x + index); }
		double& operator [] (uint index) { return *((double*)&x + index); }
		double x, y;
	};
	struct clcpp_attr(reflect) char2
	{
		typedef char type;
		char2() { }
		char2(char v) : x(v), y(v) { }
		char2(char x, char y) : x(x), y(y) { }
		char operator [] (uint index) const { return *((char*)&x + index); }
		char& operator [] (uint index) { return *((char*)&x + index); }
		char x, y;
	};
	struct clcpp_attr(reflect) short2
	{
		typedef short type;
		short2() { }
		short2(short v) : x(v), y(v) { }
		short2(short x, short y) : x(x), y(y) { }
		short operator [] (uint index) const { return *((short*)&x + index); }
		short& operator [] (uint index) { return *((short*)&x + index); }
		short x, y;
	};
	struct clcpp_attr(reflect) int2
	{
		typedef int type;
		int2() { }
		int2(int v) : x(v), y(v) { }
		int2(int x, int y) : x(x), y(y) { }
		int operator [] (uint index) const { return *((int*)&x + index); }
		int& operator [] (uint index) { return *((int*)&x + index); }
		int x, y;
	};
	struct clcpp_attr(reflect) uchar2
	{
		typedef uchar type;
		uchar2() { }
		uchar2(uchar v) : x(v), y(v) { }
		uchar2(uchar x, uchar y) : x(x), y(y) { }
		uchar operator [] (uint index) const { return *((uchar*)&x + index); }
		uchar& operator [] (uint index) { return *((uchar*)&x + index); }
		uchar x, y;
	};
	struct clcpp_attr(reflect) ushort2
	{
		typedef ushort type;
		ushort2() { }
		ushort2(ushort v) : x(v), y(v) { }
		ushort2(ushort x, ushort y) : x(x), y(y) { }
		ushort operator [] (uint index) const { return *((ushort*)&x + index); }
		ushort& operator [] (uint index) { return *((ushort*)&x + index); }
		ushort x, y;
	};
	struct clcpp_attr(reflect) uint2
	{
		typedef uint type;
		uint2() { }
		uint2(uint v) : x(v), y(v) { }
		uint2(uint x, uint y) : x(x), y(y) { }
		uint operator [] (uint index) const { return *((uint*)&x + index); }
		uint& operator [] (uint index) { return *((uint*)&x + index); }
		uint x, y;
	};
	struct clcpp_attr(reflect) float3
	{
		typedef float type;
		typedef float2 type2;
		float3() { }
		float3(float v) : x(v), y(v), z(v) { }
		float3(float x, float y, float z) : x(x), y(y), z(z) { }
		float operator [] (uint index) const { return *((float*)&x + index); }
		float& operator [] (uint index) { return *((float*)&x + index); }
		float x, y, z;
	};
	struct clcpp_attr(reflect) double3
	{
		typedef double type;
		typedef double2 type2;
		double3() { }
		double3(double v) : x(v), y(v), z(v) { }
		double3(double x, double y, double z) : x(x), y(y), z(z) { }
		double operator [] (uint index) const { return *((double*)&x + index); }
		double& operator [] (uint index) { return *((double*)&x + index); }
		double x, y, z;
	};
	struct clcpp_attr(reflect) char3
	{
		typedef char type;
		typedef char2 type2;
		char3() { }
		char3(char v) : x(v), y(v), z(v) { }
		char3(char x, char y, char z) : x(x), y(y), z(z) { }
		char operator [] (uint index) const { return *((char*)&x + index); }
		char& operator [] (uint index) { return *((char*)&x + index); }
		char x, y, z;
	};
	struct clcpp_attr(reflect) short3
	{
		typedef short type;
		typedef short2 type2;
		short3() { }
		short3(short v) : x(v), y(v), z(v) { }
		short3(short x, short y, short z) : x(x), y(y), z(z) { }
		short operator [] (uint index) const { return *((short*)&x + index); }
		short& operator [] (uint index) { return *((short*)&x + index); }
		short x, y, z;
	};
	struct clcpp_attr(reflect) int3
	{
		typedef int type;
		typedef int2 type2;
		int3() { }
		int3(int v) : x(v), y(v), z(v) { }
		int3(int x, int y, int z) : x(x), y(y), z(z) { }
		int operator [] (uint index) const { return *((int*)&x + index); }
		int& operator [] (uint index) { return *((int*)&x + index); }
		int x, y, z;
	};
	struct clcpp_attr(reflect) uchar3
	{
		typedef uchar type;
		typedef uchar2 type2;
		uchar3() { }
		uchar3(uchar v) : x(v), y(v), z(v) { }
		uchar3(uchar x, uchar y, uchar z) : x(x), y(y), z(z) { }
		uchar operator [] (uint index) const { return *((uchar*)&x + index); }
		uchar& operator [] (uint index) { return *((uchar*)&x + index); }
		uchar x, y, z;
	};
	struct clcpp_attr(reflect) ushort3
	{
		typedef ushort type;
		typedef ushort2 type2;
		ushort3() { }
		ushort3(ushort v) : x(v), y(v), z(v) { }
		ushort3(ushort x, ushort y, ushort z) : x(x), y(y), z(z) { }
		ushort operator [] (uint index) const { return *((ushort*)&x + index); }
		ushort& operator [] (uint index) { return *((ushort*)&x + index); }
		ushort x, y, z;
	};
	struct clcpp_attr(reflect) uint3
	{
		typedef uint type;
		typedef uint2 type2;
		uint3() { }
		uint3(uint v) : x(v), y(v), z(v) { }
		uint3(uint x, uint y, uint z) : x(x), y(y), z(z) { }
		uint operator [] (uint index) const { return *((uint*)&x + index); }
		uint& operator [] (uint index) { return *((uint*)&x + index); }
		uint x, y, z;
	};
	struct clcpp_attr(reflect) float4
	{
		typedef float type;
		typedef float2 type2;
		typedef float3 type3;
		float4() { }
		float4(float v) : x(v), y(v), z(v), w(v) { }
		float4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) { }
		float operator [] (uint index) const { return *((float*)&x + index); }
		float& operator [] (uint index) { return *((float*)&x + index); }
		float x, y, z, w;
	};
	struct clcpp_attr(reflect) double4
	{
		typedef double type;
		typedef double2 type2;
		typedef double3 type3;
		double4() { }
		double4(double v) : x(v), y(v), z(v), w(v) { }
		double4(double x, double y, double z, double w) : x(x), y(y), z(z), w(w) { }
		double operator [] (uint index) const { return *((double*)&x + index); }
		double& operator [] (uint index) { return *((double*)&x + index); }
		double x, y, z, w;
	};
	struct clcpp_attr(reflect) char4
	{
		typedef char type;
		typedef char2 type2;
		typedef char3 type3;
		char4() { }
		char4(char v) : x(v), y(v), z(v), w(v) { }
		char4(char x, char y, char z, char w) : x(x), y(y), z(z), w(w) { }
		char operator [] (uint index) const { return *((char*)&x + index); }
		char& operator [] (uint index) { return *((char*)&x + index); }
		char x, y, z, w;
	};
	struct clcpp_attr(reflect) short4
	{
		typedef short type;
		typedef short2 type2;
		typedef short3 type3;
		short4() { }
		short4(short v) : x(v), y(v), z(v), w(v) { }
		short4(short x, short y, short z, short w) : x(x), y(y), z(z), w(w) { }
		short operator [] (uint index) const { return *((short*)&x + index); }
		short& operator [] (uint index) { return *((short*)&x + index); }
		short x, y, z, w;
	};
	struct clcpp_attr(reflect) int4
	{
		typedef int type;
		typedef int2 type2;
		typedef int3 type3;
		int4() { }
		int4(int v) : x(v), y(v), z(v), w(v) { }
		int4(int x, int y, int z, int w) : x(x), y(y), z(z), w(w) { }
		int operator [] (uint index) const { return *((int*)&x + index); }
		int& operator [] (uint index) { return *((int*)&x + index); }
		int x, y, z, w;
	};
	struct clcpp_attr(reflect) uchar4
	{
		typedef uchar type;
		typedef uchar2 type2;
		typedef uchar3 type3;
		uchar4() { }
		uchar4(uchar v) : x(v), y(v), z(v), w(v) { }
		uchar4(uchar x, uchar y, uchar z, uchar w) : x(x), y(y), z(z), w(w) { }
		uchar operator [] (uint index) const { return *((uchar*)&x + index); }
		uchar& operator [] (uint index) { return *((uchar*)&x + index); }
		uchar x, y, z, w;
	};
	struct clcpp_attr(reflect) ushort4
	{
		typedef ushort type;
		typedef ushort2 type2;
		typedef ushort3 type3;
		ushort4() { }
		ushort4(ushort v) : x(v), y(v), z(v), w(v) { }
		ushort4(ushort x, ushort y, ushort z, ushort w) : x(x), y(y), z(z), w(w) { }
		ushort operator [] (uint index) const { return *((ushort*)&x + index); }
		ushort& operator [] (uint index) { return *((ushort*)&x + index); }
		ushort x, y, z, w;
	};
	struct clcpp_attr(reflect) uint4
	{
		typedef uint type;
		typedef uint2 type2;
		typedef uint3 type3;
		uint4() { }
		uint4(uint v) : x(v), y(v), z(v), w(v) { }
		uint4(uint x, uint y, uint z, uint w) : x(x), y(y), z(z), w(w) { }
		uint operator [] (uint index) const { return *((uint*)&x + index); }
		uint& operator [] (uint index) { return *((uint*)&x + index); }
		uint x, y, z, w;
	};
//$pycgen-end


// Experimental swizzling
template <typename TYPE> inline typename TYPE::type2 xy(const TYPE& v)
{
	return typename TYPE::type2(v.x, v.y);
}
template <typename TYPE> inline typename TYPE::type2 xz(const TYPE& v)
{
	return typename TYPE::type2(v.x, v.z);
}
// These alias instead of constructing another variable, allowing modification
template <typename TYPE> inline const typename TYPE::type3& xyz(const TYPE& v)
{
	return (typename TYPE::type3&)v;
}
template <typename TYPE> inline typename TYPE::type3& xyz(TYPE& v)
{
	return (typename TYPE::type3&)v;
}


/*$pycgen
	code = """
	T sign(T v);
	T2 sign(const T2& v);
	T3 sign(const T3& v);
	T4 sign(const T4& v);
	"""
	EmitRepl(code, "T:" + signed_types)
*/
//$pycgen-begin
	float sign(float v);
	float2 sign(const float2& v);
	float3 sign(const float3& v);
	float4 sign(const float4& v);
	double sign(double v);
	double2 sign(const double2& v);
	double3 sign(const double3& v);
	double4 sign(const double4& v);
	char sign(char v);
	char2 sign(const char2& v);
	char3 sign(const char3& v);
	char4 sign(const char4& v);
	short sign(short v);
	short2 sign(const short2& v);
	short3 sign(const short3& v);
	short4 sign(const short4& v);
	int sign(int v);
	int2 sign(const int2& v);
	int3 sign(const int3& v);
	int4 sign(const int4& v);
//$pycgen-end



/*$pycgen
	code = """
	T dot(const T2& a, const T2& b);
	T dot(const T3& a, const T3& b);
	T dot(const T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float dot(const float2& a, const float2& b);
	float dot(const float3& a, const float3& b);
	float dot(const float4& a, const float4& b);
	double dot(const double2& a, const double2& b);
	double dot(const double3& a, const double3& b);
	double dot(const double4& a, const double4& b);
	char dot(const char2& a, const char2& b);
	char dot(const char3& a, const char3& b);
	char dot(const char4& a, const char4& b);
	short dot(const short2& a, const short2& b);
	short dot(const short3& a, const short3& b);
	short dot(const short4& a, const short4& b);
	int dot(const int2& a, const int2& b);
	int dot(const int3& a, const int3& b);
	int dot(const int4& a, const int4& b);
	uchar dot(const uchar2& a, const uchar2& b);
	uchar dot(const uchar3& a, const uchar3& b);
	uchar dot(const uchar4& a, const uchar4& b);
	ushort dot(const ushort2& a, const ushort2& b);
	ushort dot(const ushort3& a, const ushort3& b);
	ushort dot(const ushort4& a, const ushort4& b);
	uint dot(const uint2& a, const uint2& b);
	uint dot(const uint3& a, const uint3& b);
	uint dot(const uint4& a, const uint4& b);
//$pycgen-end


float3 cross(const float3& a, const float3& b);
double3 cross(const double3& a, const double3& b);


/*$pycgen
	code = """
	T length(const T2& v);
	T length(const T3& v);
	T length(const T4& v);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float length(const float2& v);
	float length(const float3& v);
	float length(const float4& v);
	double length(const double2& v);
	double length(const double3& v);
	double length(const double4& v);
	char length(const char2& v);
	char length(const char3& v);
	char length(const char4& v);
	short length(const short2& v);
	short length(const short3& v);
	short length(const short4& v);
	int length(const int2& v);
	int length(const int3& v);
	int length(const int4& v);
	uchar length(const uchar2& v);
	uchar length(const uchar3& v);
	uchar length(const uchar4& v);
	ushort length(const ushort2& v);
	ushort length(const ushort3& v);
	ushort length(const ushort4& v);
	uint length(const uint2& v);
	uint length(const uint3& v);
	uint length(const uint4& v);
//$pycgen-end


/*$pycgen
	code = """
	T lengthsqr(const T2& v);
	T lengthsqr(const T3& v);
	T lengthsqr(const T4& v);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float lengthsqr(const float2& v);
	float lengthsqr(const float3& v);
	float lengthsqr(const float4& v);
	double lengthsqr(const double2& v);
	double lengthsqr(const double3& v);
	double lengthsqr(const double4& v);
	char lengthsqr(const char2& v);
	char lengthsqr(const char3& v);
	char lengthsqr(const char4& v);
	short lengthsqr(const short2& v);
	short lengthsqr(const short3& v);
	short lengthsqr(const short4& v);
	int lengthsqr(const int2& v);
	int lengthsqr(const int3& v);
	int lengthsqr(const int4& v);
	uchar lengthsqr(const uchar2& v);
	uchar lengthsqr(const uchar3& v);
	uchar lengthsqr(const uchar4& v);
	ushort lengthsqr(const ushort2& v);
	ushort lengthsqr(const ushort3& v);
	ushort lengthsqr(const ushort4& v);
	uint lengthsqr(const uint2& v);
	uint lengthsqr(const uint3& v);
	uint lengthsqr(const uint4& v);
//$pycgen-end


/*$pycgen
	code = """
	T2 normalise(const T2& v);
	T2 normalize(const T2& v);
	T3 normalise(const T3& v);
	T3 normalize(const T3& v);
	T4 normalise(const T4& v);
	T4 normalize(const T4& v);
	"""
	EmitRepl(code, "T:" + float_types)
*/
//$pycgen-begin
	float2 normalise(const float2& v);
	float2 normalize(const float2& v);
	float3 normalise(const float3& v);
	float3 normalize(const float3& v);
	float4 normalise(const float4& v);
	float4 normalize(const float4& v);
	double2 normalise(const double2& v);
	double2 normalize(const double2& v);
	double3 normalise(const double3& v);
	double3 normalize(const double3& v);
	double4 normalise(const double4& v);
	double4 normalize(const double4& v);
//$pycgen-end



/*$pycgen
	code = """
	T2 abs(const T2& v);
	T3 abs(const T3& v);
	T4 abs(const T4& v);
	"""
	EmitRepl(code, "T:" + signed_types)
*/
//$pycgen-begin
	float2 abs(const float2& v);
	float3 abs(const float3& v);
	float4 abs(const float4& v);
	double2 abs(const double2& v);
	double3 abs(const double3& v);
	double4 abs(const double4& v);
	char2 abs(const char2& v);
	char3 abs(const char3& v);
	char4 abs(const char4& v);
	short2 abs(const short2& v);
	short3 abs(const short3& v);
	short4 abs(const short4& v);
	int2 abs(const int2& v);
	int3 abs(const int3& v);
	int4 abs(const int4& v);
//$pycgen-end


/*$pycgen
	code = """
	T2 min(const T2& a, const T2& b);
	T3 min(const T3& a, const T3& b);
	T4 min(const T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float2 min(const float2& a, const float2& b);
	float3 min(const float3& a, const float3& b);
	float4 min(const float4& a, const float4& b);
	double2 min(const double2& a, const double2& b);
	double3 min(const double3& a, const double3& b);
	double4 min(const double4& a, const double4& b);
	char2 min(const char2& a, const char2& b);
	char3 min(const char3& a, const char3& b);
	char4 min(const char4& a, const char4& b);
	short2 min(const short2& a, const short2& b);
	short3 min(const short3& a, const short3& b);
	short4 min(const short4& a, const short4& b);
	int2 min(const int2& a, const int2& b);
	int3 min(const int3& a, const int3& b);
	int4 min(const int4& a, const int4& b);
	uchar2 min(const uchar2& a, const uchar2& b);
	uchar3 min(const uchar3& a, const uchar3& b);
	uchar4 min(const uchar4& a, const uchar4& b);
	ushort2 min(const ushort2& a, const ushort2& b);
	ushort3 min(const ushort3& a, const ushort3& b);
	ushort4 min(const ushort4& a, const ushort4& b);
	uint2 min(const uint2& a, const uint2& b);
	uint3 min(const uint3& a, const uint3& b);
	uint4 min(const uint4& a, const uint4& b);
//$pycgen-end


/*$pycgen
	code = """
	T2 max(const T2& a, const T2& b);
	T3 max(const T3& a, const T3& b);
	T4 max(const T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float2 max(const float2& a, const float2& b);
	float3 max(const float3& a, const float3& b);
	float4 max(const float4& a, const float4& b);
	double2 max(const double2& a, const double2& b);
	double3 max(const double3& a, const double3& b);
	double4 max(const double4& a, const double4& b);
	char2 max(const char2& a, const char2& b);
	char3 max(const char3& a, const char3& b);
	char4 max(const char4& a, const char4& b);
	short2 max(const short2& a, const short2& b);
	short3 max(const short3& a, const short3& b);
	short4 max(const short4& a, const short4& b);
	int2 max(const int2& a, const int2& b);
	int3 max(const int3& a, const int3& b);
	int4 max(const int4& a, const int4& b);
	uchar2 max(const uchar2& a, const uchar2& b);
	uchar3 max(const uchar3& a, const uchar3& b);
	uchar4 max(const uchar4& a, const uchar4& b);
	ushort2 max(const ushort2& a, const ushort2& b);
	ushort3 max(const ushort3& a, const ushort3& b);
	ushort4 max(const ushort4& a, const ushort4& b);
	uint2 max(const uint2& a, const uint2& b);
	uint3 max(const uint3& a, const uint3& b);
	uint4 max(const uint4& a, const uint4& b);
//$pycgen-end


/*$pycgen
	code = """
	T clamp(T v, T lo, T hi);
	T2 clamp(const T2& v, T lo, T hi);
	T3 clamp(const T3& v, T lo, T hi);
	T4 clamp(const T4& v, T lo, T hi);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float clamp(float v, float lo, float hi);
	float2 clamp(const float2& v, float lo, float hi);
	float3 clamp(const float3& v, float lo, float hi);
	float4 clamp(const float4& v, float lo, float hi);
	double clamp(double v, double lo, double hi);
	double2 clamp(const double2& v, double lo, double hi);
	double3 clamp(const double3& v, double lo, double hi);
	double4 clamp(const double4& v, double lo, double hi);
	char clamp(char v, char lo, char hi);
	char2 clamp(const char2& v, char lo, char hi);
	char3 clamp(const char3& v, char lo, char hi);
	char4 clamp(const char4& v, char lo, char hi);
	short clamp(short v, short lo, short hi);
	short2 clamp(const short2& v, short lo, short hi);
	short3 clamp(const short3& v, short lo, short hi);
	short4 clamp(const short4& v, short lo, short hi);
	int clamp(int v, int lo, int hi);
	int2 clamp(const int2& v, int lo, int hi);
	int3 clamp(const int3& v, int lo, int hi);
	int4 clamp(const int4& v, int lo, int hi);
	uchar clamp(uchar v, uchar lo, uchar hi);
	uchar2 clamp(const uchar2& v, uchar lo, uchar hi);
	uchar3 clamp(const uchar3& v, uchar lo, uchar hi);
	uchar4 clamp(const uchar4& v, uchar lo, uchar hi);
	ushort clamp(ushort v, ushort lo, ushort hi);
	ushort2 clamp(const ushort2& v, ushort lo, ushort hi);
	ushort3 clamp(const ushort3& v, ushort lo, ushort hi);
	ushort4 clamp(const ushort4& v, ushort lo, ushort hi);
	uint clamp(uint v, uint lo, uint hi);
	uint2 clamp(const uint2& v, uint lo, uint hi);
	uint3 clamp(const uint3& v, uint lo, uint hi);
	uint4 clamp(const uint4& v, uint lo, uint hi);
//$pycgen-end


/*$pycgen
	code = """
	T saturate(T v);
	T2 saturate(const T2& v);
	T3 saturate(const T3& v);
	T4 saturate(const T4& v);
	"""
	EmitRepl(code, "T:" + float_types)
*/
//$pycgen-begin
	float saturate(float v);
	float2 saturate(const float2& v);
	float3 saturate(const float3& v);
	float4 saturate(const float4& v);
	double saturate(double v);
	double2 saturate(const double2& v);
	double3 saturate(const double3& v);
	double4 saturate(const double4& v);
//$pycgen-end


/*$pycgen
	code = """
	T2 floor(const T2& v);
	T3 floor(const T3& v);
	T4 floor(const T4& v);
	"""
	EmitRepl(code, "T:" + float_types)
*/
//$pycgen-begin
	float2 floor(const float2& v);
	float3 floor(const float3& v);
	float4 floor(const float4& v);
	double2 floor(const double2& v);
	double3 floor(const double3& v);
	double4 floor(const double4& v);
//$pycgen-end


/*$pycgen
	code = """
	T2 ceil(const T2& v);
	T3 ceil(const T3& v);
	T4 ceil(const T4& v);
	"""
	EmitRepl(code, "T:" + float_types)
*/
//$pycgen-begin
	float2 ceil(const float2& v);
	float3 ceil(const float3& v);
	float4 ceil(const float4& v);
	double2 ceil(const double2& v);
	double3 ceil(const double3& v);
	double4 ceil(const double4& v);
//$pycgen-end


/*$pycgen
	code = """
	T lerp(T a, T b, T t);
	T2 lerp(T2 a, T2 b, T t);
	T3 lerp(T3 a, T3 b, T t);
	T4 lerp(T4 a, T4 b, T t);
	"""
	EmitRepl(code, "T:" + float_types)
*/
//$pycgen-begin
	float lerp(float a, float b, float t);
	float2 lerp(float2 a, float2 b, float t);
	float3 lerp(float3 a, float3 b, float t);
	float4 lerp(float4 a, float4 b, float t);
	double lerp(double a, double b, double t);
	double2 lerp(double2 a, double2 b, double t);
	double3 lerp(double3 a, double3 b, double t);
	double4 lerp(double4 a, double4 b, double t);
//$pycgen-end


/*$pycgen
	code = """
	T spline(T a, T b, T c, T d, T t);
	T2 spline(T2 a, T2 b, T2 c, T2 d, T t);
	T3 spline(T3 a, T3 b, T3 c, T3 d, T t);
	T4 spline(T4 a, T4 b, T4 c, T4 d, T t);
	"""
	EmitRepl(code, "T:" + float_types)
*/
//$pycgen-begin
	float spline(float a, float b, float c, float d, float t);
	float2 spline(float2 a, float2 b, float2 c, float2 d, float t);
	float3 spline(float3 a, float3 b, float3 c, float3 d, float t);
	float4 spline(float4 a, float4 b, float4 c, float4 d, float t);
	double spline(double a, double b, double c, double d, double t);
	double2 spline(double2 a, double2 b, double2 c, double2 d, double t);
	double3 spline(double3 a, double3 b, double3 c, double3 d, double t);
	double4 spline(double4 a, double4 b, double4 c, double4 d, double t);
//$pycgen-end


/*$pycgen
	code = """
	T2 operator + (const T2& a, const T2& b);
	T3 operator + (const T3& a, const T3& b);
	T4 operator + (const T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float2 operator + (const float2& a, const float2& b);
	float3 operator + (const float3& a, const float3& b);
	float4 operator + (const float4& a, const float4& b);
	double2 operator + (const double2& a, const double2& b);
	double3 operator + (const double3& a, const double3& b);
	double4 operator + (const double4& a, const double4& b);
	char2 operator + (const char2& a, const char2& b);
	char3 operator + (const char3& a, const char3& b);
	char4 operator + (const char4& a, const char4& b);
	short2 operator + (const short2& a, const short2& b);
	short3 operator + (const short3& a, const short3& b);
	short4 operator + (const short4& a, const short4& b);
	int2 operator + (const int2& a, const int2& b);
	int3 operator + (const int3& a, const int3& b);
	int4 operator + (const int4& a, const int4& b);
	uchar2 operator + (const uchar2& a, const uchar2& b);
	uchar3 operator + (const uchar3& a, const uchar3& b);
	uchar4 operator + (const uchar4& a, const uchar4& b);
	ushort2 operator + (const ushort2& a, const ushort2& b);
	ushort3 operator + (const ushort3& a, const ushort3& b);
	ushort4 operator + (const ushort4& a, const ushort4& b);
	uint2 operator + (const uint2& a, const uint2& b);
	uint3 operator + (const uint3& a, const uint3& b);
	uint4 operator + (const uint4& a, const uint4& b);
//$pycgen-end


/*$pycgen
	code = """
	T2 operator - (const T2& a, const T2& b);
	T3 operator - (const T3& a, const T3& b);
	T4 operator - (const T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float2 operator - (const float2& a, const float2& b);
	float3 operator - (const float3& a, const float3& b);
	float4 operator - (const float4& a, const float4& b);
	double2 operator - (const double2& a, const double2& b);
	double3 operator - (const double3& a, const double3& b);
	double4 operator - (const double4& a, const double4& b);
	char2 operator - (const char2& a, const char2& b);
	char3 operator - (const char3& a, const char3& b);
	char4 operator - (const char4& a, const char4& b);
	short2 operator - (const short2& a, const short2& b);
	short3 operator - (const short3& a, const short3& b);
	short4 operator - (const short4& a, const short4& b);
	int2 operator - (const int2& a, const int2& b);
	int3 operator - (const int3& a, const int3& b);
	int4 operator - (const int4& a, const int4& b);
	uchar2 operator - (const uchar2& a, const uchar2& b);
	uchar3 operator - (const uchar3& a, const uchar3& b);
	uchar4 operator - (const uchar4& a, const uchar4& b);
	ushort2 operator - (const ushort2& a, const ushort2& b);
	ushort3 operator - (const ushort3& a, const ushort3& b);
	ushort4 operator - (const ushort4& a, const ushort4& b);
	uint2 operator - (const uint2& a, const uint2& b);
	uint3 operator - (const uint3& a, const uint3& b);
	uint4 operator - (const uint4& a, const uint4& b);
//$pycgen-end


/*$pycgen
	code = """
	T2 operator * (const T2& a, const T2& b);
	T3 operator * (const T3& a, const T3& b);
	T4 operator * (const T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float2 operator * (const float2& a, const float2& b);
	float3 operator * (const float3& a, const float3& b);
	float4 operator * (const float4& a, const float4& b);
	double2 operator * (const double2& a, const double2& b);
	double3 operator * (const double3& a, const double3& b);
	double4 operator * (const double4& a, const double4& b);
	char2 operator * (const char2& a, const char2& b);
	char3 operator * (const char3& a, const char3& b);
	char4 operator * (const char4& a, const char4& b);
	short2 operator * (const short2& a, const short2& b);
	short3 operator * (const short3& a, const short3& b);
	short4 operator * (const short4& a, const short4& b);
	int2 operator * (const int2& a, const int2& b);
	int3 operator * (const int3& a, const int3& b);
	int4 operator * (const int4& a, const int4& b);
	uchar2 operator * (const uchar2& a, const uchar2& b);
	uchar3 operator * (const uchar3& a, const uchar3& b);
	uchar4 operator * (const uchar4& a, const uchar4& b);
	ushort2 operator * (const ushort2& a, const ushort2& b);
	ushort3 operator * (const ushort3& a, const ushort3& b);
	ushort4 operator * (const ushort4& a, const ushort4& b);
	uint2 operator * (const uint2& a, const uint2& b);
	uint3 operator * (const uint3& a, const uint3& b);
	uint4 operator * (const uint4& a, const uint4& b);
//$pycgen-end


/*$pycgen
	code = """
	T2 operator / (const T2& a, const T2& b);
	T3 operator / (const T3& a, const T3& b);
	T4 operator / (const T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float2 operator / (const float2& a, const float2& b);
	float3 operator / (const float3& a, const float3& b);
	float4 operator / (const float4& a, const float4& b);
	double2 operator / (const double2& a, const double2& b);
	double3 operator / (const double3& a, const double3& b);
	double4 operator / (const double4& a, const double4& b);
	char2 operator / (const char2& a, const char2& b);
	char3 operator / (const char3& a, const char3& b);
	char4 operator / (const char4& a, const char4& b);
	short2 operator / (const short2& a, const short2& b);
	short3 operator / (const short3& a, const short3& b);
	short4 operator / (const short4& a, const short4& b);
	int2 operator / (const int2& a, const int2& b);
	int3 operator / (const int3& a, const int3& b);
	int4 operator / (const int4& a, const int4& b);
	uchar2 operator / (const uchar2& a, const uchar2& b);
	uchar3 operator / (const uchar3& a, const uchar3& b);
	uchar4 operator / (const uchar4& a, const uchar4& b);
	ushort2 operator / (const ushort2& a, const ushort2& b);
	ushort3 operator / (const ushort3& a, const ushort3& b);
	ushort4 operator / (const ushort4& a, const ushort4& b);
	uint2 operator / (const uint2& a, const uint2& b);
	uint3 operator / (const uint3& a, const uint3& b);
	uint4 operator / (const uint4& a, const uint4& b);
//$pycgen-end


/*$pycgen
	code = """
	T2 operator - (const T2& a);
	T3 operator - (const T3& a);
	T4 operator - (const T4& a);
	"""
	EmitRepl(code, "T:" + signed_types)
*/
//$pycgen-begin
	float2 operator - (const float2& a);
	float3 operator - (const float3& a);
	float4 operator - (const float4& a);
	double2 operator - (const double2& a);
	double3 operator - (const double3& a);
	double4 operator - (const double4& a);
	char2 operator - (const char2& a);
	char3 operator - (const char3& a);
	char4 operator - (const char4& a);
	short2 operator - (const short2& a);
	short3 operator - (const short3& a);
	short4 operator - (const short4& a);
	int2 operator - (const int2& a);
	int3 operator - (const int3& a);
	int4 operator - (const int4& a);
//$pycgen-end


/*$pycgen
	code = """
	T2& operator += (T2& a, const T2& b);
	T3& operator += (T3& a, const T3& b);
	T4& operator += (T4& a, const T4& b);
	"""
	EmitRepl(code, "T:" + vector_types)
*/
//$pycgen-begin
	float2& operator += (float2& a, const float2& b);
	float3& operator += (float3& a, const float3& b);
	float4& operator += (float4& a, const float4& b);
	double2& operator += (double2& a, const double2& b);
	double3& operator += (double3& a, const double3& b);
	double4& operator += (double4& a, const double4& b);
	char2& operator += (char2& a, const char2& b);
	char3& operator += (char3& a, const char3& b);
	char4& operator += (char4& a, const char4& b);
	short2& operator += (short2& a, const short2& b);
	short3& operator += (short3& a, const short3& b);
	short4& operator += (short4& a, const short4& b);
	int2& operator += (int2& a, const int2& b);
	int3& operator += (int3& a, const int3& b);
	int4& operator += (int4& a, const int4& b);
	uchar2& operator += (uchar2& a, const uchar2& b);
	uchar3& operator += (uchar3& a, const uchar3& b);
	uchar4& operator += (uchar4& a, const uchar4& b);
	ushort2& operator += (ushort2& a, const ushort2& b);
	ushort3& operator += (ushort3& a, const ushort3& b);
	ushort4& operator += (ushort4& a, const ushort4& b);
	uint2& operator += (uint2& a, const uint2& b);
	uint3& operator += (uint3& a, const uint3& b);
	uint4& operator += (uint4& a, const uint4& b);
//$pycgen-end


clcpp_reflect_part(math)
namespace math
{
	enum clcpp_attr(reflect) Axis
	{
		AXIS_X,
		AXIS_Y,
		AXIS_Z,	
	};


	void Init();

	// For float->float16 conversion
	half float_to_half(float f);
	float half_to_float(const half& h);

	// Uniform distribution mapping functions
	float3 UniformUVToSphere(const float2& uv, float r);
	float3 UniformUVToHemisphere(const float2& uv);
	float3 UniformUVToHemisphere(const float2& uv, float max_theta);
	float3 UniformUVToHemisphereCosine(const float2& uv);
	float3 UniformUVToHemisphereCosine(const float2& uv, float max_theta);

	// Signed distance functions
	// TODO: Move for use in HLSL
	float sdSphere(const float3& p, float r);
	float sdCylinder(const float3& p, const float2& h);
	float sdBox(const float3& p, const float3& b);
	float sdCapsule(const float3& p, const float3& a, const float3& b, float r);
	float sdEllipsoid(const float3& p, const float3& r);
	float sdUnion(float a, float b);
	float sdSubtract(float a, float b0);
	float sdIntersect(float a, float b);
	float sdSmoothUnion(float a, float b, float k);
}


#endif // MATH_CPP


#ifdef MATH_CPP
	#define MATH_TYPEDEF_INOUT(type) typedef const type& in_##type; typedef type& out_##type;
#else
	#define MATH_TYPEDEF_INOUT(type) typedef type in_##type;
#endif


MATH_TYPEDEF_INOUT(int3);
MATH_TYPEDEF_INOUT(float);
MATH_TYPEDEF_INOUT(float2);
MATH_TYPEDEF_INOUT(float3);
MATH_TYPEDEF_INOUT(float4);
MATH_TYPEDEF_INOUT(double);
MATH_TYPEDEF_INOUT(double2);
MATH_TYPEDEF_INOUT(double3);
MATH_TYPEDEF_INOUT(double4);


//
// Vector conversion functions
//
float3 double3_to_float3(in_double3 v);
double3 float3_to_double3(in_float3 v);


/*$pycgen
	code = """
	T coserp_t(T t);
	T2 coserp_t(in_T2 t);
	T3 coserp_t(in_T3 t);
	T4 coserp_t(in_T4 t);
	"""
	EmitRepl(code, "T:float")
*/
//$pycgen-begin
	float coserp_t(float t);
	float2 coserp_t(in_float2 t);
	float3 coserp_t(in_float3 t);
	float4 coserp_t(in_float4 t);
//$pycgen-end


/*$pycgen
	code = """
	T cuberp_t(T t);
	T2 cuberp_t(in_T2 t);
	T3 cuberp_t(in_T3 t);
	T4 cuberp_t(in_T4 t);
	"""
	EmitRepl(code, "T:float")
*/
//$pycgen-begin
	float cuberp_t(float t);
	float2 cuberp_t(in_float2 t);
	float3 cuberp_t(in_float3 t);
	float4 cuberp_t(in_float4 t);
//$pycgen-end


/*$pycgen
	code = """
	T quinterp_t(T t);
	T2 quinterp_t(in_T2 t);
	T3 quinterp_t(in_T3 t);
	T4 quinterp_t(in_T4 t);
	"""
	EmitRepl(code, "T:float")
*/
//$pycgen-begin
	float quinterp_t(float t);
	float2 quinterp_t(in_float2 t);
	float3 quinterp_t(in_float3 t);
	float4 quinterp_t(in_float4 t);
//$pycgen-end


clcpp_reflect_part(math)
namespace math
{
	//
	// Single precision 3x3 matrix
	//
	#ifdef MATH_CPP
		struct clcpp_attr(reflect) mat3
		{
			mat3() { }
			mat3(in_float3 x, in_float3 y, in_float3 z)
			{
				f[0] = x.x; f[1] = x.y; f[2] = x.z;
				f[3] = y.x; f[4] = y.y; f[5] = y.z;
				f[6] = z.x; f[7] = z.y; f[8] = z.z;
			}
			mat3(float f0, float f1, float f2, float f3, float f4, float f5, float f6, float f7, float f8)
			{
				f[0] = f0; f[1] = f1; f[2] = f2;
				f[3] = f3; f[4] = f4; f[5] = f5;
				f[6] = f6; f[7] = f7; f[8] = f8;
			}

			const float3& operator [] (uint index) const { return *((float3*)f + index); }
			float3& operator [] (uint index) { return *((float3*)f + index); }

			union
			{
				
				clcpp_attr(noreflect) float m[3][3];
				float f[9];
			};
		};
	#else
		typedef float3x3 mat3;
	#endif


	MATH_TYPEDEF_INOUT(mat3);


	//
	// Double precision 3x3 matrix
	// C++ only
	//
	#ifdef MATH_CPP
		struct clcpp_attr(reflect) mat3d
		{
			mat3d() { }
			mat3d(in_double3 x, in_double3 y, in_double3 z)
			{
				f[0] = x.x; f[1] = x.y; f[2] = x.z;
				f[3] = y.x; f[4] = y.y; f[5] = y.z;
				f[6] = z.x; f[7] = z.y; f[8] = z.z;
			}
			mat3d(double f0, double f1, double f2, double f3, double f4, double f5, double f6, double f7, double f8)
			{
				f[0] = f0; f[1] = f1; f[2] = f2;
				f[3] = f3; f[4] = f4; f[5] = f5;
				f[6] = f6; f[7] = f7; f[8] = f8;
			}

			const double3& operator [] (uint index) const { return *((double3*)f + index); }
			double3& operator [] (uint index) { return *((double3*)f + index); }

			union
			{
				
				clcpp_attr(noreflect) double m[3][3];
				double f[9];
			};
		};
		MATH_TYPEDEF_INOUT(mat3d);
	#endif


	//
	// Single precision 4x4 matrix
	//
	#ifdef MATH_CPP
		struct clcpp_attr(reflect) mat4
		{
			mat4() { }
			mat4(in_float4 x, in_float4 y, in_float4 z, in_float4 w)
			{
				f[0]  = x.x; f[1]  = x.y; f[2]  = x.z; f[3]  = x.w;
				f[4]  = y.x; f[5]  = y.y; f[6]  = y.z; f[7]  = y.w;
				f[8]  = z.x; f[9]  = z.y; f[10] = z.z; f[11] = z.w;
				f[12] = w.x; f[13] = w.y; f[14] = w.z; f[15] = w.w;
			}
			mat4(float f0, float f1, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11, float f12, float f13, float f14, float f15)
			{
				f[0]  = f0;  f[1]  = f1;  f[2]  = f2;  f[3]  = f3;
				f[4]  = f4;  f[5]  = f5;  f[6]  = f6;  f[7]  = f7;
				f[8]  = f8;  f[9]  = f9;  f[10] = f10; f[11] = f11;
				f[12] = f12; f[13] = f13; f[14] = f14; f[15] = f15;
			}

			const float4& operator [] (uint index) const { return *((float4*)f + index); }
			float4& operator [] (uint index) { return *((float4*)f + index); }

			union
			{
				clcpp_attr(noreflect) float m[4][4];
				float f[16];
			};
		};
	#else
		typedef float4x4 mat4;
	#endif


	MATH_TYPEDEF_INOUT(mat4);


	//
	// Single precision quaternion
	//
	#ifdef MATH_CPP
		struct clcpp_attr(reflect) quat
		{
			quat() { }
			quat(float v) : x(v), y(v), z(v), w(v) { }
			quat(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) { }

			union
			{
				struct { clcpp_attr(noreflect) float x, y, z, w; };
				float f[4];
			};
		};
	#else
		typedef float4 quat;
	#endif


	MATH_TYPEDEF_INOUT(quat);


	//
	// Single precision dual quaternion
	//
	struct clcpp_attr(reflect) dualquat
	{
		quat r;
		quat d;
	};
	MATH_TYPEDEF_INOUT(dualquat);


	//
	// This is an affine frame with origin and basis as rotation operator
	//
	struct clcpp_attr(reflect) frame
	{
		quat rotation;
		float3 position;
	};
	struct clcpp_attr(reflect) framed
	{
		quat rotation;
		double3 position;
	};
	MATH_TYPEDEF_INOUT(frame);
	MATH_TYPEDEF_INOUT(framed);


	//
	// Scalar math
	//
	float2 SinCos(float angle);
	float DegreesToRadians(float degrees);
	double DegreesToRadians(double degrees);
	float RadiansToDegrees(float radians);
	double RadiansToDegrees(double radians);
	uint Factorial(uint v);


	//
	// Procedural operations on vectors
	//
	float3	vSlerp(in_float3 a, in_float3 b, float t);
	float3 	vPerpendicular(in_float3 v);
	double3	vPerpendicular(in_double3 v);
	bool 	vEquals(in_int3 a, in_int3 b, float epsilon = 0);
	float3	vProjectOnto(in_float3 a, in_float3 b);
	double3	vMapCubeToSphere(in_double3 v);
	double3	vMapNonUnitCubeToSphere(in_double3 v, double extents);
	#ifdef MATH_CPP
		float3	vFraction(in_float3 v);
		double3	vFraction(in_double3 v);
		void	vOrthogonalise(in_float3 a, out_float3 b, out_float3 c);
	#endif


	//
	// Matrix generation functions
	//
	mat3 m3Zero();
	mat4 m4Zero();
	mat3 m3Identity();
	mat4 m4Identity();
	mat3 m3RotateX(float angle);
	mat4 m4RotateX(float angle);
	mat3 m3RotateY(float angle);
	mat4 m4RotateY(float angle);
	mat3 m3RotateZ(float angle);
	mat4 m4RotateZ(float angle);
	mat3 m3Scale(float x, float y, float z);
	mat3 m3Scale(in_float3 s);
	mat3 m3Direction(in_float3 z);
	mat3 m3Direction(in_float3 z, float3 y);
	mat4 m4Translate(float x, float y, float z);
	mat4 m4Translate(in_float3 v);
	mat4 m4PerspectiveFovLH(float fov_y, float aspect_ratio, float near_z, float far_z);
	mat4 m4PerspectiveFovOffCenterLH(float fov_y, float aspect_ratio, in_float4 rect, float near_z, float far_z);
	#ifdef MATH_CPP
		mat3 m3Up(in_double3 y);
		mat3d m3dZero();
		mat3d m3dIdentity();
	#endif


	//
	// Matrix conversion functions
	//
	mat3 mat4_to_mat3(in_mat4 m4);
	mat4 mat3_to_mat4(in_mat3 m3);
	#ifdef MATH_CPP
		mat3 mat3d_to_mat3(in_mat3d m3d);
		mat3d mat3_to_mat3d(in_mat3 m3);
	#endif


	//
	// Procedural operations on matrices
	// Disabled in HLSL for now as it's easy to mess up during porting
	//
	#ifdef MATH_CPP
		mat3 m3Multiply(in_mat3 a, in_mat3 b);
		mat4 m4Multiply(in_mat4 a, in_mat4 b);
		mat3d m3dMultiply(in_mat3d a, in_mat3d b);
		float m3Determinant(in_mat3 m);
		float m4Determinant(in_mat4 m);
		bool m3Inverse(in_mat3 m, mat3& inv_m);
		bool m4Inverse(in_mat4 m, mat4& inv_m);
		mat3 m3Transpose(in_mat3 m);
		mat4 m4Transpose(in_mat4 m);
		mat3 m3Orthogonalise(in_mat3 m, int axis);
		mat3 m3Orthonormalise(in_mat3 m, int axis);
		float3 m3Transform(in_mat3 m, in_float3 v);
		double3 m3Transform(in_mat3 m, in_double3 v);
		float4 m4Transform(in_mat4 m, in_float4 v);
		float3 m3TransformTransposed(in_mat3 m, in_float3 v);
		double3 m3TransformTransposed(in_mat3 m, in_double3 v);
		float3 m4TransformPos(in_mat4 m, in_float3 v);
		double3 m4TransformPos(in_mat4 m, in_double3 v);
		float3 m4TransformDir(in_mat4 m, in_float3 v);
		bool m3ToEulerXYZ(in_mat3 m, out_float3 angles);
		bool m3ToEulerYXZ(in_mat3 m, out_float3 angles);
		bool m3ToEulerZXY(in_mat3 m, out_float3 angles);
		bool m3ToEulerZYX(in_mat3 m, out_float3 angles);
		void m3dDiagonalise(in_mat3d m, mat3d& Q, mat3d& D);
	#endif


	//
	// Quaternion functions
	//
	quat qZero();
	quat qIdentity();
	quat qAxisAngle(in_float3 v, float angle);
	float qNorm(in_quat q);
	quat qNormalise(in_quat q);
	quat qNegate(in_quat q);
	quat qConjugate(in_quat q);
	quat qInverse(in_quat q);
	quat qScale(in_quat q, float scale);
	float qDot(in_quat a, in_quat b);
	quat qMultiply(in_quat a, in_quat b);
	quat qMultiplyPure(in_quat a, in_float3 b);
	float3 qTransformPos(in_quat q, in_float3 p);
	double3 qTransformPos(in_quat q, in_double3 p);
	quat qRotationBetween(float3 v0, float3 v1);
	quat qLerp(in_quat a, in_quat b, float t);
	quat qSlerp(quat a, in_quat b, float t);


	//
	// Quaternion conversion functions
	//
	mat3 quat_to_mat3(in_quat q);
	mat4 quat_to_mat4(in_quat q);
	quat mat3_to_quat(in_mat3 m);


	//
	// Dual quaternion generation functions
	//
	dualquat dqIdentity();


	//
	// Frame functions
	//
	frame fIdentity();
	framed fdIdentity();
	frame fPosition(in_float3 position);
	framed fdPosition(in_double3 position);
	frame fPositionRotation(in_float3 position, in_quat rotation);
	framed fdPositionRotation(in_double3 position, in_quat rotation);
	frame fInverse(in_frame f);
	framed fInverse(in_framed f);
	frame fMultiply(in_frame a, in_frame b);
	framed fMultiply(in_framed a, in_framed b);
	frame fLerp(in_frame a, in_frame b, float t);
	float3 fTransformPos(in_frame f, in_float3 v);
	double3 fTransformPos(in_framed f, in_double3 v);


	//
	// Frame conversion functions
	//
	frame framed_to_frame(in_framed f);
}


// Implementation needs to be inline for HLSL
#ifdef MATH_HLSL
	#include "Math.inl"
#endif


#ifdef MATH_CPP
clcpp_reflect_part(math)
namespace math
{
	//
	// Rigid transform with position stored in double precision
	//
	struct clcpp_attr(reflect) transform
	{
		double3 position;
		mat3 rotation;
		float3 scale;
	};


	struct clcpp_attr(reflect) boxi
	{
		int3 min;
		int3 max;
	};


	//
	// A plane in 3 dimensions, composed of a normal and distance along the normal from the origin
	//
	struct clcpp_attr(reflect) planef
	{
		planef() { }
		planef(float x, float y, float z, float d)
			: n(x, y, z), d(d)
		{
		}
		planef(const float3& n, float d)
			: n(n), d(d)
		{
		}
		float3 n;
		float d;
	};
	struct clcpp_attr(reflect) planed
	{
		planed() { }
		planed(double x, double y, double z, double d)
			: n(x, y, z), d(d)
		{
		}
		planed(const double3& n, double d)
			: n(n), d(d)
		{
		}
		double3 n;
		double d;
	};


	//
	// Named frustum plane indices
	//
	enum
	{
		FrustumPlane_Near,
		FrustumPlane_Far,
		FrustumPlane_Left,
		FrustumPlane_Right,
		FrustumPlane_Top,
		FrustumPlane_Bottom,
		FrustumPlane_Count,
	};


	//
	// A camera view volume bounded by 6 planes
	//
	struct clcpp_attr(reflect) frustumf
	{
		planef planes[FrustumPlane_Count];
	};
	struct clcpp_attr(reflect) frustumd
	{
		planed planes[FrustumPlane_Count];
	};


	
	//
	// Shared location for voxel type that all subsystems can reference
	// TODO: This is probably not the ideal place for this but it's better than in
	//       the VDB or Transvoxel libraries.
	//
	struct clcpp_attr(reflect) Voxel
	{
		// Fixed-point compressed distance to zero-surface
		i16 distance;

		// Material ID for this voxel
		u16 material_id;
	};


	//
	// Mutually exclusive flags for storing normal voxels in voxel grids
	//
	enum clcpp_attr(reflect) VoxelGridFlags
	{
		VoxelGridFlags_NoNormals = 0,
		VoxelGridFlags_StoreNormals = 1,
	};


	//
	// Describes the layout of a collection of voxels and cells constructed out of them.
	// There are equal number of cells/voxels on each axis.
	// The number of voxels is determined by the number of cells and whether an extra padding
	// layer of voxels is added round the outside for normal calculation.
	//
	struct clcpp_attr(reflect) VoxelGrid
	{
		VoxelGrid();
		VoxelGrid(i32 nb_cells_axis, VoxelGridFlags flags);

		// Cell count
		i32 nb_cells_axis;
		i32 nb_cells_axis_2;
		i32 nb_cells;
		i32 max_cell_index;

		// Flags about normal storage
		u32 stores_normals;

		// Voxel count - 1 extra voxel to cover last cell corner, 2 extra voxels for normal sampling either side
		i32 nb_voxels_axis;
		i32 nb_voxels_axis_2;
		i32 nb_voxels;
	};



	//
	// A unique node ID within a grid hierarchy stored as a 96-bit value.
	// Node x,y,z and level integer locations are bit-packed into this.
	//
	struct clcpp_attr(reflect) NodeID
	{
		NodeID();
		NodeID(const int3& node_index, int level_index);

		// Recalculate 3D index from the ID
		int3 Index() const;

		// Extract level index
		u32 Level() const;

		// Calculate a well-distributed hash from the ID
		u32 Hash() const;

		bool operator == (const NodeID& rhs) const;
		bool operator != (const NodeID& rhs) const;

		u32 v[3];
	};


	struct BoxIterator
	{
		BoxIterator(const math::boxi& range)
			: range(range)
		{
			// Clamp any negative deltas to zero before calculating volume
			// Also add 1 to make the max inclusive
			delta.x = max(range.max.x - range.min.x + 1, 0);
			delta.y = max(range.max.y - range.min.y + 1, 0);
			delta.z = max(range.max.z - range.min.z + 1, 0);

			slice_size = delta.x * delta.y;
			size = slice_size * delta.z;
		}
		
		void GetPos(int i, int3& pos) const
		{
			// Calculate position within the range delta
			pos.z = i / slice_size;
			i -= pos.z * slice_size;
			pos.y = i / delta.x;
			pos.x = i - pos.y * delta.x;

			// Offset that to get the actual position
			pos.x += range.min.x;
			pos.y += range.min.y;
			pos.z += range.min.z;
		}

		const math::boxi& range;
		int3 delta;
		i32 slice_size;
		i32 size;
	};


	//
	// Transform functions
	//
	transform tZero();
	transform tIdentity();
	transform tPosition(const double3& position);
	transform tPositionRotation(const double3& position, const mat3& rotation);
	mat4 tToMat4(const transform& t);
	mat4 tToMat4Rigid(const transform& t);
	double3 tTransformPos(const transform& t, const double3& v);
	transform tMultiplyRigid(const transform& a, const transform& b);


	//
	// Box functions
	//
	boxi biScale(const boxi& box, i32 scale);
	boxi biInvScale(const boxi& box, i32 inv_scale);
	boxi biUnion(const boxi& a, const boxi& b);
	boxi biIntersection(const boxi& a, const boxi& b);
	bool biIntersects(const boxi& a, const boxi& b);
	i32 biVolume(const boxi& b);


	//
	// Plane generation functions
	//
	planef pPositionNormal(const float3& position, const float3& normal);
	planed pPositionNormal(const double3& position, const double3& normal);
	planef pTriangle(const float3& a, const float3& b, const float3& c);
	planed pTriangle(const double3& a, const double3& b, const double3& c);


	//
	// Procedural operations with planes
	//
	float pDistanceFrom(const planef& p, const float3& v);
	double pDistanceFrom(const planed& p, const double3& v);
	float pDistanceFrom(const planef& p, const float3& pos, const float3& extents);
	double pDistanceFrom(const planed& p, const double3& pos, const double3& extents);
	float3 pProjectVector(const planef& p, const float3& v);
	double3 pProjectVector(const planed& p, const double3& v);
	planef pNormalise(const planef& p);
	planed pNormalise(const planed& p);
	planef pTransform(const planef& p, const mat4& m);
	planed pTransform(const planed& p, const mat4& m);
	planef pTranslate(const planef& p, const float3& v);
	planed pTranslate(const planed& p, const double3& v);
	float3 pIntersectionPoint(const planef& a, const planef& b, const planef& c);
	double3 pIntersectionPoint(const planed& a, const planed& b, const planed& c);
	bool pIntersectionPoint(const planef& a, const planef& b, const planef& c, float3& Q);
	bool pIntersectionPoint(const planed& a, const planed& b, const planed& c, double3& Q);
	bool pIntersectionLine(const planef& a, const planef& b, float3& Q, float3& V);
	bool pIntersectionLine(const planed& a, const planed& b, double3& Q, double3& V);


	// Frustum functions
	frustumf frustumfMake(const mat4& m);
	frustumd frustumdMake(const mat4& m);
	frustumf frustumTransform(const frustumf& f, const mat4& m);
	frustumd frustumTransform(const frustumd& f, const mat4& m);
	frustumf frustumTranslate(const frustumf& f, const float3& v);
	frustumd frustumTranslate(const frustumd& f, const double3& v);
	bool frustumContains(const frustumf& f, const float3& pos, const float3& extents);
	bool frustumContains(const frustumd& f, const double3& pos, const double3& extents);


	//
	// Some utility functions
	//
	float QuadAreaApproximateSphereProjectionSize(const float3& pos, float radius, const mat4& w2c, const mat4& c2s, float near_z);
	double SphereAngularProjectionOntoPosition(const double3& sphere_pos, double radius, const double3& position);
	void MakeHammersleyPoints(u32 nb_points, core::Vector<float4>& points);
	i16 Compress_DoubleToSigned16(double d, double extents);
	double Decompress_Signed16ToDouble(i16 d, double extents);
}


namespace core
{
	template <> struct Hash<math::NodeID>
	{
		static u32 Get(const math::NodeID& key)
		{
			return key.Hash();
		}
	};

	// Don't call default constructor for these types in containers
	/*$pycgen
		code = """
		template <> struct EmptyDefaultConstructor<T2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<T3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<T4> { static const int val = 1; };
		"""
		EmitRepl(code, "T:" + vector_types)
	*/
	//$pycgen-begin
		template <> struct EmptyDefaultConstructor<float2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<float3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<float4> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<double2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<double3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<double4> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<char2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<char3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<char4> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<short2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<short3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<short4> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<int2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<int3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<int4> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<uchar2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<uchar3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<uchar4> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<ushort2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<ushort3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<ushort4> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<uint2> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<uint3> { static const int val = 1; };
		template <> struct EmptyDefaultConstructor<uint4> { static const int val = 1; };
	//$pycgen-end
}


#endif


#endif // INCLUDED_CORE_MATH
