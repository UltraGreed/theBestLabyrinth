//
// Created by ultragreed on 10/10/22.
//

#pragma once
#include "SFML/Graphics.hpp"
#include "Player.h"
#include "Camera.h"
#include "Maze.h"


class GameState {
public:
    GameState() ;

    bool Update() ;


private:
    sf::Clock _clock;
    Player *_player;
    Camera *_camera;
    Maze *_maze;
    sf::RenderWindow *_window;

    void HandleInput(char input) ;

    bool HandleEvents();
};

