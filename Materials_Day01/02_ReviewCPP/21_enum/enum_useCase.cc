#include<iostream>
// ✅ 1. State Machines / Finite States
// When modeling clear states in a process or system:

enum class DeviceState {
    Idle,
    Connecting,
    Connected,
    Error
};

DeviceState state = DeviceState::Idle;



// ✅ 2. Error Handling
// Custom error codes in a type-safe way:


enum class ErrorCode {
    None,
    NotFound,
    Timeout,
    PermissionDenied
};
ErrorCode openFile(const std::string& path);



// ✅ 3. Configuration Options / Flags
// Modeling a set of discrete config modes:


enum class LogLevel {
    Debug,
    Info,
    Warning,
    Error,
    Fatal
};


// ✅ 4. Categorizing Types / Variants
// For example, representing vehicle types or UI themes:


enum class VehicleType {
    Car,
    Truck,
    Motorcycle,
    Bicycle
};


// ✅ 5. Command Types / User Inputs
// Handling user input or system commands:


enum class Command {
    Start,
    Stop,
    Pause,
    Resume
};



// ✅ 6. Safe Switch Statements
// Because enum class requires scope qualification, it reduces name collisions:

switch (state) {
    case DeviceState::Idle:      // safe and explicit
        break;
    case DeviceState::Connected:
        break;
    // ...
}


// ✅ 7. Strong Typing in APIs
// Avoids mixing different enums accidentally:

enum class FileType {
    Text,
    Binary
};

enum class Permission {
    Read,
    Write,
    Execute
};

