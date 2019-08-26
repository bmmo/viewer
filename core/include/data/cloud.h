#pragma once

// viewer
#include <vec3.h>
#include <vec4.h>

// c++ stl
#include <vector>

namespace data {

class cloud {

	public:

		cloud();

	protected:

		std::vector<vec3f> m_pts;
		std::vector<vec4f> m_colors;

};

}
