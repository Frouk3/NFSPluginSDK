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

#pragma once
#include <OpenSpeed/Game.ProStreet/Types.h>
#include <OpenSpeed/Game.ProStreet/Types/Attrib/Private.h>

namespace OpenSpeed::ProStreet::Attrib::Layouts {
  struct rigidbodyspecslayout {
    UMath::Vector4 WORLD_MOMENT_SCALE;
    UMath::Vector4 WALL_ELASTICITY;
    UMath::Vector4 OBJ_MOMENT_SCALE;
    UMath::Vector4 OBJ_ELASTICITY;
    UMath::Vector4 GROUND_MOMENT_SCALE;
    UMath::Vector4 GROUND_ELASTICITY;
    UMath::Vector4 DRAG_ANGULAR;
    UMath::Vector4 DRAG;
    UMath::Vector4 COLLISION_BOX_PAD;
    UMath::Vector4 CG;
    StringKey      DEFAULT_COL_BOX;
    StringKey      BASE_MATERIAL;
    Private        _Array_WALL_FRICTION;
    float          WALL_FRICTION[2];
    Private        _Array_OBJ_FRICTION;
    float          OBJ_FRICTION[2];
    Private        _Array_GROUND_FRICTION;
    float          GROUND_FRICTION[2];
    float          SLEEP_VELOCITY;
    bool           NO_WORLD_COLLISIONS;
    bool           NO_OBJ_COLLISIONS;
    bool           NO_GROUND_COLLISIONS;
    float          NATURAL_ANGULAR_DAMPING;
    bool           INSTANCE_COLLISIONS_3D;
    bool           IMMOBILE_OBJECT_COLLISIONS;
    float          GRAVITY;
  };
}  // namespace OpenSpeed::ProStreet::Attrib::Layouts