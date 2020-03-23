#include <napi.h>
#include <string>
#include "base.h"

// native C++ function that is assigned to `greetHello` property on `exports` object
Napi::String base_bind(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    // call `base` function from `base.cpp` file
    std::string str = (std::string) info[0].ToString();
    std::string result = base(str);

    // return new `Napi::String` value
    return Napi::String::New(env, result);
}

// callback method when module is registered with Node.js
Napi::Object Init(Napi::Env env, Napi::Object exports) {
    // set a key on `exports` object
    exports.Set(
        Napi::String::New(env, "base"), // property name => "greetHello"
        Napi::Function::New(env, base_bind) // property value => `greetHello` function
    );

    // return `exports` object (always)
    return exports;
}

// register `greet` module which calls `Init` method
NODE_API_MODULE(greet, Init)