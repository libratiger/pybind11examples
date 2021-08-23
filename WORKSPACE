load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "pybind11_bazel",
  strip_prefix = "pybind11_bazel-26973c0ff320cb4b39e45bc3e4297b82bc3a6c09",
  urls = ["https://github.com/pybind/pybind11_bazel/archive/26973c0ff320cb4b39e45bc3e4297b82bc3a6c09.zip"],
)
http_archive(
  name = "pybind11",
  build_file = "@pybind11_bazel//:pybind11.BUILD",
  strip_prefix = "pybind11-2.7.1",
  urls = ["https://github.com/pybind/pybind11/archive/v2.7.1.tar.gz"],
)

load("@pybind11_bazel//:python_configure.bzl", "python_configure")
python_configure(name = "local_config_python", python_version = "3")


### The next two are to include tcmalloc
http_archive(
    name = "com_google_absl",
    urls = ["https://github.com/abseil/abseil-cpp/archive/ab01e0403a40813857a8e580d9cf1580ba0c4139.zip"],
    strip_prefix = "abseil-cpp-ab01e0403a40813857a8e580d9cf1580ba0c4139",
)

http_archive(
    name = "com_google_tcmalloc",
    urls = ["https://github.com/google/tcmalloc/archive/18236bcfc8a23188a50203dd280455b1c5e2da38.zip"],
    strip_prefix = "tcmalloc-18236bcfc8a23188a50203dd280455b1c5e2da38",
)

## we can fork the tcmalloc lib and remove the following tcmalloc's testing-only dependency
http_archive(
    name = "rules_fuzzing",
    sha256 = "a5734cb42b1b69395c57e0bbd32ade394d5c3d6afbfe782b24816a96da24660d",
    strip_prefix = "rules_fuzzing-0.1.1",
    urls = ["https://github.com/bazelbuild/rules_fuzzing/archive/v0.1.1.zip"],
)
load("@rules_fuzzing//fuzzing:repositories.bzl", "rules_fuzzing_dependencies")
rules_fuzzing_dependencies()
load("@rules_fuzzing//fuzzing:init.bzl", "rules_fuzzing_init")
rules_fuzzing_init()