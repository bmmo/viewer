#pragma once

#include <cstdint>

template <typename T> class vec3 {

	public:

		typedef T value_type;

		vec3() : m_x(0), m_y(0), m_z(0) {}
		vec3(const T& x, const T& y, const T& z) : m_x(x), m_y(y), m_z(z) {}
		vec3(const vec3& v) : m_x(v.m_x), m_y(v.m_y), m_z(v.m_z) {}

		inline T& x() { return m_x; }
		inline T& y() { return m_y; }
		inline T& z() { return m_z; }

		inline const T& x() const { return m_x; }
		inline const T& y() const { return m_y; }
		inline const T& z() const { return m_z; }

	protected:
		
		T m_x;
		T m_y;
		T m_z;

};

typedef vec3<float>   vec3f;
typedef vec3<double>  vec3d;
typedef vec3<uint8_t> vec3u;
typedef vec3<int32_t> vec3i;

