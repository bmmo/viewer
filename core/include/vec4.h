#pragma once

#include <cstdint>

template <typename T> class vec4 {

	public:

		vec4() : m_x(0), m_y(0), m_z(0) {}
		vec4(const T& x, const T& y, const T& z) : m_x(x), m_y(y), m_z(z) {}
		vec4(const vec4& v) : m_x(v.m_x), m_y(v.m_y), m_z(v.m_z) {}

		inline T& x() { return m_x; }
		inline T& y() { return m_y; }
		inline T& z() { return m_z; }
		inline T& w() { return m_w; }

		inline T& r() { return m_x; }
		inline T& g() { return m_y; }
		inline T& b() { return m_z; }
		inline T& a() { return m_w; }

		inline const T& x() const { return m_x; }
		inline const T& y() const { return m_y; }
		inline const T& z() const { return m_z; }
		inline const T& w() const { return m_w; }

		inline const T& r() const { return m_x; }
		inline const T& g() const { return m_y; }
		inline const T& b() const { return m_z; }
		inline const T& a() const { return m_w; }

	protected:
		
		T m_x;
		T m_y;
		T m_z;
		T m_w;

};

typedef vec4<float>   vec4f;
typedef vec4<double>  vec4d;
typedef vec4<uint8_t> vec4u;
typedef vec4<int32_t> vec4i;

