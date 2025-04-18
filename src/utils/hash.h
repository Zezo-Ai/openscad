#pragma once

#include <cstddef>
#include <functional>

#include <Eigen/Core>

#include "geometry/linalg.h"

using Vector3l = Eigen::Matrix<int64_t, 3, 1>;

namespace std {
template <> struct hash<Vector3f> { std::size_t operator()(const Vector3f& s) const; };
template <> struct hash<Vector3d> { std::size_t operator()(const Vector3d& s) const; };
template <> struct hash<Vector3l> { std::size_t operator()(const Vector3l& s) const; };
}

namespace Eigen {
size_t hash_value(Vector3f const& v);
size_t hash_value(Vector3d const& v);
size_t hash_value(Vector3l const& v);
}
