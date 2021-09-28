#include "example.h"
#include <cstring>

namespace py = pybind11;





template <typename F>
void export_other2(const std::string &name, py::module_ &m) {
  py::class_<F>(m, "Dog")
    .def(py::init<>())
    .def("hello", &F::hello);
}


template void export_other2<Dog>(const std::string &name, py::module_ &m);
