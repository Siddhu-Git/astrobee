/* Copyright (c) 2017, United States Government, as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * 
 * All rights reserved.
 * 
 * The Astrobee platform is licensed under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with the
 * License. You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

// Autogenerated from FMECA! DO NOT CHANGE!

#ifndef FF_UTIL_FF_FAULTS_H_
#define FF_UTIL_FF_FAULTS_H_

#include <string>

namespace ff_util {

enum FaultKeys {
  UNKNOWN_FAULT_KEY,
  LOAD_TOO_HIGH,
  NO_COMMUNICATION_SPEEDCAM,
  INITIALIZATION_FAILED,
  MEMORY_USAGE_TOO_HIGH,
  BAD_ACCEL_DATA,
  NO_IMU_DATA_PACKETS,
  TEMPERATURE_TOO_HIGH,
  HEARTBEAT_MISSING,
  VELOCITY_TOO_HIGH,
  TIME_DIFF_TOO_HIGH,
  LOCALIZATION_PIPELINE_UNSTABLE,
  ESTIMATE_CONFIDENCE_TOO_LOW,
  DISK_USAGE_TOO_HIGH,
  NO_COMMUNICATION_HAZCAM,
  KINETIC_ENERGY_INCREASING,
  SELF_TEST_FAULT_CODE,
  DISK_CONFIG_INVALID,
  POSE_ESTIMATE_NON_PHYSICAL,
  DISK_USAGE_HIGH,
  HARDWARE_ERROR_FAULT_CODE,
  BAD_GYRO_DATA,
  CONTROL_CYCLE_OVERRUN,
  IMU_OVERTEMP,
  IMU_ACCEL_ABOVE_LIMITS
};

constexpr int kFaultKeysSize = 25;

static std::string fault_keys[] = {
    "UNKNOWN_FAULT_KEY",
    "LOAD_TOO_HIGH",
    "NO_COMMUNICATION_SPEEDCAM",
    "INITIALIZATION_FAILED",
    "MEMORY_USAGE_TOO_HIGH",
    "BAD_ACCEL_DATA",
    "NO_IMU_DATA_PACKETS",
    "TEMPERATURE_TOO_HIGH",
    "HEARTBEAT_MISSING",
    "VELOCITY_TOO_HIGH",
    "TIME_DIFF_TOO_HIGH",
    "LOCALIZATION_PIPELINE_UNSTABLE",
    "ESTIMATE_CONFIDENCE_TOO_LOW",
    "DISK_USAGE_TOO_HIGH",
    "NO_COMMUNICATION_HAZCAM",
    "KINETIC_ENERGY_INCREASING",
    "SELF_TEST_FAULT_CODE",
    "DISK_CONFIG_INVALID",
    "POSE_ESTIMATE_NON_PHYSICAL",
    "DISK_USAGE_HIGH",
    "HARDWARE_ERROR_FAULT_CODE",
    "BAD_GYRO_DATA",
    "CONTROL_CYCLE_OVERRUN",
    "IMU_OVERTEMP",
    "IMU_ACCEL_ABOVE_LIMITS"
};

}  // namespace ff_util

#endif  // FF_UTIL_FF_FAULTS_H_
