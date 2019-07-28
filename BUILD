package(default_visibility = ["//visibility:public"])

cc_library(
    name = "func_lib",
    srcs = ["src/func.hpp"],
)

cc_binary(
    name = "main",
    srcs = [
        "src/main.cpp",
    ],
    deps = [":func_lib"],
    data = [
        "test_data"
    ]
)

cc_test(
    name = "main_test_1",
    srcs = ["test/test_cases/test1.cpp"],
    deps = [
        ":func_lib",
        "@gtest//:gtest",
        "@gtest//:gtest_main" # Only if hello_test.cc has no main()
    ],
)

cc_test(
    name = "main_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":func_lib",
        "@gtest//:gtest",
        "@gtest//:gtest_main" # Only if hello_test.cc has no main()
    ],
    data = [
        "test_data"
    ]
)

filegroup(
    name = "test_data",
    srcs = glob([
        "test/**/*.txt",
    ]),
    data = glob([
        "test/**/*.txt",
    ]),
)

test_suite(
    name = "asd",
    tests = [
    ]
)