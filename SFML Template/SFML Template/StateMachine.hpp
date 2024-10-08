#pragma once

#include <memory>
#include <stack>
#include "State.hpp"

namespace Sonar {
    typedef std::unique_ptr<State> StateRef;

    class StateMachine {
        public:
            StateMachine() {}
            ~StateMachine() {} // destructor
            
            void AddState(StateRef newState, bool isReplacing = true);
            void RemoveState();
            void ProcessStateChanges();
            
            StateRef &GetActiveState();
        
        private:
            std::stack<StateRef> _states;
            StateRef _newState;
            bool _isAdding;
            bool _isRemoving;
            bool _isReplacing;
    };
}

