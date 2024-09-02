package(default_visibility = ["//visibility:public"])

cc_library(
    name = "libhellojp",
    srcs = ["hellojp.cc"],
    hdrs = ["hellojp.h"],
    deps = [],
)

cc_test(
    name = "libhellojp_test",
    srcs = ["hellojp_test.cc"],
    deps = [
        ":libhellojp",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)