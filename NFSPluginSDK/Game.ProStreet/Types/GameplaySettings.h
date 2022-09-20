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

#ifndef NFSPLUGINSDK_GAME_PROSTREET_TYPES_GAMEPLAYSETTINGS_H
#define NFSPLUGINSDK_GAME_PROSTREET_TYPES_GAMEPLAYSETTINGS_H
#pragma once

#include <NFSPluginSDK/Game.ProStreet/Types.h>
#include <NFSPluginSDK/Game.ProStreet/Types/EA.h>

namespace NFSPluginSDK::ProStreet {
  struct GameplaySettings : EA::Memcard::IMemcardSavable {
    bool                AutosaveOn;
    bool                RearviewOn;
    bool                PipOn;
    bool                Damage;
    SpeedUnitType       SpeedoUnits;
    eMiniMapModes       RacingMiniMapMode;
    eMiniMapModes       ExploringMiniMapMode;
    bool                ReplayOn;
    bool                CrashPlaybackOn;
    bool                NamesAboveOn;
    std::uint32_t       MapItems;
    eWorldMapZoomLevels LastMapZoom;
    eWorldMapZoomLevels LastPursuitMapZoom;
    eWorldMapView       LastMapView;
    bool                MapScreenHelpShown;
    bool                MapScreenRandEncHelpShown;
    bool                JumpCam;
    float               HighlightCam;
  };
}  // namespace NFSPluginSDK::ProStreet

#endif  // NFSPLUGINSDK_GAME_PROSTREET_TYPES_GAMEPLAYSETTINGS_H