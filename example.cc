#include "example.h"

namespace py = pybind11;



template <typename RunnerType>
void RunnerWrapper<RunnerType>::hello() {
  this->runner->hello();
}


template <typename RunnerType>
void RunnerWrapper<RunnerType>::task_log() {
  this->runner->task_log();
}


template <typename T>
static void export_other1(const std::string &name, py::module_ &m) {
    py::class_<T>(m, "Cat").def(py::init<>())
        .def("hello", &T::hello);
}




template <typename F>
void export_other2(const std::string &name, py::module_ &m){};


extern template void export_other2<Dog>(const std::string &name, py::module_ &m);


PYBIND11_MODULE(example, m) {
  export_other1<Cat>("Cat", m);
  export_other2<Dog>("Dog", m);
}
