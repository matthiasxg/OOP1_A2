//---------------------------------------------------------------------------------------------------------------------
// StartTile.hpp
//
// Class for Start Tile
//
// Authors: Triochter Bande (Grill Matthias, Killer Lorenz, Nagy Lukas)
//---------------------------------------------------------------------------------------------------------------------
//

#ifndef A2_START_TILE_HPP
#define A2_START_TILE_HPP

#include "Tile.hpp"

const size_t PLAYER_TILE_ROW = 2;

enum class PlayerColor;

class StartTile : public Tile
{
  private:
    PlayerColor player_color_;

  public:
    StartTile(PlayerColor player_color);

    PlayerColor getPlayerColor();

    std::vector<std::string> getTileString();
};


#endif //A2_START_TILE_HPP
