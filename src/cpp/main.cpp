
/* cppsrc/main.cpp */
#include <napi.h>

#include "samples/helloWorld.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports)
{
  // return exports;
  return helloWorld::Init(env, exports);
}

NODE_API_MODULE(nodecpp, InitAll)
