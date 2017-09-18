#pragma once

namespace arc {

    class PythonObject {
    public:
        enum class Type { Function, Module };

        virtual ~PythonObject() = default;
        virtual Type getType() const = 0;
    };
}
