// Copyright 2023 Google LLC
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

#import "internal/platform/implementation/apple/ble_peripheral.h"

#import <CoreBluetooth/CoreBluetooth.h>
#import <Foundation/Foundation.h>

#include <string>

#include "internal/platform/implementation/ble_v2.h"
#include "internal/platform/prng.h"

namespace nearby {
namespace apple {

BlePeripheral::BlePeripheral(CBPeripheral *peripheral)
    : peripheral_(peripheral), unique_id_(Prng().NextInt64()) {}

std::string BlePeripheral::GetAddress() const {
  return peripheral_.identifier.UUIDString.UTF8String;
}

api::ble_v2::BlePeripheral::UniqueId BlePeripheral::GetUniqueId() const { return unique_id_; }

}  // namespace apple
}  // namespace nearby
