#pragma once

#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 1024

#define SPLASH_STATE_SHOW_TIME 3.0

#define SPLASH_STATE_BACKGROUND_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Splash Background.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/sky.png"
#define GAME_BACKGROUND_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/sky.png"
#define GAME_OVER_BACKGROUND_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/sky.png"

#define GAME_TITLE_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/title.png"
#define PLAY_BUTTON_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/PlayButton.png"

#define PIPE_UP_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/PipeUp.png"
#define PIPE_DOWN_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/PipeDown.png"
#define SCORING_PIPE_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/InvisibleScoringPipe.png"

#define LAND_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Land.png"

#define BIRD_FRAME_1_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/bird-01.png"
#define BIRD_FRAME_2_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/bird-02.png"
#define BIRD_FRAME_3_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/bird-03.png"
#define BIRD_FRAME_4_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/bird-04.png"

#define FLAPPY_FONT_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/fonts/FlappyFont.ttf"
#define GAME_OVER_TITLE_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Game-Over-Title.png"
#define GAME_OVER_BODY_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Game-Over-Body.png"
#define HIGHSCORE_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/Highscore.txt"

#define BRONZE_MEDAL_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Bronze-Medal.png"
#define SILVER_MEDAL_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Silver-Medal.png"
#define GOLD_MEDAL_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Gold-Medal.png"
#define PLATINUM_MEDAL_FILEPATH "/Users/jpark/c++/SFML/SFML Template/SFML Template/Resources/res/Platinum-Medal.png"

#define PIPE_MOVEMENT_SPEED 200.0f
#define PIPE_SPAWN_FREQUENCY 1.0f

#define BIRD_ANIMATION_DURATION 0.4f

#define BIRD_STATE_STILL 1
#define BIRD_STATE_FALLING 2
#define BIRD_STATE_FLYING 3

#define GRAVITY 350.0f
#define FLYING_SPEED 350.0f

#define FLYING_DURATION 0.25f

#define ROTATION_SPEED 100.0f
#define MAX_ROTATION 25.0f

enum GameStates {
    eReady,
    ePlaying,
    eGameOver
};

#define FLASH_SPEED 1500.0f
#define TIME_BEFORE_GAME_OVER_APPEARS 1.5f

#define BRONZE_MEDAL_SCORE 0
#define SILVER_MEDAL_SCORE 5
#define GOLD_MEDAL_SCORE 25
#define PLATINUM_MEDAL_SCORE 100
