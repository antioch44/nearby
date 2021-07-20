// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Media_Devices_Core_2_H
#define WINRT_Windows_Media_Devices_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.Media.Devices.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core
{
    struct __declspec(empty_bases) CameraIntrinsics : winrt::Windows::Media::Devices::Core::ICameraIntrinsics,
        impl::require<CameraIntrinsics, winrt::Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        CameraIntrinsics(std::nullptr_t) noexcept {}
        CameraIntrinsics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::ICameraIntrinsics(ptr, take_ownership_from_abi) {}
        CameraIntrinsics(winrt::Windows::Foundation::Numerics::float2 const& focalLength, winrt::Windows::Foundation::Numerics::float2 const& principalPoint, winrt::Windows::Foundation::Numerics::float3 const& radialDistortion, winrt::Windows::Foundation::Numerics::float2 const& tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight);
        CameraIntrinsics(CameraIntrinsics const&) noexcept = default;
        CameraIntrinsics(CameraIntrinsics&&) noexcept = default;
        CameraIntrinsics& operator=(CameraIntrinsics const&) & noexcept = default;
        CameraIntrinsics& operator=(CameraIntrinsics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DepthCorrelatedCoordinateMapper : winrt::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper
    {
        DepthCorrelatedCoordinateMapper(std::nullptr_t) noexcept {}
        DepthCorrelatedCoordinateMapper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper(ptr, take_ownership_from_abi) {}
        DepthCorrelatedCoordinateMapper(DepthCorrelatedCoordinateMapper const&) noexcept = default;
        DepthCorrelatedCoordinateMapper(DepthCorrelatedCoordinateMapper&&) noexcept = default;
        DepthCorrelatedCoordinateMapper& operator=(DepthCorrelatedCoordinateMapper const&) & noexcept = default;
        DepthCorrelatedCoordinateMapper& operator=(DepthCorrelatedCoordinateMapper&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameControlCapabilities : winrt::Windows::Media::Devices::Core::IFrameControlCapabilities,
        impl::require<FrameControlCapabilities, winrt::Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        FrameControlCapabilities(std::nullptr_t) noexcept {}
        FrameControlCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameControlCapabilities(ptr, take_ownership_from_abi) {}
        FrameControlCapabilities(FrameControlCapabilities const&) noexcept = default;
        FrameControlCapabilities(FrameControlCapabilities&&) noexcept = default;
        FrameControlCapabilities& operator=(FrameControlCapabilities const&) & noexcept = default;
        FrameControlCapabilities& operator=(FrameControlCapabilities&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameController : winrt::Windows::Media::Devices::Core::IFrameController,
        impl::require<FrameController, winrt::Windows::Media::Devices::Core::IFrameController2>
    {
        FrameController(std::nullptr_t) noexcept {}
        FrameController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameController(ptr, take_ownership_from_abi) {}
        FrameController();
        FrameController(FrameController const&) noexcept = default;
        FrameController(FrameController&&) noexcept = default;
        FrameController& operator=(FrameController const&) & noexcept = default;
        FrameController& operator=(FrameController&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameExposureCapabilities : winrt::Windows::Media::Devices::Core::IFrameExposureCapabilities
    {
        FrameExposureCapabilities(std::nullptr_t) noexcept {}
        FrameExposureCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureCapabilities(ptr, take_ownership_from_abi) {}
        FrameExposureCapabilities(FrameExposureCapabilities const&) noexcept = default;
        FrameExposureCapabilities(FrameExposureCapabilities&&) noexcept = default;
        FrameExposureCapabilities& operator=(FrameExposureCapabilities const&) & noexcept = default;
        FrameExposureCapabilities& operator=(FrameExposureCapabilities&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameExposureCompensationCapabilities : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities
    {
        FrameExposureCompensationCapabilities(std::nullptr_t) noexcept {}
        FrameExposureCompensationCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities(ptr, take_ownership_from_abi) {}
        FrameExposureCompensationCapabilities(FrameExposureCompensationCapabilities const&) noexcept = default;
        FrameExposureCompensationCapabilities(FrameExposureCompensationCapabilities&&) noexcept = default;
        FrameExposureCompensationCapabilities& operator=(FrameExposureCompensationCapabilities const&) & noexcept = default;
        FrameExposureCompensationCapabilities& operator=(FrameExposureCompensationCapabilities&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameExposureCompensationControl : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationControl
    {
        FrameExposureCompensationControl(std::nullptr_t) noexcept {}
        FrameExposureCompensationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationControl(ptr, take_ownership_from_abi) {}
        FrameExposureCompensationControl(FrameExposureCompensationControl const&) noexcept = default;
        FrameExposureCompensationControl(FrameExposureCompensationControl&&) noexcept = default;
        FrameExposureCompensationControl& operator=(FrameExposureCompensationControl const&) & noexcept = default;
        FrameExposureCompensationControl& operator=(FrameExposureCompensationControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameExposureControl : winrt::Windows::Media::Devices::Core::IFrameExposureControl
    {
        FrameExposureControl(std::nullptr_t) noexcept {}
        FrameExposureControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureControl(ptr, take_ownership_from_abi) {}
        FrameExposureControl(FrameExposureControl const&) noexcept = default;
        FrameExposureControl(FrameExposureControl&&) noexcept = default;
        FrameExposureControl& operator=(FrameExposureControl const&) & noexcept = default;
        FrameExposureControl& operator=(FrameExposureControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameFlashCapabilities : winrt::Windows::Media::Devices::Core::IFrameFlashCapabilities
    {
        FrameFlashCapabilities(std::nullptr_t) noexcept {}
        FrameFlashCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFlashCapabilities(ptr, take_ownership_from_abi) {}
        FrameFlashCapabilities(FrameFlashCapabilities const&) noexcept = default;
        FrameFlashCapabilities(FrameFlashCapabilities&&) noexcept = default;
        FrameFlashCapabilities& operator=(FrameFlashCapabilities const&) & noexcept = default;
        FrameFlashCapabilities& operator=(FrameFlashCapabilities&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameFlashControl : winrt::Windows::Media::Devices::Core::IFrameFlashControl
    {
        FrameFlashControl(std::nullptr_t) noexcept {}
        FrameFlashControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFlashControl(ptr, take_ownership_from_abi) {}
        FrameFlashControl(FrameFlashControl const&) noexcept = default;
        FrameFlashControl(FrameFlashControl&&) noexcept = default;
        FrameFlashControl& operator=(FrameFlashControl const&) & noexcept = default;
        FrameFlashControl& operator=(FrameFlashControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameFocusCapabilities : winrt::Windows::Media::Devices::Core::IFrameFocusCapabilities
    {
        FrameFocusCapabilities(std::nullptr_t) noexcept {}
        FrameFocusCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFocusCapabilities(ptr, take_ownership_from_abi) {}
        FrameFocusCapabilities(FrameFocusCapabilities const&) noexcept = default;
        FrameFocusCapabilities(FrameFocusCapabilities&&) noexcept = default;
        FrameFocusCapabilities& operator=(FrameFocusCapabilities const&) & noexcept = default;
        FrameFocusCapabilities& operator=(FrameFocusCapabilities&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameFocusControl : winrt::Windows::Media::Devices::Core::IFrameFocusControl
    {
        FrameFocusControl(std::nullptr_t) noexcept {}
        FrameFocusControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFocusControl(ptr, take_ownership_from_abi) {}
        FrameFocusControl(FrameFocusControl const&) noexcept = default;
        FrameFocusControl(FrameFocusControl&&) noexcept = default;
        FrameFocusControl& operator=(FrameFocusControl const&) & noexcept = default;
        FrameFocusControl& operator=(FrameFocusControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameIsoSpeedCapabilities : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities
    {
        FrameIsoSpeedCapabilities(std::nullptr_t) noexcept {}
        FrameIsoSpeedCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities(ptr, take_ownership_from_abi) {}
        FrameIsoSpeedCapabilities(FrameIsoSpeedCapabilities const&) noexcept = default;
        FrameIsoSpeedCapabilities(FrameIsoSpeedCapabilities&&) noexcept = default;
        FrameIsoSpeedCapabilities& operator=(FrameIsoSpeedCapabilities const&) & noexcept = default;
        FrameIsoSpeedCapabilities& operator=(FrameIsoSpeedCapabilities&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameIsoSpeedControl : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedControl
    {
        FrameIsoSpeedControl(std::nullptr_t) noexcept {}
        FrameIsoSpeedControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedControl(ptr, take_ownership_from_abi) {}
        FrameIsoSpeedControl(FrameIsoSpeedControl const&) noexcept = default;
        FrameIsoSpeedControl(FrameIsoSpeedControl&&) noexcept = default;
        FrameIsoSpeedControl& operator=(FrameIsoSpeedControl const&) & noexcept = default;
        FrameIsoSpeedControl& operator=(FrameIsoSpeedControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VariablePhotoSequenceController : winrt::Windows::Media::Devices::Core::IVariablePhotoSequenceController
    {
        VariablePhotoSequenceController(std::nullptr_t) noexcept {}
        VariablePhotoSequenceController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IVariablePhotoSequenceController(ptr, take_ownership_from_abi) {}
        VariablePhotoSequenceController(VariablePhotoSequenceController const&) noexcept = default;
        VariablePhotoSequenceController(VariablePhotoSequenceController&&) noexcept = default;
        VariablePhotoSequenceController& operator=(VariablePhotoSequenceController const&) & noexcept = default;
        VariablePhotoSequenceController& operator=(VariablePhotoSequenceController&&) & noexcept = default;
    };
}
#endif