load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")
load("@pybind11_bazel//:build_defs.bzl", "pybind_library")


pybind_extension(
    name = "example",

    srcs = [
        "example.h",
        "example.cc",
        "example2.cc"
    ],
)


py_binary(
    name = "foo",
    srcs = ["foo.py"],
    data = [
        ":example.so",   # here is how to include the c++ lib for py
    ],
    deps = [
    ],
)

