#pragma once

namespace Sonar {
    class State { // Or Screen
        public:
            virtual void Init() = 0;
            virtual void HandleInput() = 0;
            virtual void Update(float dt) = 0;
            virtual void Draw(float dt) = 0; // frame independent rate
            virtual void Pause() {}
            virtual void Resume() {}
    };
}
