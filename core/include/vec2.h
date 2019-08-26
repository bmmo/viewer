#pragma once

#include <cstdint>

template <typename T> class vec2 {

	public:

		typedef T value_type;

		vec2() : m_x(0), m_y(0) {}
		vec2(const T& x, const T& y) : m_x(x), m_y(y) {}
		vec2(const vec2& v) : m_x(v.m_x), m_y(v.m_y) {}

		inline T& x() { return m_x; }
		inline T& y() { return m_y; }

		inline const T& x() const { return m_x; }
		inline const T& y() const { return m_y; }

	protected:
		
		T m_x;
		T m_y;

};

typedef vec2<float>   vec2f;
typedef vec2<double>  vec2d;
typedef vec2<uint8_t> vec2u;
typedef vec2<int32_t> vec2i;

