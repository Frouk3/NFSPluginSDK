// clang-format off
//
//    Copyright (C) 2022 Berkay Yigit <mail@berkay.link>
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU Affero General Public License as published
//    by the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU Affero General Public License for more details.
//
//    You should have received a copy of the GNU Affero General Public License
//    along with this program. If not, see <https://www.gnu.org/licenses/>.
//
// clang-format on

#ifndef NFSPLUGINSDK_GAME_CARBON_TYPES_UCRC32_H
#define NFSPLUGINSDK_GAME_CARBON_TYPES_UCRC32_H
#pragma once

#include <NFSPluginSDK/Game.Carbon/Types.h>

namespace NFSPluginSDK::Carbon {
  struct UCrc32 {
    std::uint32_t mCRC;

    UCrc32() = default;
    UCrc32(std::uint32_t crc) : mCRC(crc) {}

    operator std::uint32_t() const noexcept { return mCRC; }
    operator const std::uint32_t() const noexcept { return mCRC; }
  };
}  // namespace NFSPluginSDK::Carbon

#endif  // NFSPLUGINSDK_GAME_CARBON_TYPES_UCRC32_H