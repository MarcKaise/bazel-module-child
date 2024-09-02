package(default_visibility = ["//visibility:public"])

cc_library(
    name = "libhelloen",
    srcs = ["helloen.cc"],
    hdrs = ["helloen.h"],
    deps = [],
)

cc_test(
    name = "libhelloen_test",
    srcs = ["helloen_test.cc"],
    deps = [
        ":libhelloen",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)