#include <pybind11/pybind11.h>



class Cat {
 public:
  Cat() { myname = "cat"; }
  void hello() {printf("hello cat\n");}
  void task_log() {printf("task_log cat\n");}
 private:
  std::string myname;
};

class Dog {
 public:
  Dog() { myname = "dog"; }
  void hello() {printf("hello dog\n");}
  void task_log() {printf("task_log dog\n");}
 private:
  std::string myname;
};


template <typename RunnerType>
class RunnerWrapper {
 public:
  RunnerWrapper() { ; };
  ~RunnerWrapper();
  void hello();
  void task_log();
 private:
  RunnerType *runner;
};



