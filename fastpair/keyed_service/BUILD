# Copyright 2023 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

licenses(["notice"])

cc_library(
    name = "keyed_service",
    srcs = [
        "fast_pair_mediator.cc",
        "fast_pair_mediator_factory.cc",
    ],
    hdrs = [
        "fast_pair_mediator.h",
        "fast_pair_mediator_factory.h",
    ],
    visibility = [
        "//fastpair:__subpackages__",
    ],
    deps = [
        "//fastpair/common",
        "//fastpair/internal/mediums",
        "//fastpair/pairing",
        "//fastpair/repository",
        "//fastpair/repository:device_repository",
        "//fastpair/repository:repository_impl",
        "//fastpair/scanning:scanner",
        "//fastpair/server_access",
        "//fastpair/ui:fast_pair_ui",
        "//internal/account",
        "//internal/auth:oauth_lib",
        "//internal/auth:types",
        "//internal/flags:nearby_flags",
        "//internal/network:nearby_http_client",
        "//internal/network:types",
        "//internal/platform:base",
        "//internal/platform:logging",
        "//internal/platform:types",
        "//internal/platform/flags:platform_flags",
        "//internal/preferences",
        "@com_google_absl//absl/status",
    ],
)

cc_test(
    name = "fast_pair_mediator_test",
    size = "small",
    srcs = [
        "fast_pair_mediator_factory_test.cc",
        "fast_pair_mediator_test.cc",
    ],
    shard_count = 16,
    deps = [
        ":keyed_service",
        "//fastpair/testing",
        "//fastpair/ui:fast_pair_ui",
        "//fastpair/ui:mock_fast_pair_ui",
        "//internal/account:test_support",
        "//internal/network:nearby_http_client",
        "//internal/platform:test_util",
        "//internal/platform:types",
        "//internal/platform/implementation/g3",  # build_cleaner: keep
        "//internal/test",
        "//internal/test/google3_only:test",
        "@com_github_protobuf_matchers//protobuf-matchers",
        "@com_google_absl//absl/strings",
        "@com_google_googletest//:gtest_main",
    ],
)
