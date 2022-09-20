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

#ifndef NFSPLUGINSDK_GAME_CARBON_TYPES_ATTRIB_LAYOUTS_COLLISIONREACTIONSLAYOUT_H
#define NFSPLUGINSDK_GAME_CARBON_TYPES_ATTRIB_LAYOUTS_COLLISIONREACTIONSLAYOUT_H
#pragma once

#include <NFSPluginSDK/Game.Carbon/Types.h>

namespace NFSPluginSDK::Carbon::Attrib::Layouts {
  struct collisionreactionslayout {
    struct CollisionReactionRecord {
      float Elasticity;
      float RollHeight;
      float WeightBias;
      float MassScale;
      float StunSpeed;
      float StunTime;
    };

    CollisionReactionRecord REARSIDE_REACTION;
    CollisionReactionRecord FRONTSIDE_REACTION;
    CollisionReactionRecord FRONT_REACTION;
    CollisionReactionRecord REAR_REACTION;
  };
}  // namespace NFSPluginSDK::Carbon::Attrib::Layouts

#endif  // NFSPLUGINSDK_GAME_CARBON_TYPES_ATTRIB_LAYOUTS_COLLISIONREACTIONSLAYOUT_H